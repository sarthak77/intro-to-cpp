#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node* root;

int search(int n)
{
    Node* temp=root;
    while(temp!=NULL)
    {
        if(n==temp->data)
            return(1);
        else if(n>temp->data)
            temp=temp->right;
        else
            temp=temp->left;
    }
    return (0);
}

void findmin()
{
    Node* temp=root;
    while(temp->left!=NULL)
        temp=temp->left;
    cout << temp->data << "\n";
}

void findmax()
{
    Node* temp=root;
    while(temp->right!=NULL)
        temp=temp->right;
    cout << temp->data << "\n";
}

Node* findsuc(int n)
{
    Node* temp=root;
    Node* suc=NULL;
    while(temp!=NULL)
    {
        if(temp->data>n)
        {
            suc=temp;
            temp=temp->left;
        }
        else if(temp->data<n)
            temp=temp->right;
        else
        {
            if(temp->right==NULL)
                return(suc);
            else
                temp=temp->right;            
        }
    }
    return(suc);
}

Node* findpred(int n)
{
    if(!search(n))
        return(NULL);
        
    Node* temp=root;
    Node* pred=NULL;

    while(temp!=NULL)
    {
        if(temp->data>n)
            temp=temp->left;
        else if(temp->data<n)
        {
            pred=temp;
            temp=temp->right;
        }
        else
        {
            if(temp->left==NULL)
            {
                if(pred!=NULL)
                    return(pred);
                else
                    return (NULL);
            }
            else
                temp=temp->left;            
        }
    }
    if(pred!=NULL)
        return(pred);
    else
        return(NULL);
}

void insert(int n)
{
    Node* temp=root;
    if(root->data==-100)
    {
        root->data=n;
        return;
    }
    while(1)
    {
        if(n>temp->data)
        {
            if(temp->right==NULL)
            {
                Node*temp2=(Node*)malloc(sizeof(Node));
                temp2->data=n;
                temp->right=temp2;
                break;
            }
            else
                temp=temp->right;
        }
        else
        {
            if(temp->left==NULL)
            {
                Node*temp2=(Node*)malloc(sizeof(Node));
                temp2->data=n;
                temp->left=temp2;
                break;
            }
            else
                temp=temp->left;
        }
    }
}

Node* findpar(int n)
{
    Node* temp=root;
    Node* par=root;

    if(n==temp->data)
        return(NULL);

    while(temp!=NULL)
    {
        if(n==temp->data)
            return(par);
        else if(n>temp->data)
        {
            par=temp;
            temp=temp->right;
        }
        else
        {
            par=temp;
            temp=temp->left;
        }
    }
    return(NULL);
}

void deletenode(int n)
{
    Node* t=findpar(n);
    
    if(t==NULL)
    {
        if(search(n))//if root
        {
            if(root->right!=NULL)
            {
                Node* suc=findsuc(n);
                int td=suc->data;
                deletenode(td);
                root->data=td;
            }
            else if(root->left!=NULL)
            {
                Node* pred=findpred(n);
                int td=pred->data;
                deletenode(td);
                root->data=td;  
            }
            else
            {
                root->data=-100;
            }
        }
        else//if node not present
            cout << "Not Present\n";
        
        return ;
    }

    Node* t2;
    if(t->data>n)
        t2=t->left;
    else
        t2=t->right;
    
    if(t2->left==NULL && t2->right==NULL)//no child
    {
        if(t->data>n)
            t->left=NULL;
        else
            t->right=NULL;
    }
    else if(t2->left==NULL && t2->right!=NULL)//only right child
    {
        if(t->data>n)
            t->left=t2->right;
        else
            t->right=t2->right;
    }
    else if(t2->right==NULL && t2->left!=NULL)//only left child
    {
        if(t->data>n)
            t->left=t2->left;
        else
            t->right=t2->left;
    }
    else//both children
    {
        Node* suc=findsuc(n);
        int td=suc->data;
        deletenode(td);
        t2->data=td;
    }
}

void inorder(Node* p)
{
    if(p!=NULL)
    {
        inorder(p->left);
        cout << p->data << "\n";
        inorder(p->right);
    }
}

void preorder(Node* p)
{
    if(p!=NULL)
    {
        cout << p->data << "\n";
        preorder(p->left);
        preorder(p->right);
    }
}

void postorder(Node* p)
{
    if(p!=NULL)
    {
        postorder(p->left);
        postorder(p->right);
        cout << p->data << "\n";
    }
}

int main()
{
    Node*tr=(Node*)malloc(sizeof(Node));
    tr->data=-100;
    root=tr;
    int q,n;

    cout << "Format:: Query Number\n";
    cout << "Query==0 :: Search\n";
    cout << "Query==1 :: Min\n";
    cout << "Query==2 :: Max\n";
    cout << "Query==3 :: Successor\n";
    cout << "Query==4 :: Predecessor\n";
    cout << "Query==5 :: Insert\n";
    cout << "Query==6 :: Delete\n";
    cout << "Query==7 :: Find Parent\n";
    cout << "Query==8 :: Inorder\n";
    cout << "Query==9 :: Preorder\n";
    cout << "Query==10 :: Postorder\n";
    cout << "\n";
        
    while(1)
    {
        cin >> q >> n;
        if(q==0)
        {
            if(search(n))
                cout << "Present\n";
            else
                cout << "Not Present\n";
        }
        else if(q==1)
            findmin();
        else if(q==2)
            findmax();
        else if(q==3)
        {
            Node* t=findsuc(n);
            if(t!=NULL)
                cout << t->data << "\n";
            else
                cout << "No successor\n";
        }
        else if(q==4)
        {
            Node* t=findpred(n);
            if(t!=NULL)
                cout << t->data << "\n";
            else
                cout << "No predecessor\n";
        }
        else if(q==5)
            insert(n);
        else if(q==6)
            deletenode(n);
        else if(q==7)
        {
            Node* t=findpar(n);
            if(t!=NULL)
                cout << t->data << "\n";
            else
                cout << "No Parent\n";
        }
        else if(q==8)
            inorder(root);
        else if(q==9)
            preorder(root);
        else if(q==10)
            postorder(root);
    }
    return 0;
}