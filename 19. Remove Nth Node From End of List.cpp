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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr=head;
        int count=0;
        while(curr){
            count++;
            curr=curr->next;
        }
        ListNode* newHead=head;
        int go = count-n;
        if(go==0) return head->next;
        go--;
        cout<<go;
        while(go!=0){
            go--;
            newHead=newHead->next;
        }
        newHead->next=newHead->next->next;
        return head;

    }
};
