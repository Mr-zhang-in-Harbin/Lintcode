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
    /*
     * @param l1: the first list
     * @param l2: the second list
     * @return: the sum list of l1 and l2 
     */
     //д�ķǳ�����,����Ҫ�Ľ� 
    ListNode * addLists(ListNode * l1, ListNode * l2) {
        // write your code here
        int a = 0;
	ListNode *p = l1, *q = l2, *result=new ListNode(0), *t=new ListNode(0);
	t = result;
	while (p != NULL&&q != NULL)
	{
		ListNode *temp = new ListNode(0);
		temp->val = p->val + q->val;
		if (a == 1)
		{
			temp->val++;
			a = 0;
		}
		if (temp->val >= 10)
		{
			temp->val -= 10;
			a = 1;
		}
		p = p->next;
		q = q->next;
		t->next = temp;
		t = t->next;
	}
	if (q != NULL)
		p = q;
	while (p != NULL)
	{
		ListNode *temp = new ListNode(0);
		temp->val = p->val;
		if (a == 1)
		{
			temp->val++;
			a = 0;
		}
		if (temp->val >= 10)
		{
			temp->val -= 10;
			a = 1;
		}
		p = p->next;
		t->next = temp;
		t = t->next;
	}
	if (a == 1)
		t->next = new ListNode(1);
	return result->next;
        /*ListNode *p=new ListNode(8);
        return p;*/
    }
};
