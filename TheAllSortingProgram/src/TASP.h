#pragma once
#include <iostream>
#include <string>
#include <vector>


//Temp Solution will Rearrange later Properly
enum class ESelction_Screen : unsigned char
{
	ENormal_sort,
	ESelection_sort,
	EBubble_sort,
	EInsertion_sort,
	EMerge_sort,
	EQuick_sort
};


class Tsol
{
private:
	size_t i;
	const char In;
	int input;
	std::vector<int> V;
	std::string N_Tsol;
	void NormalSort();
	bool SelectFrom();

public:

	Tsol()
		:i(0), In('.'), input(0), N_Tsol("Welcome To The All Sorting Program\n") {}
	~Tsol();
	void SetName(std::string& n_Tsol);
	std::string GetName();
	virtual void Welcome();
	void swap_no(int* a, int* b);

};

void MainSortingCall();