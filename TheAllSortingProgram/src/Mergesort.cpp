#include "Mergesort.h"
#include <algorithm>

std::vector<int> MergeSort::merge_fun(std::vector<int>& left, std::vector<int>& right)
{
	return std::vector<int>();
}

void MergeSort::MergeSort_No()
{
	std::cout << "Enter the Elements\nPress '.' to Insert the Numbers to sort\n";
	while ((std::cin >> input_one) && input_one != In)
	{
		stack_result.push_back(input_one);
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	MergeSort_Imp(stack_result);
}

MergeSort::~MergeSort()
{
}

void MergeSort::Welcome()
{
	SetName(Name);
	std::cout<<GetName();
	std::cout << std::endl;
	MergeSort_No();
}

std::vector<int> MergeSort::MergeSort_Imp(std::vector<int>& stack_result)
{
	return stack_result;
}