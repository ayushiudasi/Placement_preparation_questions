#include <iostream>

using namespace std;
struct Node{
  int data;
  Node *next;
  Node(int x){
  data=x;
  next=NULL;
  }
};
bool detect_loop(Node *head)
{
    if(head==NULL)
      return(NULL);
    Node *slow=head;
    Node *fast=head;
    while(slow!=NULL && fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
            return(true);
    }
    return(false);

}
int main()
{   Node * head1=new Node(1);
    Node * head2=new Node(2);
    head1->next=head2;
    Node * head3=new Node(3);
    head2->next=head3;
    Node * head4=new Node(4);
    head3->next=head4;
    Node * head5=new Node(5);
    head4->next=head5;
    //head5->next=head4;

    cout << detect_loop(head1) << endl;
    return 0;
}
