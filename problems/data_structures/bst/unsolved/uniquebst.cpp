#include<bits/stdc++.h>
using namespace std;

int ncr(int n, int r)
{
    if(r==0 || n==r)
        return(1);
    else
        return(ncr(n-1,r-1)+ncr(n-1,r));
}
int numTrees(int n) {
    // Your code here
    int a =ncr(2*n,n);
    int b=n+1;
    return (a/b);
}
//Position this line where user code will be pasted.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<numTrees(n)<<"";
    }
}	
/*This is a function problem.You only need to complete the function given below*/

// Functiuon to return number of trees
