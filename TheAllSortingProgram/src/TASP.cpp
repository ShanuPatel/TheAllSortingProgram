#include "TASP.h"
#include <algorithm>

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
	char answer=0;
	std::cout << "Press S to Sort Names                  Press N To Sort Numbers"<< std::endl;
	std::cout << " Press S                    or          Press N\n";
	std::cout << "--------------------------------------------------------------" << std::endl;

	std::cin >> answer;
	switch (answer)
	{
	case 'S':
		if (answer == 'S')
			SelectionSort_Str();
	case 's':
		if (answer == 's')
			SelectionSort_Str();
			return true;
	case'N':
		if (answer == 'N')
			SelectionSort_No();
		return true;
	case 'n':
		if (answer == 'n')
			SelectionSort_No();
		return true;

	default:
		std::cout << "Invalid Input\n";
		return false;
		break;
	}
}

// Auto Swapping FUnction for the Integer Version
void Tsol::swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//Using Integers
void Tsol::SelectionSort_No()
{
	std::string Name;
	Name = "Welcome to the Selection sort\n";
	std::cout << Name << std::endl;
	int  n, i, j, min_indx;
	std::vector<int> array = { 55, 44, 35, 25, 11, 199, 99};
	n = sizeof(array) / sizeof(array[0]);
	std::cout << "Unsorted array :\n";
	for (i = 0; i < n; i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;
	for (i = 0; i < n - 1; i++)
	{
		min_indx = i;
		//std::cout << min_indx;
		for (j = i + 1; j < n; j++)
			if (array[j] < array[min_indx])
				min_indx = j;
		swap(&array[min_indx], &array[i]);
	}
	std::cout << "sorted Arrray:\n";
	for (i = 0; i < n; i++)
		std::cout << array[i] << " ";
	std::cout << "\n" << std::endl;
}

//Using String Literals
void Tsol::SelectionSort_Str()
{
	
	std::string s_array[] = { "Baba","Sunil","Ali","Farah","Ranveer" };
	n = sizeof(s_array) / sizeof(s_array[0]);
	std::cout << "Unsorted String Array :\n";
	for (i = 0; i < n; i++)
		std::cout << s_array[i] << " ";
	for (i = 0; i < n - 1; i++) {
		min_indx = i;
		for (j = i + 1; j < n; j++)
			if (s_array[j] < s_array[min_indx])
				min_indx = j;
		/**mannual swapping*/
		std::string temp = s_array[min_indx];
		s_array[min_indx] = s_array[i];
		s_array[i] = temp;
	}
	std::cout << std::endl << "\n";
	std::cout << "sorted String Array:\n";
	for (i = 0; i < n; i++)
		std::cout << s_array[i] << " ";
	std::cout << "\n" << std::endl;
}

//Vector input Try
void Tsol::NormalSort()
{
	std::vector<int> v{ 1, 5, 8, 9, 6, 7, 3, 4, 2 };

	sort(v.begin(), v.end());

	std::cout << "Sorted \n";
	for (auto x : v)
		std::cout << x << " ";
}