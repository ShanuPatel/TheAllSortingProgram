#include "TASP.h"
#include <algorithm>
#include "Selectionsort.h"
#include "bubble.h"
#include "InsertionSort.h"
#include "Mergesort.h"

Tsol::~Tsol()
{
}
void Tsol::SetName(std::string& n_Tsol)
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
	ESelction_Screen SelectScreen;
	Selectionsort* S_sort = new Selectionsort();
	Bubblesort* b_Sort = new Bubblesort();
	Insertionsort* I_sort = new Insertionsort();

	int value = 0;
	std::cout << "Press 1 to Normal sort  \nPress 2 To Select Selection sort \nPress 3 To Select Bubble sort \nPress 4 To Select Insertionsort sort \n";
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
	case 4:
		SelectScreen = ESelction_Screen::EInsertion_sort;
		I_sort->Welcome();
		delete I_sort;
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
//Vector input sort
void Tsol::NormalSort()
{
	std::cout << "Enter the Elements\nPress '.' to Insert the Numbers to sort \n";
	while ((std::cin >> input) && input != In) {
		V.push_back(input);
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	std::cout << "Unsorted array: \n";
	for ( i = 0; i < V.size(); i++)
		std::cout << V[i]<<" ";
	std::cout << std::endl;
	sort(V.begin(), V.end());

	std::cout << "Sorted \n";
	for (auto x : V)
		std::cout << x << " ";
}

void MainSortingCall()
{
	Tsol sol;
	//sol.Welcome();
	MergeSort* M_sort = new MergeSort();
	M_sort->Welcome();
	delete M_sort;
}