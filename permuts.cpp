#include <iostream>     // std::cout
#include<vector> 
#include <functional>
#include<algorithm> 
#include<iterator> 
#include <functional>   // std::multiplies
#include <numeric>      // std::partial_sum
#include <random>       // std::default_random_engine
#include <chrono>       // std::chrono::system_clock

#include"utills.h"

using namespace std; 

void all_permutations(){
    vector<int> data = getRandoms(5); 
    sort(data.begin(),data.end()); 
    while(next_permutation(data.begin(),data.end())) display(data.begin(),data.end()); 
}
void shuffle_example(){
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    vector<int> data = getRandoms(10); 
    display(data.begin(),data.end()); 
    shuffle(data.begin(),data.end(),std::default_random_engine(seed));
    display(data.begin(),data.end()); 
}
void reverseExample(){
     vector<int> data = getRandoms(15); 
     display(data.begin(),data.end()); 
     reverse(data.begin(),data.end()); 
     display(data.begin(),data.end()); 
}

void rotateExample(){
    std::vector<int> myvector = getRandoms(15); 
    display(myvector.begin(),myvector.end()); 
    std::rotate(myvector.begin(),myvector.begin()+3,myvector.end());
    display(myvector.begin(),myvector.end()); 
}


int main (){
    rotateExample();
}
