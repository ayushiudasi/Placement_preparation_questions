#include <iostream>

using namespace std;
struct node{
 int data;
 node *next;
 node(int x){
 data=x;
 next=NULL;
 }
};
void display(node *head)
{
    if(head==NULL)
        return;
    node *temp=head;
    do{
      cout<<temp->data<<" ";
      temp=temp->next;
     }while(temp!=head);
}
int main()
{
    node *head= new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    head->next->next->next->next=head;
    display(head);
    return 0;
}
