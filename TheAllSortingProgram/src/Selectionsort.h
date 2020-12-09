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
	void SelectionSort_No();
	void SelectionSort_Str();
	bool Select_Selection();

public:

	Selectionsort()
		:In('.'), FName("."), input(0), Name("Welcome to Selection Sort\n\n"), min_indx(0), i(0), j(0) {}
	~Selectionsort();
	void Welcome()override;
};