
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
  public:
	ListNode *deleteDuplicates(ListNode *head) {
		if(head == NULL) return NULL;
		ListNode *curNode = head;
		ListNode *nxtNode = head->next;
		while(nxtNode != NULL)
		{
			while(nxtNode != NULL && nxtNode->val == curNode->val) nxtNode = nxtNode->next;
			curNode->next = nxtNode;
			curNode = nxtNode;
			if(curNode == NULL) break;
			nxtNode = curNode->next;
		}
		return head;
	}
};