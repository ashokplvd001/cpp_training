#include <iostream>
#include <vector>
#include <fstream>



int main() {
	std::vector<int> vec = { 1, 2, 3, 4, 5 };
	// Using Input Iterator
	for (std::istream_iterator<int> it(std::cin), end; it
		!= end; ++it) {
		std::cout << *it << ' ';
	}		std::ostream_iterator<int> outIt(std::cout, " | ");	std::copy(vec.begin(), vec.end(), outIt );
	

		//std::copy(vec.begin(), vec.end(), std::ostream_iterator<int>(std::cout, " | "));



	return 0;
}