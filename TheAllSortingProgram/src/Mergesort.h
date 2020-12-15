#pragma once
#include "TASP.h"

class MergeSort : public Tsol
{
private:
	const char In;
	int input_one;
	std::string Name;
	std::vector<int> stack_result;
	void MergeSort_No();
	std::vector<int> MergeSort_Imp(std::vector<int>& stack_result);
	std::vector<int> merge_fun(std::vector<int>& left, std::vector<int>& right);

public:
	MergeSort() :In('.'), input_one(0), Name("Welcome to the Mergesort") {}
	~MergeSort();
	void Welcome();
};