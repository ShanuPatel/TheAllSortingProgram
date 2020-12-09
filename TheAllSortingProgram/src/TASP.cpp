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
	N_Tsol = n_Tsol;
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
	Bubblesort* b_Sort = new Bubblesort();
	int value = 0;
	std::cout << "Press 1 to Normal sort  \nPress 2 To Select Selection sort \nPress 3 To Select Bubble sort \n";
	std::cin >> value;
	switch (value)
	{
	case 1:
		SelectScreen = ESelction_Screen::ENormal_sort;
		NormalSort();
		return true;
		break;
	case 2:
		SelectScreen = ESelction_Screen::ESelection_sort;
		S_sort->Welcome();
		delete S_sort;
		return true;
		break;
	case 3:
		SelectScreen = ESelction_Screen::EBubble_sort;
		b_Sort->Welcome();
		delete b_Sort;
		return true;
		break;
	default:
		std::cout << "Invalid Output";
		return false;
		break;
	}
	return false;
}

// Auto Swapping FUnction for the Integer Version
void Tsol::swap_no(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//n = sizeof(b_sort) / sizeof(b_sort[0]);// for array size of Vector
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
}
