#include <iostream>
#include <algorithm>
#include <vector>
#include<set>

#include "utills.h"
using namespace std;

void stl_set_difference_example(){
  vector<int> x = getRandoms(20);  
  vector<int> y = getRandoms(15); 
  sort(x.begin(), x.end());
  sort(y.begin(), y.end());
  cout << "SET 1 \n";
  display(x.begin(),x.end());
  cout << "SET 2 \n";
  display(y.begin(),y.end());
  vector<int> D(100); 
  vector<int>::iterator id =  set_difference(x.begin(),x.end(),y.begin(),y.end(),D.begin());
  D.resize(id-D.begin());
  cout << "SET Diffrence \n";
  display(D.begin(),D.end());
}
void stl_set_intersection_example(){
  vector<int> x = getRandoms(20);  
  vector<int> y = getRandoms(15); 
  sort(x.begin(), x.end());
  sort(y.begin(), y.end());
  cout << "SET 1 \n";
  display(x.begin(),x.end());
  cout << "SET 2 \n";
  display(y.begin(),y.end());
  vector<int> I(100);
  vector<int>::iterator ii =  set_intersection(x.begin(),x.end(),y.begin(),y.end(),I.begin());
  I.resize(ii-I.begin());
  cout << "SET Intersection  \n";
  display(I.begin(),I.end());
}
void stl_set_symmetric_difference_example(){
  vector<int> x = getRandoms(20);  
  vector<int> y = getRandoms(15); 
  sort(x.begin(), x.end());
  sort(y.begin(), y.end());
  cout << "SET 1 \n";
  display(x.begin(),x.end());
  cout << "SET 2 \n";
  display(y.begin(),y.end());
  vector<int> SD(100); 
  vector<int>::iterator isd = set_symmetric_difference(x.begin(),x.end(),y.begin(),y.end(),SD.begin());
  SD.resize(isd-SD.begin());
  cout << "SET Symmetric difference  \n";
  display(SD.begin(),SD.end());
}
void stl_set_union_example(){
  vector<int> x = getRandoms(20);  
  vector<int> y = getRandoms(15); 
  sort(x.begin(), x.end());
  sort(y.begin(), y.end());
  cout << "SET 1 \n";
  display(x.begin(),x.end());
  cout << "SET 2 \n";
  display(y.begin(),y.end());
  vector<int> U(100); 
  vector<int>::iterator iu =  set_union(x.begin(),x.end(),y.begin(),y.end(),U.begin());
  U.resize(iu-U.begin());
  cout << "SET Union \n";
  display(U.begin(),U.end());
}
void stl_set_algos_examples(){
stl_set_difference_example();
stl_set_intersection_example();
stl_set_symmetric_difference_example();
stl_set_union_example();

}
