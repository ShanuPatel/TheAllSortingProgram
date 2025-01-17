#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

//Temp Solution will Rearrange later Properly
enum class ESelction_Screen : unsigned char
{
	ENormal_sort,
	ESelection_sort,
	EBubble_sort,
	EInsertion_sort,
	EMerge_sort,
	EQuick_sort,
	EHeap_sort
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

	Tsol():i(0), In('.'), input(0), N_Tsol("                                      Welcome To The All Sorting Program\n") {}
	~Tsol();
	void SetName(std::string& n_Tsol);
	std::string GetName();

	virtual void Welcome();

	template<typename T>
	void swap_Impl(T& a, T& b);

};

namespace UTsol{void MainSortingCall();}

template<typename T>
inline void Tsol::swap_Impl(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}