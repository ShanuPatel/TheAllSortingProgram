#pragma once
#include <iostream>
#include<string>
//Temp Solution will Rearrange later Properly

class Tsol
{
private:
	void Welcome();
	bool SelectFrom();
	void swap(int* a, int* b);
	void SelectionSort_No();
	void SelectionSort_Str();
	std::string N_Tsol;
public:
	Tsol();
	void GetWelcome();
};


