#include <iostream>
#include <algorithm>
#include <vector>
#include<set>

#include "utills.h"
using namespace std;

// 23 21 1 33 12 4 12 4 1 -> O(n^2)
int main(){
    set<int> x = {3,23,21,32,1,12,23,32}; 
    set<int> y = {21,23,100,120,300,400,431}; 
    vector<int> U(100); 
    vector<int> D(100); 
    vector<int> I(100); 
    vector<int> SD(100); 
    vector<int>::iterator id =  set_difference(x.begin(),x.end(),y.begin(),y.end(),D.begin());
    vector<int>::iterator ii =  set_intersection(x.begin(),x.end(),y.begin(),y.end(),I.begin());
    vector<int>::iterator iu =  set_union(x.begin(),x.end(),y.begin(),y.end(),U.begin());
    vector<int>::iterator isd = set_symmetric_difference(x.begin(),x.end(),y.begin(),y.end(),SD.begin());
    I.resize(ii-I.begin());
    U.resize(iu-U.begin());
    D.resize(id-D.begin());
    SD.resize(isd-SD.begin());
    cout << "SET 1 \n";
    display(x.begin(),x.end());
    cout << "SET 2 \n";
    display(y.begin(),y.end());
    cout << "SET Diffrence \n";
    display(D.begin(),D.end());
    cout << "SET Intersection  \n";
    display(I.begin(),I.end());
    cout << "SET Union \n";
    display(U.begin(),U.end());
    cout << "SET Symmetric difference  \n";
    display(SD.begin(),SD.end());
  }