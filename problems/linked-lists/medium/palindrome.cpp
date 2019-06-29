#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
void append(struct Node** head_ref, struct Node **tail_ref, int new_data)
{
    struct Node* new_node = new Node(new_data);
    
    if (*head_ref == NULL)
       *head_ref = new_node;
    else
       (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}
bool isPalindrome(Node *head);
/* Driver program to test above function*/
int main()
{
  int T,i,n,l;
    cin>>T;
    while(T--){
    struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }
   	cout<<isPalindrome(head)<<endl;
    }
    return 0;
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
/*You are required to complete this method */
bool isPalindrome(Node *head)
{
    //Your code here
    stack<int> st;
    Node* temp=head;
    int len=1;
    while(temp->next!=NULL)
    {   
        len++;
        temp=temp->next;
    }

    if(len==1)
        return(1);
    int tlen=0;
    int tlen2=len;
    
    temp=head;
    while(temp->next!=NULL)
    {   
        tlen++;
        if(tlen<=len/2)
            st.push(temp->data);
        else
        {
            if(tlen2%2==1)
                tlen2++;
            else
            {
                if(temp->data==st.top())
                    st.pop();
                else
                    return(0);
            }
        }
        temp=temp->next;
    }
    if(temp->data==st.top())
        return(1);
}
