
class Solution {

  public:
  class Node{
    public:
    Node* child[26];
    bool flag;
    Node(){
        flag=false;
        for(int i=0;i<26;i++){
            child[i]=NULL;
        }
    }
};
Node* root;
Solution(){
    root=new Node();
}

void insert(string word){
    Node* p=root;
    for(int i=0;i<word.size();i++){
        if(p->child[word[i]-'a']==NULL){
            p->child[word[i]-'a']=new Node();
        }
        p=p->child[word[i]-'a'];
    }
     p->flag=true;
}
bool check(string word){
    Node* p=root;
    for(int i=0;i<word.size();i++){
        if(p->child[word[i]-'a']!=NULL){
            p=p->child[word[i]-'a'];
            if(p->flag==false) return false;
        }
        else return false;
    }
    return true;
}

    string longestString(vector<string> &words) {
        // code here
        Solution* trie=new Solution();
        
        for(auto word:words){
            trie->insert(word);
        }
        string r="";
        for(auto w:words){
            if(trie->check(w)==true){
                if(w.size()>r.size()){
                    r=w;
                }
                else if(w.size() == r.size()){
                    if(w<r){
                        r=w;
                    }
                }
            }
        }
        // if(r==)
        return r;
    }
};