#pragma once
#include "TASP.h"

class Selectionsort : public Tsol
{
	int min_indx;
	size_t i, j;
	std::vector<int>array = { 55, 44, 35, 25, 11, 199, 99 };
	std::vector<std::string> s_array = { "Baba","Sunil","Ali","Farah","Ranveer" };
	void SelectionSort_No();
	void SelectionSort_Str();

public:
	void Welcome()override;
	bool Select_Selection();


};