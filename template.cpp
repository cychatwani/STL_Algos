#include <iostream>
#include <functional>
#include <iterator>
#include <numeric>
#include <vector>
 
int main()
{
  std::vector<int> data {3, 1, 4, 1, 5, 9, 2, 6};
 
  std::cout << "exclusive sum: ";
  std::exclusive_scan(data.begin(), data.end(),
		      std::ostream_iterator<int>(std::cout, " "),
		      0);
  std::cout << "\ninclusive sum: ";
  std::inclusive_scan(data.begin(), data.end(),
		      std::ostream_iterator<int>(std::cout, " "));
 
  std::cout << "\n\nexclusive product: ";  
  std::exclusive_scan(data.begin(), data.end(),
		      std::ostream_iterator<int>(std::cout, " "),
		      1, std::multiplies<>{});		      
  std::cout << "\ninclusive product: ";
  std::inclusive_scan(data.begin(), data.end(),
		      std::ostream_iterator<int>(std::cout, " "),
		      std::multiplies<>{});		      
}