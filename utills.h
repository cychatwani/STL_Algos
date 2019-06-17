//
// Created by chirag on 13/6/19.
//

#include "utills.cpp"

#ifndef STL_SUMMER_2019_UTILLS_H
#define STL_SUMMER_2019_UTILLS_H

std::vector<int> range(int n);
template<typename T> 
void display(T begin, T end);
template<typename T, template <typename, typename> class Container>
void getUserInput(Container<T, std::allocator<T>>& arr, int size);
template <typename T> 
bool reverseComparefunction (T i , T j); 
bool compareStringBySize (std::string i , std::string  j); 
void printRandoms(int lower, int upper, int count) ;
std::vector<std::string> getAnimals(int count);
std::vector<int> getRandoms(int count,int lower=1, int upper=1000);


#endif //STL_SUMMER_2019_UTILLS_H
