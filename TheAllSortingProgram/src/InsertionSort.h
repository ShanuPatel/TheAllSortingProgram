#pragma once
#include "TASP.h"

class Insertionsort :public Tsol
{
private:
	size_t i;
	int temp, j, input;
	std::string S_temp;
	std::vector<int> In_Nosort;
	std::vector<std::string>In_Strsort;
	std::string Name;
	std::string FName;
	const char In;
	void Insertionsort_No();
	void Insertionssort_str();
	bool Select_Insertion();

public:

	Insertionsort() :i(0), j(0), temp(0), input(0), Name("Welcome to the Insertion sort"), In('.'), FName(".") {}
	~Insertionsort() {}
	void Welcome()override;

};