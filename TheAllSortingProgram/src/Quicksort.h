#pragma once
#include "TASP.h"

class Quicksort : public Tsol
{
private:
	const char In;
	int input;
	std::string Name;
	std::string FName;
	// NUmber sort
	int Particition(std::vector<int>& a, int start, int end);
	void Quicksort_Impl(std::vector<int>& a, int start, int end);
	void Quicksort_No();

	//string Quick sort Implmentation
	int Particition_str(std::vector<std::string>& a, int start, int end);
	void Quicksort_str_Impl(std::vector<std::string>& a, int start, int end);
	void Quicksort_str();

	bool Select_Quick();
public:
	Quicksort() :In('.'), input(0),Name("Welcome to the Quicksort"),FName(".") {}
	~Quicksort();

	void Welcome()override;

};