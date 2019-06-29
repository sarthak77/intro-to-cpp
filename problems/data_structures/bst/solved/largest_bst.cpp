#include <bits/stdc++.h>
using namespace std;
/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
struct Node* newNode(int data)
{
  struct Node* node = new Node;
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return(node);
}
void inorder(Node *root)
{
    if (root == NULL)
       return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);    
}
int largestBst(Node *root);
/* Driver program to test size function*/
int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
     map<int, Node*> m;
     int n;
     scanf("%d",&n);
     struct Node *root = NULL;
     struct Node *child;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
        if (m.find(n1) == m.end())
        {
           parent = newNode(n1);
           m[n1] = parent;
           if (root == NULL)
             root = parent;
        }
        else
           parent = m[n1];
        child = newNode(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }
    cout<<largestBst(root)<< endl;
  }
  return 0;
}
/*This is a function problem.You only need to complete the function given below*/
/* Tree node structure  used in the program
 struct Node
 {
     int data;
     struct Node* left, *right;
};*/
/*You are required to complete this method */

void inorder2(Node* p, vector<int> &inp)
{
    if(p!=NULL)
    {
        inorder2(p->left,inp);
        inp.push_back(p->data);
        inorder2(p->right,inp);
    }
}
bool isBST(Node* root) {
    // Your code here
    vector<int>inp;
    inorder2(root,inp);
    if(inp.size()<=1)
        return(true);
    for(int i=0;i<inp.size()-1;i++)
    {
        if(inp[i]>inp[i+1])
            return (false);
    }
    return(true);
}

int s(Node* p)
{
    if(p==NULL)
        return(0);
    else if(p->left==NULL && p->right==NULL)
        return(1);
    else
        return(s(p->left)+s(p->right)+1);
}

int inorder3(Node* p)
{
    if(p!=NULL)
    {
        if(isBST(p))
            return(s(p));

        int a=inorder3(p->left);
        int b=inorder3(p->right);
        return(max(a,b));
    }

    return(0);
}
int largestBst(Node *root)
{
	//Your code here
    return(inorder3(root));
}

