#pragma once

#include "PuntDeInteresBase.h"

class PuntDeInteresBotigaSolucio : public PuntDeInteresBase
{
public:
	PuntDeInteresBotigaSolucio() {}
	~PuntDeInteresBotigaSolucio() {}

	string getName() { return m_nombre; }
private:
	string m_shop, m_nombre;

};