#pragma once

#include "TASP.h"

class Bubblesort : public Tsol
{
private:
	const char In;
	const std::string FName;
	int input;
	std::string Name;
	size_t i, j;
	bool bIsSwapped;
	std::vector<int> b_Nosort;
	std::vector<std::string> b_strsort;

	bool select_bubble();
	void bubblesort_No();
	void bubblesort_str();

public:

	Bubblesort()
		:In('.'), FName("."), input(0), Name("Welcome to Bubble Sort\n\n"), i(0), j(0), bIsSwapped(false) {}
	~Bubblesort();
	void Welcome()override;
};