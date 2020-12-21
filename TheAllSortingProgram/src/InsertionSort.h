#pragma once
#include "TASP.h"

class Insertionsort :public Tsol
{
private:
	size_t i;
	int j, input;
	std::vector<int> In_Nosort;
	std::vector<std::string>In_Strsort;
	std::string Name;
	std::string FName;
	const char In;

	template<typename T>
	void InsertionSort_Impl(std::vector<T>& Element);
	void Insertionsort_No();
	void Insertionssort_str();
	bool Select_Insertion();

public:

	Insertionsort() :i(0), j(0), input(0), Name("\n               Welcome to the Insertion sort\n"), In('.'), FName(".") {}
	~Insertionsort() {}

	void Welcome()override;

};
