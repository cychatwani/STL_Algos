#include<iostream> 
#include<vector> 
#include<algorithm>

#include"utills.h"

using namespace std;
void stl_transform_two_variable(){
    vector<int>  arr1 = getRandoms(20);
    vector<int>  arr2  =  getRandoms(20);
    display(arr1.begin(),arr1.end());
    display(arr2.begin(),arr2.end());
    int res[20];     
    transform(arr1.begin(), arr1.end(), arr2.begin(), res, plus<int>()); 
    display(res,res+20);
    } 
void stl_transform_one_variable(){
    vector<int> arr = getRandoms(20); 
    display(arr.begin(),arr.end());
    int res[20]; 
    transform(arr.begin(), arr.end(), res,[](int i){
        return i*2;
    }); 
    display(res,res+20);
    }
void srl_for_each(){
    vector<int> arr = getRandoms(20); 
    for_each(arr.begin(), arr.end(),[](int i){
        cout << i << " " ;
    }); 
    }
void stl_transforms () {
    stl_transform_two_variable();
    stl_transform_one_variable();
    srl_for_each();
}