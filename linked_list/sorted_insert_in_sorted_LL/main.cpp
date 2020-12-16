#include <iostream>
using namespace std;
struct node{
  int data;
  node* next;
  node(int x)
  { data=x;
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
node *sortinsert(node *head,int x)
{   node *temp=new node(x);
    if(head==NULL)
     return(temp);
    if(head->data>x)//head->next==NULL||
    {
        //if(head->data<x)
            //head->next=temp;
       // else
        //{
             temp->next=head;
             head=temp;
        //}
        return(head);
    }
    node *curr=head;
    while(curr->next!=NULL && curr->next->data<x )
    {
        curr=curr->next;
        //if(curr->next==NULL)
          //  break;
    }
       temp->next=curr->next;
       curr->next=temp;
       return(head);
}
int main()
{  node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    printlist(head);
    head=sortinsert(head,45);
    printlist(head);
    return 0;
}
