#include "bubble.h"

Bubblesort::Bubblesort()
{
	i = {};
	j = {};
	n = {};
	
	bIsSwapped = false;
}

void Bubblesort::Welcome()
{
	SetName("Welcome to bubble Sort\n\n");
	std::cout << GetName();
}

Bubblesort::~Bubblesort()
{
}

void Bubblesort::bubblesort_No()
{
	n = sizeof(b_sort) / sizeof(b_sort[0]);
	bIsSwapped = false;
	std::cout << "Unsorted array :" << std::endl;
	for (i = 0; i < n; i++)
		std::cout << b_sort[i] << " ";
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (b_sort[j] > b_sort[j + 1])
				swap(&b_sort[j], &b_sort[j + 1]);
			bIsSwapped = true;
		}
		if (bIsSwapped == false)
			break;
	}

	std::cout << "\n";
	std::cout << "sorted Arrray:" << std::endl;
	for (i = 0; i < n; i++)
		std::cout << b_sort[i] << " ";
	std::cout << "\n" << std::endl;
}