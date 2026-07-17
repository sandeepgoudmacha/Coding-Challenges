/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Compare {
public:
    bool operator()(ListNode* a, ListNode* b) {
        return a->val > b->val;
    }
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, Compare>pq;
        for(auto x:lists){
            if(x!=NULL){
                pq.push(x);
            }
        }
        ListNode* dummy=new ListNode(-1);
        ListNode* temp=dummy;
        while(!pq.empty()){
            ListNode* newNode=pq.top();
            pq.pop();
            temp->next=newNode;
            temp=newNode;
            if(newNode->next!=NULL){
                pq.push(newNode->next);
            }
        }
        return dummy->next;
    }
};