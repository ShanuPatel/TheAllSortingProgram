#include "InsertionSort.h"

void Insertionsort::Insertionsort_No()
{
	std::cout << "Enter the Elements\nPress '.' to Insert the Numbers to sort\n";
	while ((std::cin >> input) && input != In)
	{
		In_Nosort.push_back(input);
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	std::cout << "Unsorted String Array :\n";
	for (i = 0; i < In_Nosort.size(); i++)
	{
		std::cout << In_Nosort[i] <<" ";
	}

	for (i = 1; i < In_Nosort.size(); i++)
	{
		temp = In_Nosort[i];
		j = i - 1;
		while (j >= 0 && In_Nosort[j] > temp)
		{
			In_Nosort[j + 1] = In_Nosort[j];
			j = j - 1;
		}
		In_Nosort[j + 1] = temp;
	}
	std::cout << std::endl;
	std::cout << "sorted String Array:\n";
	for (i = 0; i < In_Nosort.size(); i++)
		std::cout << In_Nosort[i] << " ";
	std::cout << std::endl;
}

void Insertionsort::Insertionssort_str()
{
	std::cout << "Enter the Elements\nPress '.' to Insert the Numbers to sort\n";
	while((std::cin>>Name) && Name!=FName)
	{
		In_Strsort.push_back(Name);
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	std::cout << "Unsorted String Array :\n";
	for (i = 0; i < In_Strsort.size(); i++)
	{
		std::cout << In_Strsort[i] << " ";
	}
	for (i = 1; i < In_Strsort.size(); i++)
	{
		S_temp = In_Strsort[i];
		j = i - 1;
		while (j >= 0 && In_Strsort[j] > S_temp)
		{
			In_Strsort[j + 1] = In_Strsort[j];
			j = j - 1;
		}
		In_Strsort[j + 1] = S_temp;
	}
	std::cout << std::endl;
	std::cout<< "sorted String Array:\n";
	for (i = 0; i < In_Strsort.size(); i++)
		std::cout << In_Strsort[i] << " ";
	std::cout << std::endl;
}

bool Insertionsort::Select_Insertion()
{
	char answer = 0;
	std::cout << "Press S to Sort Names                  Press N To Sort Numbers\n" << std::endl;
	std::cout << " Press S                    or          Press N\n";
	std::cout << "--------------------------------------------------------------" << std::endl;

	std::cin >> answer;
	switch (answer)
	{
	case 'S':
		if (answer == 'S')
			Insertionssort_str();
	case 's':
		if (answer == 's')
			Insertionssort_str();
		return true;
	case'N':
		if (answer == 'N')
			Insertionsort_No();
		return true;
	case 'n':
		if (answer == 'n')
			Insertionsort_No();
		return true;

	default:
		std::cout << "Invalid Input\n";
		return false;
		break;
	}
	return false;
}

void Insertionsort::Welcome()
{
	SetName(Name);
	std::cout<<GetName();
	Select_Insertion();
}
