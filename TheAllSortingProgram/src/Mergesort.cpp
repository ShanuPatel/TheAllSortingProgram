#include "Mergesort.h"
#include <algorithm>

MergeSort::~MergeSort()
{
}

void MergeSort::Welcome()
{
	SetName(Name);
	std::cout<<GetName();
	std::cout << std::endl;
	select_Merge();
}

bool MergeSort::select_Merge()
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
			Mergesort_str();
	case 's':
		if (answer == 's')
			Mergesort_str();
		return true;
	case'N':
		if (answer == 'N')
			MergeSort_No();
		return true;
	case 'n':
		if (answer == 'n')
			MergeSort_No();
		return true;

	default:
		std::cout << "Invalid Input\n";
		return false;
		break;
	}
}
std::vector<int> MergeSort::merge_fun(std::vector<int>& L, std::vector<int>& R)
{
	std::vector<int> Result;
	while ((int)L.size() > 0 || (int)R.size() > 0)
	{
		if ((int)L.size() > 0 && (int)R.size() > 0)
		{
			if ((int)L.front() <= (int)R.front())
			{
				Result.push_back((int)L.front());
				L.erase(L.begin());
			}
			else
			{
				Result.push_back((int)R.front());
				R.erase(R.begin());
			}
		}
		else if((int)L.size()>0)
		{
			for (int i = 0; i < (int)L.size(); i++)
				Result.push_back(L[i]);
			break;
		}
		else if ((int)R.size() > 0)
		{
			for (int i = 0; i < (int)R.size(); i++)
				Result.push_back(R[i]);
			break;
		}
	}
	return Result;
}

std::vector<std::string> MergeSort::str_Mergesort_Imp(std::vector<std::string>& stack_result)
{
	if (stack_result.size() <= 1)
		return stack_result;

	std::vector<std::string>L, R, Result;
	int middle = ((int)stack_result.size() + 1) / 2;

	for (int i = 0; i < middle; i++)
		L.push_back(stack_result[i]);

	for (int i = middle; i < (int)stack_result.size(); i++)
		R.push_back(stack_result[i]);

	L = str_Mergesort_Imp(L);
	R = str_Mergesort_Imp(R);
	Result = str_Merge_fun(L, R);

	return Result;
}

std::vector<std::string> MergeSort::str_Merge_fun(std::vector<std::string>& L, std::vector<std::string>& R)
{
	std::vector<std::string> Result;
	while ((int)L.size() > 0 || (int)R.size() > 0)
	{
		if ((int)L.size() > 0 && (int)R.size() > 0)
		{
			if ((std::string)L.front() <= (std::string)R.front())
			{
				Result.push_back((std::string)L.front());
				L.erase(L.begin());
			}
			else
			{
				Result.push_back((std::string)R.front());
				R.erase(R.begin());
			}
		}
		else if ((int)L.size() > 0)
		{
			for (int i = 0; i < (int)L.size(); i++)
				Result.push_back(L[i]);
			break;
		}
		else if ((int)R.size() > 0)
		{
			for (int i = 0; i < (int)R.size(); i++)
				Result.push_back(R[i]);
			break;
		}
	}
	return Result;
}

std::vector<int> MergeSort::MergeSort_Imp(std::vector<int>& stack_result)
{
	if (stack_result.size() <= 1)
		return stack_result;

	std::vector<int>L, R, Result;
	int middle = ((int)stack_result.size() + 1) / 2;

	for (int i = 0; i < middle; i++)
		L.push_back(stack_result[i]);

	for (int i = middle; i < (int)stack_result.size(); i++)
		R.push_back(stack_result[i]);

	L = MergeSort_Imp(L);
	R = MergeSort_Imp(R);
	Result = merge_fun(L, R);

	return Result;
}

void MergeSort::MergeSort_No()
{
	std::vector<int> stack_result;
	std::cout << "Enter the Elements\nPress '.' to Insert the Numbers to sort\n";
	while ((std::cin >> input_one) && input_one != In)
	{
		stack_result.push_back(input_one);
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	stack_result =MergeSort_Imp(stack_result);

	std::cout << '\n';
	std::cout << "sorted Arrray:" << '\n';
	for (size_t i = 0; i < stack_result.size(); i++)
		std::cout << stack_result[i] << " ";
	std::cout << '\n' << std::endl;

}

void MergeSort::Mergesort_str()
{
	std::vector<std::string> stack_result;
	std::cout << "Enter the Elements\nPress '.' to Insert the Numbers to sort\n";
	while ((std::cin >> Name) && Name != FName)
	{
		stack_result.push_back(Name);
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	stack_result = str_Mergesort_Imp(stack_result);

	std::cout << '\n';
	std::cout << "sorted Arrray:" << '\n';
	for (size_t i = 0; i < stack_result.size(); i++)
		std::cout << stack_result[i] << " ";
	std::cout << '\n' << std::endl;
}