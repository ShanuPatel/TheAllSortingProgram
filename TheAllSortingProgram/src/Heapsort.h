#pragma once
#include "TASP.h"

class Heapsort :public Tsol
{
	const char In;
	int input;
	std::string Name;
	std::string FName;

	template<typename T>
	void Heapify(std::vector<T>& arr_no, int n, int i);
	template<typename T>
	void Heapsort_Impl(std::vector<T>& arr_no, int n);
	bool Select_Heap();

	void Heapsort_No();
	void Heapsort_str();

public:
	Heapsort():In('.'),input(0),Name("\n                    Welcome to the Heapsort\n"),FName("."){}
	~Heapsort();

	void Welcome()override;
};
