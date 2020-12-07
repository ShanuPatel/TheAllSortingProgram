#pragma once
#include "TASP.h"

class Bubblesort : public Tsol
{
private:
	std::string m_Name;
public:
	Bubblesort();
	~Bubblesort();
	void bubblesort_No();
	void Welcome()override;
};