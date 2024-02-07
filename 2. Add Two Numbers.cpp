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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res=new ListNode();
        ListNode* dummy=res;
        int carry=0;
        while(l1 || l2 || carry){
            int currSum=0;
            if(l1){
                currSum+=l1->val;
                l1=l1->next;
            }
            if(l2){
                currSum+=l2->val;
                l2=l2->next;
            }
            currSum+=carry;
            carry=currSum/10;
            ListNode* newNode = new ListNode(currSum%10);
       //     newNode->val = ;
            dummy->next = newNode;
            dummy=dummy->next;

        }
    return res->next;
    }
};
