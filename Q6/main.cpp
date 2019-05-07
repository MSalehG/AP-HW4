#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <functional>
#include <numeric>
#include <queue>
#include <algorithm>

template<typename T>
void display(const T& v);


int main()
{
	std::vector<int> vec{1, 2, 3, 4, 5, 4, 3, 2, 1};
	std::vector<int> original{ vec };
	display(vec);

	//A.
	// Iterator that stores the position of first 2 to be deleted after rearranging the vector
	auto f2erase = std::remove(vec.begin(), vec.end(), 2);
	std::cout << "The vector vec after rearranging contains : \n";
	display(vec);

	vec.erase(f2erase, end(vec));
	std::cout << "The vector vec after removing 2s contains : \n";
	display(vec);

	/////Restoring vec to its original form
	vec = original;
	/////

	//B.

	std::transform(vec.begin(), vec.end(), vec.begin(), [](int a) {return 2 * a;});
	std::cout << "The vector vec after being doubled contains : \n";
	display(vec);

	vec = original;

	//C.
	//Calculating the average of vec
	double avg = static_cast<double>(std::accumulate(vec.begin(), vec.end(), 0))/static_cast<double>(vec.size());
	std::cout << "The average of the vec is : " << avg << "\n";

	//Writing a functor to compare the distance from the average
	auto dis{ [&avg](const int& a, const int& b) {return std::abs(static_cast<double>(a) - avg) > std::abs(static_cast<double>(b) - avg);} };

	std::sort(vec.begin(), vec.end(), dis);
	std::cout << "The vector vec after sorting based on the distance from the average, contains : \n";
	display(vec);

	vec = original;

	//D.
	//Sorting vec
	std::sort(vec.begin(), vec.end());

	//Storing the iterator designating the first repetitive element
	auto last = std::unique(vec.begin(), vec.end());

	//Erasing the repeated elements from b
	vec.erase(last, vec.end());
	std::cout << "The vector vec after erasing repeated elements contains : \n";
	display(vec);

	vec = original;

	//E.
	std::set<int> tset(vec.begin(), vec.end());
	std::cout << "The set SET after being initialized with vec contains : \n";
	tset.insert(0);
	display(tset);


	//Using find, to find the first element which is bigger than 3 since set is an "ordered" container
	tset.erase(std::find(tset.begin(), tset.end(), 4), tset.end());
	std::cout << "The set SET after removing elements bigger than 3 contains : \n";
	display(tset);


}


template<typename T>
void display(const T& v)
{
	for (auto& x : v)
		std::cout << x << " ";

	std::cout << std::endl;
}