#include <iostream>

using namespace std;
struct node
{  int data;
   node *next;
   node(int x)
   {
       data=x;
       next=NULL;
   }

};
void printlist(node *head)
{
   node *temp=head;
   while(temp!=NULL)
   {
       cout<<temp->data<<" ";
       temp=temp->next;
   }
   cout<<endl;
}
node *middle(node *head)
{    if(head==NULL)
       return(NULL);
     if(head->next==NULL)
        return(head);
     node* slow=head;
     node* fast=head;
    while(fast!=NULL &&fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return(slow);
}
int main()
{   node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    //node *head=NULL;
    printlist(head);
    node *mid = middle(head);
    cout<<"middle element is "<<mid->data;
    return 0;
}
