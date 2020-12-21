#include "bubble.h"

bool Bubblesort::select_bubble()
{
	char answer = 0;
	std::cout << "Press S to Sort Names                  Press N To Sort Numbers" << '\n';
	std::cout << " Press S                    or          Press N\n";
	std::cout << "--------------------------------------------------------------" << '\n';

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

void Bubblesort::Welcome()
{
	SetName(Name);
	std::cout << GetName();
	select_bubble();
}

Bubblesort::~Bubblesort()
{
}

void Bubblesort::bubblesort_No()
{
	std::cout<< "Enter the Elements\nPress '.' to Insert the Numbers to sort\n";
	while ((std::cin >> input) && input != In)
	{
		b_Nosort.push_back(input);
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	std::cout << "\033[2J\033[1;1H";
	Bubblesort_Impl(b_Nosort);
	std::cout << '\n';
	std::cout << "sorted Arrray:" << '\n';
	for (i = 0; i < b_Nosort.size(); i++)
		std::cout << b_Nosort[i] << " ";
	std::cout << "\n" << std::endl;
}

template<typename T>
void Bubblesort::Bubblesort_Impl(std::vector<T>& Element)
{
	bIsSwapped = false;
	std::cout << "Unsorted list of Names :" << '\n';
	for (i = 0; i < Element.size(); i++)
		std::cout << Element[i] << " ";

	for (i = 0; i < Element.size() - 1; i++)
	{
		for (j = 0; j < Element.size() - i - 1; j++)
		{
			if (Element[j] > Element[j + 1])
			{ 	//performing Manually string swap automate this string swap later
				/*T temp = Element[j];
				Element[j] = Element[j + 1];
				Element[j + 1] = temp;*/

				//swap_no(&Element[j], &Element[j + 1]);
				swap_Impl(Element[j], Element[j + 1]);
			}
			bIsSwapped = true;
		}
		if (bIsSwapped == false)
			break;
	}
}

void Bubblesort::bubblesort_str()
{
	std::cout<<"Enter the Elements\nPress '.' to Insert the Numbers to sort\n";
	while ((std::cin >> Name) && Name != FName)
	{
		b_strsort.push_back(Name);
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	std::cout << "\033[2J\033[1;1H";
	Bubblesort_Impl(b_strsort);

	std::cout << "\n";
	std::cout << "sorted Arrray:" << '\n';
	for (i = 0; i < b_strsort.size(); i++)
		std::cout << b_strsort[i] << " ";
	std::cout << "\n" << std::endl;
}