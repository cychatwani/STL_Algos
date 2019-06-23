#include <iostream>
#include <algorithm>
#include <vector>


#include "utills.h"
using namespace std;

void stl_fill_examples(){
    //O(N)
    vector<int> V1 = getRandoms(20); 
    display(V1.begin(), V1.end()); 
    fill(V1.begin(), V1.end(),50); 
    // it fills the whole strucure with the specified value ]
    display(V1.begin(), V1.end()); 
}
void stl_genrate_example() { 
    // the time complexity of this depends upon the time complexity of the genrator function that we use 
    vector<int> V(15); 
    display(V.begin(),V.end()); 
    generate(V.begin(), V.end(), genrator); 
    display(V.begin(),V.end()); 

}
void stl_replace_example() { 
    //O(n)
    vector<int> V = {15 ,12,15,45,88,12,45,12,12,4,45,47,12,12,12,12,1,21}; 
    display(V.begin(),V.end()); 
    replace(V.begin(), V.end(), 12,1000); 
    display(V.begin(),V.end()); 

}

void ValueModifiers_examples(){
    stl_replace_example();
    stl_genrate_example();
    stl_fill_examples();
}
