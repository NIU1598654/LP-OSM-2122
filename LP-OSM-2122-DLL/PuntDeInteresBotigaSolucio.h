#pragma once
#include "PuntDeInteresBase.h"

class PuntDeInteresBotigaSolucio : public PuntDeInteresBase
{

private:
	string m_nombre;

public:
	PuntDeInteresBotigaSolucio() { m_nombre = ""; };
	~PuntDeInteresBotigaSolucio() {};

	string getName() { return m_nombre; }

	unsigned int getColor()
	{
		if (m_nombre == "supermarket")		//No usamos un swtch case porque no acepta un argumento de tipo string, solo de tipo numerico o char.
			return 0xA5BE00;
		else if (m_nombre == "tobacco")
			return 0XFFAD69;
		else if (m_nombre == "bakery")
			return 0XE85D75;
		else
			return 0xEFD6AC;
	}


};