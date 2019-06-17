#include <iostream>
#include <algorithm>
#include <vector>


#include "utills.h"
using namespace std;

void stl_simple_sorting(){
    // Getting 20 Random Numbers and storing it into array . 
    vector<int> intArray = getRandoms(20);
    vector<int>::iterator intArr_begin = intArray.begin();
    vector<int>::iterator intArr_end = intArray.end();
    cout << "20 Random Numbers"<<endl; 
    display(intArr_begin,intArr_end); 
    sort(intArr_begin,intArr_end); // O(N.logN) - QuickSort is used by stl in this function 
    cout << "SORTING ....."<<endl; 
    display(intArr_begin,intArr_end);     
}
void stl_reverse_sorting_method2(){
    // Getting 20 Random Numbers and storing it into array . 
    vector<int> intArray = getRandoms(20);
    cout << "20 Random Numbers"<<endl; 
    vector<int>::iterator intArr_begin = intArray.begin();
    vector<int>::iterator intArr_end = intArray.end();
    display(intArr_begin,intArr_end); 
    sort(intArr_begin,intArr_end,reverseComparefunction<int>); // O(N.logN) - QuickSort is used by stl in this function 
    cout << "Reverse sorting by method 2..... "<<endl;
    display(intArr_begin,intArr_end);     
}
void stl_reverse_sorting_method1 (){
    // Getting 20 Random Numbers and storing it into array . 
    vector<int> intArray  = getRandoms(20);
    cout << "20 Random Numbers"<<endl; 
    vector<int>::reverse_iterator intArr_reverse_begin = intArray.rbegin();
    vector<int>::reverse_iterator intArr_reverse_end = intArray.rend();
    display(intArray.begin(),intArray.end());     
    sort(intArr_reverse_begin,intArr_reverse_end); // O(N.logN) - QuickSort is used by stl in this function 
    cout << "Reverse sorting by method 1 ..... "<<endl;
    display(intArray.begin(),intArray.end());     
}
void stl_partial_sorting (){
    // Getting 20 Random Numbers and storing it into array . 
    vector<int> intArray2 = getRandoms(20);
    cout << "20 Random Numbers"<<endl; 
    vector<int>::iterator intArr2_begin = intArray2.begin(); 
    vector<int>::iterator intArr2_end = intArray2.end(); 
    display(intArr2_begin,intArr2_end);
    cout<<"Partial sorting first 4 elements"<<endl;
    partial_sort(intArr2_begin, intArr2_begin + 4, intArr2_end); 
    display(intArr2_begin,intArr2_end);
}
void num_sorting_examples(){
    stl_simple_sorting(); 
    stl_reverse_sorting_method1(); 
    stl_reverse_sorting_method2(); 
    stl_partial_sorting();
}