#pragma once
#include <iostream>
#include <string>
#include <vector>


//Temp Solution will Rearrange later Properly
enum class ESelction_Screen : unsigned char
{
	ENormal_sort,
	ESelection_sort,
	EBubble_sort
};


class Tsol
{
private:

	std::string N_Tsol;
	//std::vector<int> v{ 1, 5, 8, 9, 6, 7, 3, 4, 2 };
	ESelction_Screen SelectScreen;
	void NormalSort();
	bool SelectFrom();

public:

	Tsol();
	~Tsol();
	void SetName(std::string n_Tsol);
	std::string GetName();
	virtual void Welcome();
	void swap_no(int* a, int* b);

};

void MainSortingCall();

