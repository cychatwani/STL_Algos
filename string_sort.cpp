#include<iostream> 
#include<string> 
#include<vector> 
#include<algorithm>

#include "utills.h"

using namespace std;

void string_stabe_sort_bySize (){
    vector<string> Names = getAnimals(10); 
    display(Names.begin(), Names.end());
    cout << "Stable sort by string Size " << endl; 
    stable_sort(Names.begin(), Names.end(),compareStringBySize);//O(NlogN)
    display(Names.begin(), Names.end());  
}

void string_sort_alphabetically(){
    /*
     // since the comparision takes O(k) time  where the k is size of the strings 
     the time complexity of sorting will be O(k*nlogn) where k is size of strings 
    */
    vector<string> Names = getAnimals(10); 
    display(Names.begin(), Names.end());  
    cout << "Sort Alphabetically " << endl; 
    sort(Names.begin(), Names.end());
    display(Names.begin(), Names.end()); 
}

void string_sort_bySize(){
    vector<string> Names = getAnimals(10); 
    display(Names.begin(), Names.end());  
    cout << "sort by string Size " << endl; 
    sort(Names.begin(), Names.end(),compareStringBySize);//O(NlogN)
    display(Names.begin(), Names.end()); 
}
void string_reverse_stable_sort_bySize(){
    vector<string> Names = getAnimals(10); 
    display(Names.begin(), Names.end());  
    cout << "Reverse stable sort by string Size " << endl; 
    stable_sort(Names.rbegin(), Names.rend(),compareStringBySize);//O(NlogN)
    display(Names.begin(), Names.end()); 
}

void string_sorting_examples(){
    string_reverse_stable_sort_bySize(); 
    string_sort_alphabetically();
    string_stabe_sort_bySize(); 
    string_sort_bySize();
}