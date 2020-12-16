#pragma once
#include "TASP.h"

class MergeSort : public Tsol
{
private:
	const char In;
	int input_one;
	std::string Name;
	std::string FName;
	// string Input
	void Mergesort_str();
	std::vector<std::string> str_Mergesort_Imp(std::vector<std::string>& stack_result);
	std::vector<std::string> str_Merge_fun(std::vector<std::string>& L, std::vector<std::string>& R);
	// Number input
	void MergeSort_No();
	std::vector<int> MergeSort_Imp(std::vector<int>& stack_result);
	std::vector<int> merge_fun(std::vector<int>& L, std::vector<int>& R);

	bool select_Merge();
public:
	MergeSort() :In('.'), input_one(0), Name("Welcome to the Mergesort"),FName(".") {}
	~MergeSort();
	void Welcome();

};