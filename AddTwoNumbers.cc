/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    	if(l1 == NULL) return l2;
    	if(l2 == NULL) return l1;
        int sum = 0;
        int carry = 0;
        ListNode *ind1 = l1;
        ListNode *ind2 = l2;
        ListNode *head = new ListNode(0);
        ListNode *curNode = head;
        while(l1 != NULL || l2 != NULL)
        {
        	sum = carry;
        	if(l1 != NULL) 
        	{
        		sum += l1->val;
        		l1 = l1->next;
        	}
        	if(l2 != NULL)
        	{
        		sum += l2->val;
        		l2 = l2->next;
        	}
        	carry = sum / 10;
        	sum %= 10;
        	curNode->next = new ListNode(sum);
        	curNode = curNode->next;
        }
        if(carry > 0)
        {
        	curNode->next = new ListNode(carry);
        }
        return head->next;
    }
};