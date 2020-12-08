#pragma once
#include "TASP.h"

class Selectionsort : public Tsol
{
	std::string N_Tsol;
	int min_indx;
	size_t i, j; 
	std::vector<int>array = { 55, 44, 35, 25, 11, 199, 99 };
	std::vector<std::string> s_array = { "Baba","Sunil","Ali","Farah","Ranveer" };

public:

	void SelectionSort_No();
	void SelectionSort_Str();
};