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
    ListNode *swapPairs(ListNode *head) {
    	if(head == NULL) return NULL;
  		ListNode *newHead = new ListNode(0);
  		newHead->next = head;
  		ListNode *curNode = newHead;
  		ListNode *firstNode = NULL;
  		ListNode *secondNode = NULL;
  		while(curNode != NULL)
  		{
  			firstNode = curNode->next;
  			if(firstNode == NULL) break;
  			secondNode = firstNode->next;
  			if(secondNode == NULL) break;
  			ListNode *nextNode = secondNode->next;
  			curNode->next = secondNode;
  			firstNode->next = secondNode->next;
  			secondNode->next = firstNode;
  			curNode = firstNode;
  		}
  		return newHead->next;
    }
};