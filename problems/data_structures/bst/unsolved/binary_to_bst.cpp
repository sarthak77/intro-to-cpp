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
void printInorder (struct Node* node)
{
    if (node == NULL)
        return;
 
    /* first recur on left child */
    printInorder (node->left);
 
    /* then print the data of node */
    printf("%d ", node->data);
 
    /* now recur on right child */
    printInorder (node->right);
}
Node *  binaryTreeToBST (Node *root);
 
/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
struct Node* newNode(int data)
{
  struct Node* node = (struct Node*)
                       malloc(sizeof(struct Node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return(node);
}
/* Driver program to test size function*/
int main()
{
  int t;
  struct Node *child;
  scanf("%d", &t);
  while (t--)
  {
     map<int, Node*> m;
     int n;
     scanf("%d",&n);
     struct Node *root = NULL;
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
     Node *res = binaryTreeToBST (root);
     printInorder(res);
     cout<<endl;
    // cout << endl;
  }
  return 0;
}

void inorder(Node* p, vector<int> &inp)
{
  if(p!=NULL)
  {
    inorder(p->left,inp);
    inp.push_back(p->data);
    inorder(p->right,inp);
  }
}

void inorder2(Node* p, vector<int> &inp)
{
  if(p!=NULL)
  {
    inorder2(p->left,inp);
    p->data=*(inp.begin());
    inp.erase(inp.begin());
    inorder2(p->right,inp);
  }
}

/*This is a function problem.You only need to complete the function given below*/
/* The Node structure is
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
/*Your code here*/
Node *binaryTreeToBST (Node *root)
{
  //Your code here
  vector<int>inp;
  inorder(root,inp);
  sort(inp.begin(),inp.end());
  inorder2(root,inp);
  return (root);
}
 