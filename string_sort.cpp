#include<iostream> 
#include<vector> 
#include<algorithm>

#include"utime.h"

using namespace std;

int main() {
    vector<string> Names; 
    Names.push_back("cat"); 
    Names.push_back("dog"); 
    Names.push_back("lion"); 
    Names.push_back("tiger"); 
    Names.push_back("ant"); 
    Names.push_back("elephant"); 
    display(Names.begin(), Names.end());
    cout << "Stable sort by string Size " << endl; 
    stable_sort(Names.begin(), Names.end(),compareStringBySize);
    display(Names.begin(), Names.end());  
    cout << "Sort Alphabetically " << endl; 
    sort(Names.begin(), Names.end());
    display(Names.begin(), Names.end()); 
    cout << "sort by string Size " << endl; 
    sort(Names.begin(), Names.end(),compareStringBySize);
    display(Names.begin(), Names.end()); 
    cout << "Reverse stable sort by string Size " << endl; 
    stable_sort(Names.rbegin(), Names.rend(),compareStringBySize);
    display(Names.begin(), Names.end()); 
}