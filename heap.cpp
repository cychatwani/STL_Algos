#include <iostream>
#include <algorithm>
#include <vector>


#include "utills.h"
using namespace std;


void  stl_make_heap_example(){
    vector<int> intArr = getRandoms(12); 
    display(intArr.begin(), intArr.end()); 
    make_heap(intArr.begin(),intArr.end()); //O(NlogN)
    cout << "The max from heap is : " << intArr.front() << endl; 
}
void stl_push_heap_example()(){
    
    vector<int> intArr = getRandoms(12); 
    display(intArr.begin(), intArr.end()); 
    make_heap(intArr.begin(),intArr.end());  
    intArr.push_back(50000); 
    cout << "Pushing 50000 into intArr" << endl; 
    push_heap(intArr.begin(), intArr.end()); //O(logN)
    display(intArr.begin(), intArr.end()); 
    cout << "The maximum element of heap after push is : "  << intArr.front() << endl; 

}

void is_heap_and_is_heap_untill_example(){
    vector<int> intArr2 = getRandoms(12); 
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

void heap_examples (){
     stl_make_heap_example();
     stl_push_heap_example(); 
     is_heap_and_is_heap_untill_example();
}