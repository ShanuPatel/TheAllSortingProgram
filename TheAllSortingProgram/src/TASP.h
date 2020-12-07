#pragma once
#include <iostream>
#include<string>
#include <vector>


//Temp Solution will Rearrange later Properly
class Tsol
{
private:

	std::string N_Tsol;
	int n, i, j, min_indx;
	bool SelectFrom();
	void SelectionSort_No();
	void SelectionSort_Str();
	
public:

	Tsol();
	~Tsol();
	void SetName(std::string n_Tsol);
	std::string GetName();
	virtual void Welcome();
	void swap(int* a, int* b);
	void NormalSort();
};


