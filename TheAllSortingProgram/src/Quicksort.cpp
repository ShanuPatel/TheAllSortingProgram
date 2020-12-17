#include "Quicksort.h"

int Quicksort::Particition(std::vector<int>& a, int start, int end)
{
	int pivot = a[end];
	int pIndex = start;

	for (int i = start; i < end; i++)
	{
		if (a[i] <= pivot)
		{
			swap_no(&a[i], &a[pIndex]);
			pIndex++;
		}
	}
	swap_no(&a[pIndex], &a[end]);
	return pIndex;
}

void Quicksort::Quicksort_Impl(std::vector<int>& a, int start, int end)
{
	if (start < end)
	{
		int pIndex = Particition(a, start, end);
		Quicksort_Impl(a, start, pIndex - 1);
		Quicksort_Impl(a, pIndex + 1, end);
	}
}

void Quicksort::Quicksort_No()
{
	std::vector<int> stack_result;
	std::cout << "Enter the Elements\nPress '.' to Insert the Numbers to sort\n";
	while ((std::cin >> input) && input != In)
	{
		stack_result.push_back(input);
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	Quicksort_Impl(stack_result,0,7);
	std::cout << '\n';
	std::cout << "sorted Arrray:" << '\n';
	for (size_t i = 0; i < stack_result.size(); i++)
		std::cout << stack_result[i] << " ";
	std::cout << '\n' << std::endl;
}

Quicksort::~Quicksort()
{
}
