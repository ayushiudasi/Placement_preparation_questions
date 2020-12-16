#include <iostream>

using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}
void printNthFromEnd(Node *head,int n)
{
    if(head==NULL)
        return;
    Node *first=head;
    for(int i=0;i<n;i++)
    { if(first==NULL)
        return;
        first=first->next;
    }
    Node *second=head;
    while(first!=NULL)
    {
        first=first->next;
        second=second->next;
    }
    cout<<second->data<<endl;
    return;
}
int main()
{
    Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
	head->next->next->next->next=new Node(50);
	printlist(head);
	cout<<"3"<<"th node from end of Linked List: ";
	printNthFromEnd(head,3);
	return 0;
}
