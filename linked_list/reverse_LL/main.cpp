#include <iostream>

using namespace std;
struct Node
{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
void printlist(Node *head)
{
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}
Node *reverse1(Node *head)
{   if(head==NULL)
        return(NULL);

    Node *prev=NULL;
    Node *curr=head;
    Node *next=head->next;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }

    return(prev);
}
int main()
{

	Node *head=NULL;//new Node(10);
	//head->next=new Node(20);
	//head->next->next=new Node(30);
	printlist(head);
	head=reverse1(head);
	printlist(head);
	return 0;
}
