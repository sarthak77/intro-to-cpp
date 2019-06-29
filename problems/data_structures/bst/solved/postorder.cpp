#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node *left, *right;
};
Node *constructTree (int [], int );
void printInorder (Node* node)
{
	if (node == NULL)
		return;
	printInorder(node->left);
	printf("%d ", node->data);
	printInorder(node->right);
	
}
int main ()
{   
    int t,n;
   scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int post[n];
        for(int i=0;i<n;i++)
        scanf("%d",&post[i]);
    Node* root = constructTree(post, n);
	printInorder(root);
    printf(" ");
}
	return 0;
}

void ct(int post[],int start,int end,int val,Node* root)
{
	if(start>end)
	{
		root->left=NULL;
		root->right=NULL;
		return;
	}

	if(start==end)
	{
		Node* temp=(Node*)malloc(sizeof(Node));
		temp->data=post[start];
		temp->left=NULL;
		temp->right=NULL;

		root->left=NULL;
		root->right=NULL;
		if(post[start]>val)
			root->right=temp;
		else
			root->left=temp;
		return;
	}

	int i;
	for(i=start;i<=end;i++)
	{
		if(post[i]>val)
			break;
	}
	
	if(i==start)
		root->left=NULL;
	else
	{
		Node* temp=(Node*)malloc(sizeof(Node));
		temp->data=post[i-1];
		root->left=temp;	
	}
	
	if(i==end+1)
		root->right=NULL;
	else
	{
		Node* temp2=(Node*)malloc(sizeof(Node));
		temp2->data=post[end];
		root->right=temp2;
	}

	if(i!=start)
		ct(post,start,i-2,post[i-1],root->left);
	
	if(i!=end+1)
		ct(post,i,end-1,post[end],root->right);
	return;
}

/*This is a function problem.You only need to complete the function given below*/
/*struct Node
{
	int data;
	Node *left, *right;
};*/
Node *constructTree (int post[], int size)
{
	Node* root=(Node*)malloc(sizeof(Node));
	root->data=post[size-1];
	ct(post,0,size-2,post[size-1],root);
	return(root);
}