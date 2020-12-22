#include "InsertionSort.h"

template<typename T>
void Insertionsort::InsertionSort_Impl(std::vector<T>& Element)
{
	for (i = 1; i < Element.size(); i++)
	{
	T temp = Element[i];
		j = i - 1;
		while (j >= 0 && Element[j] > temp)
		{
			Element[j + 1] = Element[j];
			j = j - 1;
		}
		Element[j + 1] = temp;
	}
}

void Insertionsort::Insertionsort_No()
{
	std::cout << "Enter the Elements\nPress '.' to Insert the Numbers to sort\n";
	while ((std::cin >> input) && input != In)
	{
		In_Nosort.push_back(input);
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	std::cout << "\033[2J\033[1;1H";
	std::cout << "Unsorted Array :\n";
	for (i = 0; i < In_Nosort.size(); i++)
	{
		std::cout << In_Nosort[i] << " ";
	}


	InsertionSort_Impl(In_Nosort);


	std::cout << '\n';
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
	std::cout << "\033[2J\033[1;1H";

	std::cout << "Unsorted String Array :\n";
	for (i = 0; i < In_Nosort.size(); i++)
	{
		std::cout << In_Nosort[i] << " ";
	}

	InsertionSort_Impl(In_Strsort);

	std::cout << '\n';
	std::cout<< "sorted String Array:\n";
	for (i = 0; i < In_Strsort.size(); i++)
		std::cout << In_Strsort[i] << " ";
	std::cout << std::endl;
}

bool Insertionsort::Select_Insertion()
{
	char answer = 0;
	std::cout << "Press S to Sort Names                  Press N To Sort Numbers\n" << '\n';
	std::cout << " Press S                    or          Press N\n";
	std::cout << "--------------------------------------------------------------" << '\n';

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
	std::cout<<GetName()<<'\n';
	Select_Insertion();
}
