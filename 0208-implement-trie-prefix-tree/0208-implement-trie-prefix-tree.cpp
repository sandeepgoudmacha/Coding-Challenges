class TrieNode{
    public:
    TrieNode * child[26];
    bool flag;
    TrieNode(){
        flag=false;
        for(auto &a : child){
            a=NULL;
        }
    }
};
class Trie {
     TrieNode* root;
public:
  
    Trie() {
        root=new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* p=root;
        for(auto & c:word){
            if(p->child[c-'a']==NULL){
                p->child[c-'a'] = new TrieNode();

            }
            p=p->child[c-'a'];
        }
        p->flag=true;
    }
    
    bool search(string word) {
        TrieNode* p=root;
        for(auto & x:word){
            if(p->child[x-'a']==NULL) return false;
            p=p->child[x-'a'];
        }
        return p->flag;
    }
    
    bool startsWith(string prefix) {
        TrieNode* p = root;

    for(char c : prefix){

        if(p->child[c-'a']==NULL)
            return false;

        p = p->child[c-'a'];
    }

    return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */