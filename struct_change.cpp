#include<iostream>
#include<vector>
#include<algorithm> 

#include"utills.h"

using namespace std; 



void stl_remove_if__earse()
{
    // O(N)
    vector<int> V = getRandoms(20);
    display(V.begin(),V.end());
    V.erase(remove_if(V.begin(),V.end(),[](int i)
       { return (i % 2) == 0; })); 
    display(V.begin(),V.end());
}

void stl_remove(){
    vector<int> V = {23,2,4,2,43,3,23,1,42,5351,1,12,23,5123,1,341,1,3,1,34544,11213}; 
    display(V.begin(),V.end());
    V.erase(remove(V.begin(), V.end(),2)); 
    display(V.begin(),V.end());
}
void stl_unique(){
    vector<int> V = {12,12,434,123,12,12,42,12,423,12,12,12,12,23,23,12,423,23,1223,12412,431}; 
    display(V.begin(),V.end());
    V.erase(unique(V.begin(), V.end())); 
    display(V.begin(),V.end());

}
void stl_struct_change_example(){
stl_remove_if__earse();
stl_remove();
stl_unique();
}