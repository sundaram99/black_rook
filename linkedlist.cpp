#include <bits/stdc++.h>
using namespace std;
class NODE
{
    public:
    int data;
    NODE *next;
};
void printlist(NODE *n)
{
while(n!=NULL)
{
    cout<< n->data <<" ";
    n=n->next;
}
}
int main()
{
NODE* head=NULL;
NODE* second=NULL;
NODE* third=NULL;
head=new NODE();
second=new NODE();
third=new NODE();
head->data=0;
head->next=second;
second->data=2;
second->next=third;
third->data=3;
third->next=NULL;
printlist(head);
return(0);
}

