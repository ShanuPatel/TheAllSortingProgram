#pragma once
#include "TASP.h"

class Heapsort :public Tsol
{
	const char In;
	int input;
	std::string Name;
	std::string FName;

	void Heapify(std::vector<int>& arr_no, int n, int i);
	void Heapsort_Impl(std::vector<int>& arr_no, int n);
	void Heapsort_No();

	bool Select_Heap();

public:
	Heapsort():In('.'),input(0),Name("Wlcome to the Heapsort"),FName("."){}
	~Heapsort();
	void Welcome()override;
};
