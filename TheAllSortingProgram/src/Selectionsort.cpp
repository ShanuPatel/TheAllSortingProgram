#include "Selectionsort.h"

template<typename T>
void Selectionsort::SelectionSort_Impl(std::vector<T>& Element)
{
	std::cout << "Unsorted array :\n";
	for (i = 0; i < Element.size(); i++)
		std::cout << Element[i] << " ";
	std::cout << '\n';
	for (i = 0; i < Element.size() - 1; i++)
	{
		min_indx = i;
		for (j = i + 1; j < Element.size(); j++)
			if (Element[j] < Element[min_indx])
				min_indx = j;
		swap_Impl(Element[min_indx], Element[i]);
	}
}

void Selectionsort::SelectionSort_No()
{
	Name = "Sorted Using Selection sort\n";
	std::cout << "Enter the Elements\nPress '.' to Insert the Numbers to sort  \n";
	while ((std::cin >> input) && input != In)
	{
		array.push_back(input);
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	std::cout << "\033[2J\033[1;1H";
	SelectionSort_Impl(array);
	std::cout << "sorted Arrray:\n";
	for (i = 0; i < array.size(); i++)
		std::cout << array[i] << " ";
	std::cout << "\n" << std::endl;
}

void Selectionsort::SelectionSort_Str()
{
	std::cout << "Enter the Elements\nPress '.' to Insert the Numbers to sort\n";
	while ((std::cin >> Name) && Name != FName)
	{
		s_array.push_back(Name);
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	std::cout << "\033[2J\033[1;1H";
	SelectionSort_Impl(s_array);
	std::cout << '\n';
	std::cout <<"sorted String Array:\n";
	for (i = 0; i < s_array.size(); i++)
		std::cout << s_array[i] << " ";
	std::cout << "\n" << std::endl;
}

Selectionsort::~Selectionsort()
{
}

void Selectionsort::Welcome()
{
	SetName(Name);
	std::cout << GetName();
	Select_Selection();
}

bool Selectionsort::Select_Selection()
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