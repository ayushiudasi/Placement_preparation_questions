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

Node *deleteHead(Node *head){
    if(head==NULL)return NULL;
    if(head->next==head){
        delete head;
        return NULL;
    }
    head->data=head->next->data;
    Node *temp=head->next;
    head->next=head->next->next;
    delete temp;
    return head;
}
Node *kdelete(Node *head,int k)
{
    if(head==NULL)
        return NULL;
    if(k==1)
    {
        head=deleteHead(head);
        return(head);
    }
    Node *curr=head;
    for(int i=0;i<k-2;i++)
    {
        curr=curr->next;
    }
    Node *temp=curr->next;
    curr->next=curr->next->next;
    delete(temp);
    return(head);

}
int main()
{
    Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
	head->next->next->next->next=head;
	printlist(head);
	head=kdelete(head,4);
	printlist(head);
    return 0;
}
