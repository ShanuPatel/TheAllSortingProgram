#pragma once
#include "TASP.h"

class Quicksort : public Tsol
{
private:
	const char In;
	int input;

	int Particition(std::vector<int>& a, int start, int end);
	void Quicksort_Impl(std::vector<int>& a, int start, int end);

public:
	void Quicksort_No();
	Quicksort() :In('.'), input(0) {}
	~Quicksort();
};