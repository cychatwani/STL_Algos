//
// Created by chirag on 13/6/19.
//
#include <vector>
#include <iostream>
#include <stdlib.h> 
#include <time.h> 



std::vector<int> getRandoms(int count,int lower, int upper) 
{
    srand ( time(NULL) );
    std::vector<int> rands; 
    while(count--)rands.push_back((rand() % (upper - lower + 1)) + lower);
    return rands; 
}
void printRandoms(int lower, int upper,  
                             int count) 
{ 
    int i; 
    for (i = 0; i < count; i++) { 
        int num = (rand() % 
           (upper - lower + 1)) + lower; 
        printf("%d ", num); 
    } 
} 
std::vector<int> range(int n){
    std::vector<int> range;
    for(int i = 0; i < n; i++){
        range.push_back(i+1);
    }
    return range;
}

template<typename T> 
void display(T begin, T end){
    for(T it = begin; it != end; it++) std::cout << *it << " ";
    std::cout << std::endl;
}

template<typename T, template <typename, typename> class Container>
void getUserInput(Container<T, std::allocator<T>>& arr, int size){
    std::cout << "Enter " << size << " Values:" << std::endl; 
    for(int i : range (size)){
        T temp; 
        std::cin >> temp;  
        arr.push_back(temp);
    }
}

template <typename T> 
bool reverseComparefunction (T i , T j) 
{
    return i > j;
}

bool compareStringBySize (std::string i , std::string  j) 
{
    return i.size() < j.size();
}