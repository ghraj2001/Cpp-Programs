#include<stdio.h>

/* struct ListNode 
 {
      int val;
      struct ListNode *next;
 };
 */


struct ListNode* reverseList(struct ListNode* head) {
	if(NULL==head) return head;

	struct ListNode *p=head;
	p=head->next;
	head->next=NULL;
	while(NULL!=p){
		struct ListNode *ptmp=p->next;
		p->next=head;
		head=p;
		p=ptmp;
	}
	return head;
}
/*void push(data)
{
    struct node *temp,*x;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->val=data;
    temp->next=NULL;
    head=temp;
    
    
}
void printrev()
{
   while(cur->next!=NULL)
   {
       printf("%d->",cur->val);
   }
    printf("NULL");
       
}
int main()
{
    int data;
    scanf("%d",data);
    if(data!=NULL)
    push(data);
    else
    printrev();
    return 0;
}  */  