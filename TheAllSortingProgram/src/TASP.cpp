#include "TASP.h"
#include <algorithm>
#include "Selectionsort.h"
#include "bubble.h"

Tsol::Tsol()
{
	N_Tsol = "Welcome To The All Sorting Program\n";
}
Tsol::~Tsol()
{
}
void Tsol::SetName(std::string n_Tsol)
{
	N_Tsol=n_Tsol;
}
std::string Tsol::GetName()
{
	return N_Tsol;
}

//Welcome Screen Text
void Tsol::Welcome()
{
	std::cout << N_Tsol << std::endl;
	SelectFrom();
}

//Selection of the Integer or String option
bool Tsol::SelectFrom()
{
	Selectionsort* S_sort = new Selectionsort();
	char answer=0;
	std::cout << "Press S to Sort Names                  Press N To Sort Numbers"<< std::endl;
	std::cout << " Press S                    or          Press N\n";
	std::cout << "--------------------------------------------------------------" << std::endl;

	std::cin >> answer;
	switch (answer)
	{
	case 'S':
		if (answer == 'S')
			S_sort->SelectionSort_Str();
	case 's':
		if (answer == 's')
			S_sort->SelectionSort_Str();
			return true;
	case'N':
		if (answer == 'N')
			S_sort->SelectionSort_No();
		return true;
	case 'n':
		if (answer == 'n')
			S_sort->SelectionSort_No();
		return true;

	default:
		std::cout << "Invalid Input\n";
		return false;
		break;
	}
	delete S_sort;
}

// Auto Swapping FUnction for the Integer Version
void Tsol::swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//Vector input Try
void Tsol::NormalSort()
{
	sort(v.begin(), v.end());

	std::cout << "Sorted \n";
	for (auto x : v)
		std::cout << x << " ";
}

void MainSortingCall()
{
	Tsol sol;
	sol.Welcome();

	Bubblesort bubble;
	bubble.Welcome();
	bubble.bubblesort_No();
}
