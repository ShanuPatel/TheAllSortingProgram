#include "bubble.h"

bool Bubblesort::select_bubble()
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
			bubblesort_str();
	case 's':
		if (answer == 's')
			bubblesort_str();
			return true;
	case'N':
		if (answer == 'N')
			bubblesort_No();
		return true;
	case 'n':
		if (answer == 'n')
			bubblesort_No();
		return true;

	default:
		std::cout << "Invalid Input\n";
		return false;
		break;
	}
}

Bubblesort::Bubblesort()
{
	i = {};
	j = {};
	bIsSwapped = false;
}

void Bubblesort::Welcome()
{
	SetName("Welcome to bubble Sort\n\n");
	std::cout << GetName();
	select_bubble();
}

Bubblesort::~Bubblesort()
{
}

void Bubblesort::bubblesort_No()
{
	bIsSwapped = false;
	std::cout << "Unsorted array :" << std::endl;
	for (i = 0; i < b_Nosort.size(); i++)
		std::cout << b_Nosort[i] << " ";

	for (i = 0; i < b_Nosort.size() - 1; i++)
	{
		for (j = 0; j < b_Nosort.size() - i - 1; j++)
		{
			if (b_Nosort[j] > b_Nosort[j + 1])
				swap_no(&b_Nosort[j], &b_Nosort[j + 1]);
			bIsSwapped = true;
		}
		if (bIsSwapped == false)
			break;
	}

	std::cout << "\n";
	std::cout << "sorted Arrray:" << std::endl;
	for (i = 0; i < b_Nosort.size(); i++)
		std::cout << b_Nosort[i] << " ";
	std::cout << "\n" << std::endl;
}

void Bubblesort::bubblesort_str()
{
	bIsSwapped = false;
	std::cout << "Unsorted list of Names :" << std::endl;
	for (i = 0; i < b_strsort.size(); i++)
		std::cout << b_strsort[i] << " ";

	for (i = 0; i < b_strsort.size() - 1; i++)
	{
		for (j = 0; j < b_strsort.size() - i - 1; j++)
		{
			if (b_strsort[j] > b_strsort[j + 1])
			{ 	//performing Manually string swap automate this string swap later
				std::string temp = b_strsort[j];
				b_strsort[j] = b_strsort[j + 1];
				b_strsort[j + 1] = temp;
			}
			bIsSwapped = true;
		}
		if (bIsSwapped == false)
			break;
	}
	std::cout << "\n";
	std::cout << "sorted Arrray:" << std::endl;
	for (i = 0; i < b_strsort.size(); i++)
		std::cout << b_strsort[i] << " ";
	std::cout << "\n" << std::endl;
}
