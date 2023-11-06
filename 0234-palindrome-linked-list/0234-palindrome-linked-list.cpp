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
        stack <int> s;
        ListNode* temp=head;
        ListNode* temp1=head;
        //pushing elements into stack so that they can be brought out in reverse order
        while(temp!=NULL)
        {
            s.push(temp->val);
            temp=temp->next;
        }
        //comparing stack with linked list elements
        while(temp1!=NULL)
        {
           int k=temp1->val;
           // cout<<"k:"<<k<<"  stack top:"<<s.top()<<endl;
            if(k!=s.top())
                return false;
            s.pop();
            temp1=temp1->next;
        }
        return true;
    }
};