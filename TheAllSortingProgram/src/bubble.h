#pragma once

#include "TASP.h"

class Bubblesort : public Tsol
{
private:

	int i, j, n;
	bool bIsSwapped;
	int b_sort[5] = { 25, 11, 199, 99, 69 };
	//std::vector < int >b_sort;

public:
	Bubblesort();
	~Bubblesort();
	void bubblesort_No();
	void Welcome()override;
};