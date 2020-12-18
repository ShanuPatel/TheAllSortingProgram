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

	Quicksort_Impl(stack_result,0,stack_result.size()-1);
	std::cout << '\n';
	std::cout << "sorted Arrray:" << '\n';
	for (size_t i = 0; i < stack_result.size(); i++)
		std::cout << stack_result[i] << " ";
	std::cout << '\n' << std::endl;
}

int Quicksort::Particition_str(std::vector<std::string>& a, int start, int end)
{
	std::string pivot = a[end];
	int pIndex = start;

	for (int i = start; i < end; i++)
	{
		if (a[i] <= pivot)
		{
			std::string temp = a[i];
			a[i] = a[pIndex];
			a[pIndex] = temp;
			pIndex++;
		}
	}
	std::string temp = a[pIndex];
	a[pIndex] = a[end];
	a[end] = temp;
	return pIndex;
}

void Quicksort::Quicksort_str_Impl(std::vector<std::string>& a, int start, int end)
{
	if (start < end)
	{
		int pIndex = Particition_str(a, start, end);
		Quicksort_str_Impl(a, start, pIndex - 1);
		Quicksort_str_Impl(a, pIndex + 1, end);
	}
}

void Quicksort::Quicksort_str()
{
	std::vector<std::string> stack_result;
	std::cout << "Enter the Elements\nPress '.' to Insert the Numbers to sort\n";
	while ((std::cin >> Name) && Name != FName)
	{
		stack_result.push_back(Name);
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	Quicksort_str_Impl(stack_result, 0, stack_result.size() - 1);
	std::cout << '\n';
	std::cout << "sorted Arrray:" << '\n';
	for (size_t i = 0; i < stack_result.size(); i++)
		std::cout << stack_result[i] << " ";
	std::cout << '\n' << std::endl;
}

bool Quicksort::Select_Quick()
{
	char answer = 0;
	std::cout << "Press S to Sort Names                  Press N To Sort Numbers" << std::endl;
	std::cout << " Press S                    or          Press N\n";
	std::cout << "--------------------------------------------------------------" << std::endl;

	std::cin >> answer;
	switch (answer)
	{
	case 'S':
		if (answer == 'S')
			Quicksort_str();
	case 's':
		if (answer == 's')
			Quicksort_str();
		return true;
	case'N':
		if (answer == 'N')
			Quicksort_No();
		return true;
	case 'n':
		if (answer == 'n')
			Quicksort_No();
		return true;

	default:
		std::cout << "Invalid Input\n";
		return false;
		break;
	}
}

Quicksort::~Quicksort()
{
}

void Quicksort::Welcome()
{
	SetName(Name);
	std::cout << GetName()<<'\n';
	Select_Quick();
}
