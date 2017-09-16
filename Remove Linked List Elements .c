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
        
        //��һ��ʧ�ܵ�ԭ���Ƕ�ָ��ĸ�����, ListNode *p;��û�д����µĽڵ�,����headǰ�滹��û�пյ�ͷ�ڵ�,head=p;��һ��Ҳû�иı�head��ֵ;
        
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
