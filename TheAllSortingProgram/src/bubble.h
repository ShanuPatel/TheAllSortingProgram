#pragma once

#include "TASP.h"

class Bubblesort : public Tsol
{
private:

	size_t i, j;
	bool bIsSwapped;
	std::vector<int> b_Nosort = { 25, 11, 199, 99, 69 };
	std::vector<std::string> b_strsort = { "Bang bang","street fighter","Alladin","Fanah","Rambo" };

	bool select_bubble();
	void bubblesort_No();
	void bubblesort_str();

public:
	Bubblesort();
	~Bubblesort();
	void Welcome()override;
};