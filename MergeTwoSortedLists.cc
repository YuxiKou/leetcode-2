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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
  		ListNode *head = new ListNode(0);
  		ListNode *curNode = head;
  		while(true)
  		{
  			if(l1 == NULL) 
  			{
  				curNode->next = l2;
  				break;
  			}
  			if(l2 == NULL)
  			{
  				curNode->next = l1;
  				break;
  			}
  			if(l1->val < l2->val)
  			{
  				curNode->next = l1;
  				l1 = l1->next;
  			}
  			else
  			{
  				curNode->next = l2;
  				l2 = l2->next;
  			}
  			curNode = curNode->next;
  		}
  		return head->next;
    }
};