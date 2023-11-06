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
    bool isPalindrome(ListNode* head) 
    {
        if(head==NULL || head->next==NULL)return true;
        ListNode *t1=head;
       ListNode* slow=head;
       ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* prev=NULL;
        ListNode* cur=slow;
        while(cur->next!=NULL)
        {
            ListNode* temp=cur->next;
            cur->next=prev;
            prev=cur;
            cur=temp;
        }
        cur->next=prev;
        //  while(head!=NULL)
        // {
        //     cout<<head->val;
        //     head=head->next;
        // }
        ListNode* t2=cur;
        // while(t1!=slow)
        // {
        //     cout<<t1->val<<" : ";
        //     t1=t1->next;
        // }
        // cout<<t2->val<<endl;
        // while(t2!=NULL)
        // {
        //     cout<<t2->val;
        //     t2=t2->next;
        // }
        while(t2!=NULL && t1!=slow && t1->val==t2->val)
        {
            cout<<t1->val<<" "<<t2->val<<endl;
            t1=t1->next;
            t2=t2->next;
        }
        return t2==NULL or t1==slow;
        // return false;

    }
};