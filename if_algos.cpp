#include <iostream>
#include <algorithm>
#include <vector>


#include "utills.h"
using namespace std;
void stl_replace_if_example(){
    vector<int> V = getRandoms(20); 
    display(V.begin(), V.end());
    replace_if(V.begin(), V.end(), [](int i){
        return i % 2 == 0; 
    }, 0);
    display(V.begin(), V.end());

}
void stl_replace__copy_if_example(){
    vector<int> V = getRandoms(20); 
    vector<int> dest;
    dest.resize(20);
    display(V.begin(), V.end());
    replace_copy_if(V.begin(), V.end(),dest.begin(), [](int i){
        return i % 2 == 0; 
    }, 0);
    display(dest.begin(), dest.end());

}
void stl_find_if_example(){
    vector<int> V = getRandoms(20); 
    display(V.begin(), V.end());
    vector<int>::iterator it = find_if(V.begin(), V.end(), [](int i ){
        return i % 2 != 0;
    });
    cout << "The first odd value is " << *it << '\n';

}
void stl_count_if_example(){
    std::vector<int> myvector = getRandoms(20);
    display(myvector.begin(), myvector.end());
    int mycount = count_if (myvector.begin(), myvector.end(), [](int i){
        return i % 2 != 0; 
    });
    std::cout << "myvector contains " << mycount  << " odd values\n";

}
void stl_find_if__not_example(){
    vector<int> V = getRandoms(20); 
    display(V.begin(), V.end());
    vector<int>::iterator it = find_if_not(V.begin(), V.end(), [](int i ){
        return i % 2 != 0;
    });
    cout << "The first even value is " << *it << '\n';

}

void stl_copy_if(){
    vector<int> V = getRandoms(20); 
    vector<int> dest;
    dest.resize(20);
    display(V.begin(), V.end());
     auto it = copy_if(V.begin(), V.end(),dest.begin(), [](int i){
        return i % 2 == 0; 
    });
    dest.resize(std::distance(dest.begin(),it));
    display(dest.begin(), dest.end());

}

void copy_example(){
    stl_replace_if_example();
    stl_replace__copy_if_example();
    stl_find_if_example();
    stl_count_if_example();
    stl_find_if__not_example();
    stl_copy_if();
}

int main (){
    stl_copy_if();
	return 0; 
}
