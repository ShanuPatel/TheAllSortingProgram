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

	void Heapify_str(std::vector<std::string>& arr_no, int n, int i);
	void Heapsort_str_Impl(std::vector<std::string>& arr_no, int n);
	void Heapsort_str();

	bool Select_Heap();

public:
	Heapsort():In('.'),input(0),Name("\nWelcome to the Heapsort"),FName("."){}
	~Heapsort();
	void Welcome()override;
};
