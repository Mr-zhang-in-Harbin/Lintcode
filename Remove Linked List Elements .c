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
     * @param head: a ListNode
     * @param val: An integer
     * @return: a ListNode
     */
    ListNode * removeElements(ListNode * head, int val) {
        // write your code here
        /*ListNode *p;
        p->next=head;
        head=p;
        while (head->next!=NULL)
        {
            if (head->next->val==val)
            {
                ListNode *q=head->next;
                head->next=head->next->next;
                free(q);
            }
            else head=head->next;
        }
        return p->next;*/
        
        //上一个失败的原因是对指针的概念不清楚, ListNode *p;并没有创建新的节点,所以head前面还是没有空的头节点,head=p;这一句也没有改变head的值;
        
         ListNode p;
        p.next=head;
        head=&p;
        while (head->next!=NULL)
        {
            if (head->next->val==val)
            {
                ListNode *q=head->next;
                head->next=head->next->next;
                free(q);
            }
            else head=head->next;
        }
        return p.next;
    }
};
