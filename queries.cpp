#include <iostream>     // std::cout
#include<vector> 
#include <functional>
#include<algorithm> 
#include<iterator> 
#include <functional>   // std::multiplies
#include <numeric>      // std::partial_sum

#include"utills.h"

using namespace std; 

int myfunction (int x, int y) {return x+2*y;}
struct myclass {
	int operator()(int x, int y) {return x+3*y;}
} myobject;

void accumulate_examples(){
    int init = 100;
    int numbers[] = {10,20,30};
    std::cout << "using default accumulate: ";
    std::cout << std::accumulate(numbers,numbers+3,init);
    std::cout << '\n';
    std::cout << "using functional's minus: ";
    std::cout << std::accumulate (numbers, numbers+3, init, std::minus<int>());
    std::cout << '\n';
    std::cout << "using custom function: ";
    std::cout << std::accumulate (numbers, numbers+3, init, myfunction);
    std::cout << '\n';
    std::cout << "using custom object: ";
    std::cout << std::accumulate (numbers, numbers+3, init, myobject);
    std::cout << '\n';
}
void partial_sum_examples(){
    vector<int> arr = getRandoms(20); 
    vector<int> results(5); 
    partial_sum(arr.begin(), arr.begin() + 5, results.begin()); 
    display(arr.begin(), arr.end());
    display(results.begin(), results.end());
}
void partial_sum_functors_examples(){
    vector<int> arr = getRandoms(20,1,10); 
    vector<int> results(5); 
    partial_sum(arr.begin(), arr.begin() + 5, results.begin(),multiplies<int>());
    display(arr.begin(), arr.end());
    display(results.begin(), results.end());
}
void partial_sum_coustomFunctors_examples(){
    vector<int> arr = getRandoms(20,1,10); 
    vector<int> results(5); 
    partial_sum(arr.begin(), arr.begin() + 5, results.begin(),[](int x, int y){
        return x +  y + 1 ; 
    }); 
    display(arr.begin(), arr.end());
    display(results.begin(), results.end());
}
void adjacent_difference_examples(){
    vector<int> arr = getRandoms(20); 
    vector<int> results(5); 
    adjacent_difference(arr.begin(), arr.begin() + 5, results.begin()); 
    display(arr.begin(), arr.end());
    display(results.begin(), results.end());
}

void inner_product_examples(){
    vector<int> series1 = getRandoms(5,1,10); 
    vector<int> series2 = getRandoms(5,1,10); 
    display(series1.begin(),series1.end());
    display(series2.begin(),series2.end());
    std::cout << "Inner product: \n" << std::inner_product(series1.begin(), series1.end(), series2.begin(), 0); 
    std::cout << '\n'; 
}
void lower_bound_example(){
    std::vector<int> v{ 10, 20, 30, 40, 50 }; 
    display(v.begin(),v.end());
    vector<int>::iterator low1 = std::lower_bound(v.begin(), v.end(), 20); 
    vector<int>::iterator low2 = std::lower_bound(v.begin(), v.end(), 55); 
    std::cout << "\nlower_bound for element 20 at position : " << (low1 - v.begin()); 
    std::cout << "\nlower_bound for element 55 at position : " << (low2 - v.begin()); 
    std::cout << "\n";
}
void upper_bound_example(){
    std::vector<int> v{10,20,30,30,20,10,10,201,1,1,126,54,12,78,20}; 
    display(v.begin(),v.end());
    vector<int>::iterator up1 = std::upper_bound(v.begin(), v.end(), 20);  
    std::cout << "\n upper_bound for element 20 at position : " << (up1 - v.begin()); 
    std::cout << "\n";
}
// void inclusive_scan_example (){
//     std::vector<int> data {3, 1, 4, 1, 5, 9, 2, 6};
//     std::cout << "\ninclusive sum: ";
//     std::inclusive_scan(data.begin(), data.end(),std::ostream_iterator<int>(std::cout, " "));
//     std::cout << "\ninclusive product: ";
//     std::inclusive_scan(data.begin(), data.end(),
// 		      std::ostream_iterator<int>(std::cout, " "),
// 		      std::multiplies<>{});
// }
void min_element_example(){
    int v[] = { 9, 4, 7, 2, 5, 10, 11, 12, 1, 3, 6 }; 
    int* i1; 
    i1 = std::min_element(v + 2, v + 5); 
    cout << *i1 << "\n"; 
}

void max_element_example(){
    int v[] = { 9, 4, 7, 2, 5, 10, 11, 12, 1, 3, 6 }; 
    int* i1; 
    i1 = std::max_element(v + 2, v + 5);  
    cout << *i1 << "\n"; 
}
void minmax_element_example(){
    std::array<int,7> foo {3,7,2,9,5,8,6};
    auto result = std::minmax_element (foo.begin(),foo.end());
     std::cout << "min is " << *result.first;
     std::cout << ", at position " << (result.first-foo.begin()) << '\n';
     std::cout << "max is " << *result.second;
     std::cout << ", at position " << (result.second-foo.begin()) << '\n';
}

int main (){ 
    minmax_element_example();
    return 1;
}


