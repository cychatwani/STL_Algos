#include <iostream>
#include <algorithm>
#include <vector>


#include "utills.h"
using namespace std;


int main() {
    vector<int> intArray = {43,12,412,32,11,442,1,2,3,4,5,100,200};
    vector<int>::iterator intArr_begin = intArray.begin();
    vector<int>::iterator intArr_end = intArray.end();
    display(intArr_begin, intArr_end);
    cout<< "sorting .... "<< endl;
    sort(intArr_begin,intArr_end);
    display(intArr_begin, intArr_end);

    if(binary_search(intArr_begin,intArr_end,12)) cout << "12 is present"<<endl; 
    else cout << "12 not present!!"<<endl;

    if(binary_search(intArr_begin,intArr_end,13)) cout << "13 is present"<<endl; 
    else cout << "13 not present!!"<<endl;
    
    cout << "Reverse sorting ... \n"; 
    sort(intArray.rbegin(),intArray.rend());
    float floatArr[5] = {44.43f, 22.12f, 1.22f, 321.2f, 2.1234f};
    display(floatArr,floatArr+5);
    cout << "Reverse sorting ... \n"; 
    //another way of reverse sorting using function 
    sort(floatArr,floatArr+5,reverseComparefunction<float>);
    display(floatArr,floatArr+5);
    vector<int> intArray2 = {143,112,312,132,111,242,111,22,33,44,512,1100,1200};
    vector<int>::iterator intArr2_begin = intArray2.begin(); 
    vector<int>::iterator intArr2_end = intArray2.end(); 
    display(intArr2_begin,intArr2_end);
    cout<<"Partial sorting first 4 elements"<<endl;
    partial_sort(intArr2_begin, intArr2_begin + 4, intArr2_end); 
    display(intArr2_begin,intArr2_end);
}