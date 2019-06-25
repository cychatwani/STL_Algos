#include <iostream>
#include <algorithm>
#include <vector>


#include "utills.h"
using namespace std;

void stl_remove_copy(){
    int myints[] = {10,20,30,30,20,10,10,20};               // 10 20 30 30 20 10 10 20
    std::vector<int> myvector (8);
    display(myints,myints+8);
    std::remove_copy (myints,myints+8,myvector.begin(),20);
    display(myvector.begin(),myvector.end());
}
void stl_remove_if_copy(){
    vector<int> myints= getRandoms(20);
    std::vector<int> myvector (8);
    display(myints.begin(),myints.end());
    std::remove_copy_if(myints.begin(),myints.end(),myvector.begin(),isEven);
    display(myvector.begin(),myvector.end());
}

void stl_reverse_copy(){
    int myints[] = {10,2120,310,31230,5581,2610,410,2220};               // 10 20 30 30 20 10 10 20
    std::vector<int> myvector (8);
    display(myints,myints+8);
    std::reverse_copy (myints,myints+8,myvector.begin());
    display(myvector.begin(),myvector.end());
}

void stl_rotate_copy(){
    std::vector<int> src = {1, 2, 3, 4, 5}; 
    display(src.begin(), src.end());
    auto pivot = std::find(src.begin(), src.end(), 3); 
    std::vector<int> dest(src.size());                                          
    std::rotate_copy(src.begin(), pivot, src.end(), dest.begin());
    display(dest.begin(),dest.end());
 }
 void stl_replace_copy(){
    std::vector<int> src = {1, 2, 3, 4, 5}; 
    display(src.begin(), src.end());
    std::vector<int> dest(src.size());                                          
    std::replace_copy(src.begin(), src.end(), dest.begin(),1,1000);
    display(dest.begin(),dest.end());
 }

void stl_partial_sort_copy(){
    int myints[] = {9,8,7,6,5,4,3,2,1};
    std::vector<int> firstFive (5);
    std::vector<int> lastFive (5);
    std::partial_sort_copy (myints, myints+9, firstFive.begin(), firstFive.end());
    std::partial_sort_copy (myints, myints+9, lastFive.begin(), lastFive.end(), [](int i,int j){
        return i > j;
        });
    display(firstFive.begin(), firstFive.end());
    display(lastFive.begin(),lastFive.end());
}
void stl_partition_copy(){
    int arr [10] = {1,2,3,4,5,6,7,8,9,10};
    int true_arr [5] = {0};
    int false_arr [5] = {0};
    std::partition_copy(std::begin(arr), std::end(arr), std::begin(true_arr),std::begin(false_arr),[] (int i){
        return i > 5;
        });
    std::cout << "true_arr: ";
    display(true_arr,true_arr+5);
    display(false_arr,false_arr+5);
 }

 void stl_collection_copy(){
    stl_remove_copy();
    stl_remove_if_copy();
    stl_rotate_copy();
    stl_partial_sort_copy();
    stl_partition_copy();
 }


