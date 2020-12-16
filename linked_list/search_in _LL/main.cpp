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
int search1(node *head, int x)
{ node *temp=head;
  int pos=1;
  while(temp!=NULL)
  {
     if(temp->data==x)
     {
         return(pos);
     }
     else{
        pos++;
        temp=temp->next;
     }
  }
    return(-1);
}
node *finsert(node *head, int x)
{
    node *temp=new node(x);
    temp->next=head;
    return(temp);

}
node *binsert(node *head, int x)
{  if(head==NULL)
    {
        head=new node(x);
    }
    else{
      node *temp=head;
      while(temp->next!=NULL)
      {
          temp=temp->next;
      }
      temp->next=new node(x);
  }
  return(head);
}
node *fdelete(node *head)
{  if(head==NULL)
    return(NULL);

    node *temp=head->next;
    delete(head);
    return(temp);
}
node *bdelete(node *head)
{
    if(head==NULL)
        return(NULL);
    if(head->next==NULL)
    {
        delete(head);
        return(NULL);
    }
    node *temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    delete(temp->next);
    temp->next=NULL;
    return(head);
}
int main()
{
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    printlist(head);
    cout<<"The position of element in linked list is "<<search1(head,50)<<endl;
    head= finsert(head,50);
    printlist(head);
    cout<<"The position of element in linked list is "<<search1(head,50)<<endl;
    head= binsert(head,60);
    printlist(head);
    cout<<"The position of element in linked list is "<<search1(head,60)<<endl;
    head=fdelete(head);
    printlist(head);
    head=bdelete(head);
    printlist(head);

    /*node *head=NULL;
    head=binsert(head,10);
    cout<<head->data;*/
    return 0;
}
