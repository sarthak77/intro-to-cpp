#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left, *right;
    
    Node(int x){
        int data = x;
        left = right = NULL;
    }
};
void swap( int* a, int* b )
{
    int t = *a;
    *a = *b;
    *b = t;
}
struct Node* NewNode(int data)
{
    struct Node* Node = (struct Node *)malloc(sizeof(struct Node));
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;
    return(Node);
}

void inorder2(Node* p,vector<int>&inp)
{
    if(p!=NULL)
    {
        inorder2(p->left,inp);
        inp.push_back(p->data);
        inorder2(p->right,inp);

    }
}

struct Node *correctBST( struct Node* root )
{
    // add code here.
    vector<int>inp;
    inorder2(root,inp);
    
    int ind,t2,flag;
    flag=0;
    
    for(int i=0;i<inp.size()-1;i++)
    {
        if(!flag && inp[i]>inp[i+1])
        {
            flag=1;
            ind=i;
        }
        if(flag && inp[i]>inp[i+1])
        {
            flag=inp[i];
            inp[i]=inp[ind];
            inp[ind]=flag;
            break;
        }
    }
    return (root);
}

void Inorder(struct Node *root){
	if(root==NULL){
		return;
	}
	Inorder(root->left);
	cout<<root->data<<" ";
	Inorder(root->right);
}
int flag=1;
int c=0;
void inorder(struct Node *temp,struct Node *root){
	if(flag==0){
		return;
	}
	if(temp==NULL&&root==NULL)
		return;
	if(root==NULL){
		flag=0;
		return;
	}
	if(temp==NULL){
		flag=0;
		return;
	}
	if(temp->data==root->data){
	    c++;
	}
	inorder(temp->left,root->left);
	inorder(temp->right,root->right);
}
void insert(struct Node *root,int a1,int a2,char lr){
	if(root==NULL)
		return;
	if(root->data==a1){
		switch(lr){
				case 'L':root->left=NewNode(a2);
				break;
				case 'R':root->right=NewNode(a2);
				break;
			}
	}
	insert(root->left,a1,a2,lr);
	insert(root->right,a1,a2,lr);
}
int main()
{   
	int t;
	cin>>t;
	while(t--){
	struct Node *root=NULL;
	struct Node *temp=NULL;
	int n;
	cin>>n;
	int m=n;
	while(n--){
		int a1,a2;
		char lr;
		cin>>a1>>a2>>lr;
		if(root==NULL){
			temp=NewNode(a1);
			root=NewNode(a1);
			switch(lr){
				case 'L':root->left=NewNode(a2);
				        temp->left=NewNode(a2);
				break;
				case 'R':root->right=NewNode(a2);
				        temp->right=NewNode(a2);
				break;
			}
		}
		else{
			insert(root,a1,a2,lr);
			insert(temp,a1,a2,lr);
		}
	}
	flag=1;
	c=0;
	
	root=correctBST(root);
	inorder(temp,root);
	if(c+1==m){
	    cout<<flag<<endl;
	}
	else{
	    cout<<"0";
	}
	}
    return 0;
}
/*This is a function problem.You only need to complete the function given below*/

/*Complete the function
Node is as follows:
struct Node
{
    int data;
    struct Node *left, *right;
    
    Node(int x){
        int data = x;
        left = right = NULL;
    }
};
*/
