/*

make_heap
This function is used to convert a range in a container to a heap.

front
This function displays the first element of heap which is the maximum number.

push_heap
This function is used to insert elements into heap. The size of the heap is increased
by 1. New element is placed appropriately in the heap.

pop_heap
This function is used to delete the maximum element of the heap. The size of heap is
decreased by 1. The heap elements are reorganised accordingly after this operation.

sort_heap
This function is used to sort the heap. After this operation, the container is no
longer a heap.

is_heap
This function is used to check whether the container is heap or not. Generally, in
most implementations, the reverse sorted container is considered as heap. Returns true
if container is heap else returns false.

is_heap_until
This function returns the iterator to the position till the container is the heap.
Generally, in most implementations, the reverse sorted container is considered as heap.

*/

#include<bits/stdc++.h>
using namespace std;

void printv(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
        cout << v[i] << " ";
    cout << "\n";
}

int main()
{
    vector<int>v={10,20,34,56,43};
    make_heap(v.begin(),v.end());
    printv(v);

    cout << v.front() << "\n";

    v.push_back(35);
    push_heap(v.begin(),v.end());
    printv(v);

    pop_heap(v.begin(),v.end());//swap with last and sift down
    v.pop_back();
    printv(v);

    sort_heap(v.begin(),v.end());
    printv(v);
    
    cout << is_heap(v.begin(),v.end()) << "\n";

    auto it=is_heap_until(v.begin(),v.end());
    cout << *(it-1) << "\n";
    
    return 0;
}