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
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* prev=NULL,*curr=list1;
        ListNode* second = list2;
        int count=0;
        while(count != a){
            prev=curr;
            curr=curr->next;
            count++;
        }
        while(count != b){
            curr=curr->next;
            count++;
        }
        prev->next=list2;
        while(list2->next){
            prev=list2->next;
            list2=list2->next;
        }
       // cout<<prev->val;
            prev->next=curr->next;
        return list1;
    }
};
