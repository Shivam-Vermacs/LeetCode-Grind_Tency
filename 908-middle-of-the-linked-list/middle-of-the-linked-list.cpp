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

 int lengthofLL(ListNode* head)
 {
    ListNode* temp=head;
    int cnt=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        cnt++;
    }
    return cnt;
 }
 int middleNod(ListNode * head)
 {
    int len=lengthofLL(head);
    return (len/2)+1;
 }
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        if(head==NULL)
        {
            return NULL;
        }
       int k= middleNod(head);
       ListNode * temp =head;
       int cnt=0;
       while(temp!=NULL)
       {
        cnt++;
        if(k==cnt)
        {
            return temp;
        }
        temp=temp->next;
       }
        return NULL;
    }
};