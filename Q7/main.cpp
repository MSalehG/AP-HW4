#include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <algorithm>
#include <numeric>
#include <functional>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand((unsigned)time(NULL));

	std::vector<int> a(50), b(50), c(50);

	//Generating random numbers for a vector using a lambda function
	std::generate(b.begin(), b.end(), []() {return (1 + rand() % 50);});
	std::cout << "The vector a contains : \n";
	std::copy(a.begin(), a.end(),
		std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	std::cout << "The vector b contains : \n";
	std::copy(b.begin(), b.end(),
		std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	//Sorting b
	std::sort(b.begin(), b.end());

	//Storing the iterator designating the first repetitive element
	auto last = std::unique(b.begin(), b.end());
	std::cout << "The vector b after sorting contains : \n";
	std::copy(b.begin(), b.end(),
		std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	//Erasing the repeated elements from b
	b.erase(last, b.end());
	std::cout << "The vector b after erasing repeated elements contains : \n";
	std::copy(b.begin(), b.end(),
		std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	//Resizing b to be of size 50 again
	b.resize(50, 0);
	std::cout << "The vector b after resizing contains : \n";
	std::copy(b.begin(), b.end(),
		std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	//Initializing c with 1 to 50 increasingly
	std::iota(c.begin(), c.end(), 1);
	std::cout << "The vector c contains : \n";
	std::copy(c.begin(), c.end(),
		std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	//Calculating the power of 2 of b and putting it in b
	std::transform(b.begin(), b.end(), b.begin(), [](int& a) {return a*a;});
	std::cout << "The vector b after b = b^2 contains : \n";
	std::copy(b.begin(), b.end(),
		std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	//Calculating the power of 2 of c and putting it in c
	std::transform(c.begin(), c.end(), c.begin(), [](int& a) {return a*a;});
	std::cout << "The vector c after c = c^2 contains : \n";
	std::copy(c.begin(), c.end(),
		std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	//Calculating the subtraction of power of 2s of  b and c and putting it in d
	std::transform(b.begin(), b.end(), c.begin(), a.begin(), [](int& a, int& b) {return a - b;});
	std::cout << "The vector a after a = b^2 - c^2 contains : \n";
	std::copy(a.begin(), a.end(),
		std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

}


