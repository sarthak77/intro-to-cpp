#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* next;
}*head;
void rotate(struct node **head_ref, int k);
  void insert()
  {
    int n,i,value;
    struct node *temp;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            head=(struct node *) malloc( sizeof(struct node) );
            head->data=value;
            head->next=NULL;
            temp=head;
            continue;
        }
        else
        {
            temp->next= (struct node *) malloc( sizeof(struct node) );
            temp=temp->next;
            temp->data=value;
            temp->next=NULL;
        }
    }
}
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf(" ");
}
/* Drier program to test above function*/
int main(void)
{
    int t,k,n,value;
     
     scanf("%d",&t);
     while(t--)
     {
     insert();     // insert function to build linked list
     scanf("%d",&k);
     rotate(&head,k);  // rotate linked list anti-clockwise  by k nodes
     printList(head);  // print linked list after rotation
     }
     return(0);
}

/*This is a function problem.You only need to complete the function given below*/
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
void rotate(struct node **head_ref, int k)
{ 
    int count=0;
    node* temp=head;
    node* head2;
    while(temp->next!=NULL)
    {
        count++;
        if(count==k)
        {
            head2=temp->next;
            temp->next=NULL;
        }
        else
            temp=temp->next;
    }

    if(count!=k-1)
    {
        temp=head2;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=head;
        head=head2;
    }
}
