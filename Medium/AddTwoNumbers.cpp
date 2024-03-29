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
        ListNode Head(0);
        ListNode *l3 = &Head;
        int carry = 0, sum;
        while(l1 != nullptr || l2 != nullptr){
            sum = carry;
            if(l1) sum += l1->val;
            if(l2) sum += l2->val;
            if(sum > 9)
            {
                carry = sum / 10;
                sum %= 10;
            }
            else
                carry = 0;
            l3->next = new ListNode(sum);
            l3 = l3->next;
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }
        if(carry != 0){
            l3->next = new ListNode(carry);
            l3 = l3->next;
        }
        return Head.next;
    }
};
