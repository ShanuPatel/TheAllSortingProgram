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

	template<typename T>
	int Particition(std::vector<T>& a, int start, int end);
	template<typename T>
	void Quicksort_Impl(std::vector<T>& a, int start, int end);

	void Quicksort_No();
	void Quicksort_str();

	bool Select_Quick();
public:
	Quicksort() :In('.'), input(0),Name("\n                    Welcome to the Quicksort\n"),FName(".") {}
	~Quicksort();

	void Welcome()override;

};