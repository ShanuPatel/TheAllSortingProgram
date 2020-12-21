#pragma once
#include "TASP.h"

class MergeSort : public Tsol
{
private:
	const char In;
	int input_one;
	std::string Name;
	std::string FName;

	template<typename T>
	std::vector<T> MergeSort_Impl(std::vector<T>& stack_result);
	template<typename T>
	std::vector<T> merge_fun(std::vector<T>& L, std::vector<T>& R);
	bool select_Merge();

	void MergeSort_No();
	void Mergesort_str();

	public:
	MergeSort() :In('.'), input_one(0), Name("\n                    Welcome to the Mergesort\n"),FName(".") {}
	~MergeSort();
	void Welcome();

};