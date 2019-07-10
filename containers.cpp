#include <iostream>
#include <algorithm>
#include <vector>
#include<map> 
#include<set> 
#include<unordered_map>
#include<unordered_set>
#include<deque> 
#include <string> 

#include "utills.h"
using namespace std;

void map_example(){
    map <int, string>  nums; 
    nums.insert(pair<int, string>(3, "Three")); 
    nums.insert(pair<int, string>(4, "Four")); 
    nums.insert(pair<int, string>(5, "Five")); 
    nums.insert(pair<int, string>(6, "Six")); 
    nums.insert(pair<int, string>(7, "Seven")); 
    nums.insert(pair<int, string>(1, "One")); 
    nums.insert(pair<int, string>(2, "Two")); 
    map<int, string>::iterator itr; 
    cout << "\nThe map nums is : \n"; 
    cout << "\tKEY\tELEMENT\n"; 
    for (itr = nums.begin(); itr != nums.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
    cout << endl;
    map<int, string> nums2(nums.begin(), nums.end()); 
    cout << "\nThe map nums2 after"
         << " assign from gquiz1 is : \n"; 
    cout << "\tKEY\tELEMENT\n"; 
    for (itr = nums2.begin(); itr != nums2.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
    cout << endl; 
    nums2.erase(3);
    cout << "Nums 2 after erasing pair" << endl;
    cout << "\tKEY\tELEMENT\n"; 
    for (itr = nums2.begin(); itr != nums2.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    }
}

void Umap_example(){
    unordered_map<string, double> umap; 
    umap["PI"] = 3.14; 
    umap["root2"] = 1.414; 
    umap["root3"] = 1.732; 
    umap["log10"] = 2.302; 
    umap["loge"] = 1.0; 
    umap.insert(make_pair("e", 2.718)); 
    string key = "PI"; 
    if (umap.find(key) == umap.end()) 
        cout << key << " not found\n\n"; 
    else
        cout << "Found " << key << "\n\n"; 
    key = "lambda"; 
    if (umap.find(key) == umap.end()) 
        cout << key << " not found\n"; 
    else
        cout << "Found " << key << endl; 
    unordered_map<string, double>:: iterator itr; 
    cout << "\nAll Elements : \n"; 
    for (itr = umap.begin(); itr != umap.end(); itr++) 
    { 
        cout << itr->first << "  " << itr->second << endl; 
     }
}
void set_example(){
    set <int, greater <int> > gquiz1;         
    gquiz1.insert(40); 
    gquiz1.insert(30); 
    gquiz1.insert(60); 
    gquiz1.insert(20); 
    gquiz1.insert(50); 
    gquiz1.insert(50); // only one 50 will be added to the set 
    gquiz1.insert(10); 
    set <int, greater <int> > :: iterator itr; 
    cout << "\nThe set gquiz1 is : "; 
    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) 
    { 
        cout << '\t' << *itr; 
    } 
    cout << endl; 
    set <int> gquiz2(gquiz1.begin(), gquiz1.end()); 
    cout << "\nThe set gquiz2 after assign from gquiz1 is : "; 
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) 
    { 
        cout << '\t' << *itr; 
    } 
    cout << endl; 
    cout << "\ngquiz2 after removal of elements less than 30 : "; 
    gquiz2.erase(gquiz2.begin(), gquiz2.find(30)); 
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) 
    { 
        cout << '\t' << *itr; 
    } 
    int num; 
    num = gquiz2.erase (50); 
    cout << "\ngquiz2.erase(50) : "; 
    cout << num << " removed \t" ; 
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) 
    { 
        cout << '\t' << *itr; 
    } 

}

int main (){
    Umap_example();
}