#include <iostream>

using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int d){
        data=d;
        next=NULL;
    }
};
void printlist(Node *head){
    if(head==NULL)return;
    Node *p=head;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
    cout<<endl;
}
Node * frontinsert(Node *head, int x)
{
    Node *temp=new Node(x);
    if(head==NULL)
    { temp->next=temp;
       return(temp);
    }
    temp->next=head->next;
    head->next=temp;
    int a=head->data;
    head->data=temp->data;
    temp->data=a;
    return(head);

}
int main()
{   Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=head;
	printlist(head);
	head=frontinsert(head,15);
	printlist(head);
	head=frontinsert(head,25);
	printlist(head);

    return 0;
}
