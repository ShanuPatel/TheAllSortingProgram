#pragma once
#include "TASP.h"

class Selectionsort : public Tsol
{
	const char In;
	const std::string FName;
	int input;
	std::string Name;
	int min_indx;
	size_t i, j;
	std::vector<int>array;
	std::vector<std::string> s_array;

	template<typename T>
	void SelectionSort_Impl(std::vector<T>& Element);
	bool Select_Selection();

	void SelectionSort_No();
	void SelectionSort_Str();

public:

	Selectionsort():In('.'), FName("."), input(0), Name("\n                    Welcome to Selection Sort\n"), min_indx(0), i(0), j(0) {}
	~Selectionsort();
	void Welcome()override;
};