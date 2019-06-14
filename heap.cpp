#include <iostream>
#include <algorithm>
#include <vector>


#include "utills.h"
using namespace std;


int main(){
    vector<int> intArr = {120, 30, 422, 1225, 115,3,23,12,1,3,1,33}; 
    display(intArr.begin(),intArr.end());
    make_heap(intArr.begin(), intArr.end()); 
    cout << "The max from heap is : " << intArr.front() << endl; 
    intArr.push_back(50000); 
    push_heap(intArr.begin(), intArr.end()); 
    cout << "The maximum element of heap after push is : "  << intArr.front() << endl; 
    pop_heap(intArr.begin(), intArr.end()); 
    intArr.pop_back(); 
    cout << "The maximum element of heap after pop is : " << intArr.front() << endl; 
    sort_heap(intArr.begin(), intArr.end()); 
    cout << "The heap elements after sorting are : "<<endl;
    display(intArr.begin(),intArr.end());
    vector<int> intArr2 = {40, 30, 25, 35, 15}; 
    display(intArr2.begin(),intArr2.end());
    vector<int>::iterator it1; 
    is_heap(intArr2.begin(), intArr2.end())? 
    cout << "The container is heap ": 
    cout << "The container is not heap"; 
    cout << endl; 
    auto it = is_heap_until(intArr2.begin(), intArr2.end()); 
    cout << "The heap elements in container are : "; 
    for (it1=intArr2.begin(); it1!=it; it1++) 
       cout << *it1 << " "; 

    cout << endl;
    return 0; 

    

}