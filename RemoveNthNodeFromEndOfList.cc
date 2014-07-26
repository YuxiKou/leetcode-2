#include <iostream>

using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    ListNode *removeNthFromEnd(ListNode *head, int n) {
    	if(head == NULL) return NULL;
    	ListNode *newHead = new ListNode(0);
    	newHead->next = head;
        ListNode *first = newHead;
        ListNode *second = newHead;
        for(int i = 0; i <= n; ++ i)
        {
        	second = second->next;
        }
        while(second != NULL)
        {
        	first = first->next;
        	second = second->next;
        }
        ListNode *temp = first->next;
        first->next = temp->next;
        delete temp;
        return newHead->next;
    }
};

int main()
{
	Solution sol;
	ListNode *head = new ListNode(1);
	cout<<sol.removeNthFromEnd(head, 1)<<endl;
	return 0;
}