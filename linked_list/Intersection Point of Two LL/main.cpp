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
int intersection(node *head1, node *head2)
{
    int c1=1;
    int c2=1;
    node *curr1=head1;
    node *curr2=head2;
    while(curr1!=NULL)
    {
        c1++;
        curr1=curr1->next;
    }
    while(curr2!=NULL)
    {
        c2++;
        curr2=curr2->next;
    }
    if(c1>c2)
    {
        int d=c1-c2;
        for(int i=0;i<d;i++)
        {
            head1=head1->next;
        }
        while(head1!=NULL && head2!=NULL)
        {
            if(head1==head2)
                return(head->data);
            head1=head1->next;
            head2=head2->next;
        }
        return(-1);
    }

    if(c1<c2)
    {
        int d=c2-c1;
        for(int i=0;i<d;i++)
        {
            head2=head2->next;
        }
        while(head1!=NULL && head2!=NULL)
        {
            if(head1==head2)
                return(head->data);
            head1=head1->next;
            head2=head2->next;
        }
        return(-1);
    }
}
int main()
{


    cout << "Hello world!" << endl;
    return 0;
}
