#include "Heapsort.h"

void Heapsort::Heapify(std::vector<int>& arr_no, int n, int i)
{
	int Largest = i;
	int L = 2 * i + 1;
	int R = 2 * i + 2;
	if (L<n && arr_no[L]>arr_no[Largest])
		Largest = L;

	if (R<n && arr_no[R]>arr_no[Largest])
		Largest = R;

	if (Largest != i)
	{
		swap_no(&arr_no[i], &arr_no[Largest]);
		Heapify(arr_no, n, Largest);
	}
}

void Heapsort::Heapsort_Impl(std::vector<int>& arr_no, int n)
{
	for (int i = n / 2 - 1; i >= 0; i--) {
		Heapify(arr_no, n, i);
	}

	for (int i = n - 1; i > 0; i--)
	{
		swap_no(&arr_no[0], &arr_no[i]);
		Heapify(arr_no, i, 0);
	}
}

void Heapsort::Heapsort_No()
{
	std::vector<int> stack_result;
	std::cout << "Enter the Elements\nPress '.' to Insert the Numbers to sort\n";
	while ((std::cin >> input) && input != In)
	{
		stack_result.push_back(input);
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	Heapsort_Impl(stack_result, stack_result.size());
	std::cout << '\n';
	std::cout << "sorted Arrray:" << '\n';
	for (size_t i = 0; i < stack_result.size(); i++)
		std::cout << stack_result[i] << " ";
	std::cout << '\n' << std::endl;
}

bool Heapsort::Select_Heap()
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
			//Quicksort_str();
	case 's':
		if (answer == 's')
			//Quicksort_str();
		return true;
	case'N':
		if (answer == 'N')
			Heapsort_No();
		return true;
	case 'n':
		if (answer == 'n')
			Heapsort_No();
		return true;

	default:
		std::cout << "Invalid Input\n";
		return false;
		break;
	}
}

Heapsort::~Heapsort()
{
}

void Heapsort::Welcome()
{
	SetName(Name);
	std::cout<<GetName()<<'\n';
	Select_Heap();
}

