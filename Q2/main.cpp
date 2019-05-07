#include <iostream>
#include <vector>
#include <string>
#include <memory>

template<class T>
void display(const std::vector<std::unique_ptr<T>> &v);

int main()
{

	std::vector<std::unique_ptr<std::string>> vec;
	
	/*

	for (int i{}; i < 1000; i++)
	{
		vec.push_back(std::make_unique<std::string>("Str " + std::to_string(i)));
		display(vec);
	}
	
	*/

	/*
	vec.reserve(1000);

	for (int i{}; i < 1000; i++)
	{
		vec.push_back(std::make_unique<std::string>("Str " + std::to_string(i)));
		display(vec);
	}
	*/


}



template<class T>
void display(const std::vector<std::unique_ptr<T>> &v)
{
	std::cout << "Size :" << v.size() << " and Capacity : " << v.capacity() << "\n";
}