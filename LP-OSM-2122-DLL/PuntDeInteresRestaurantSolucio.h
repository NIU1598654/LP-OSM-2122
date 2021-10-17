#pragma once

#include "PuntDeInteresBase.h"

class PuntDeInteresRestaurantSolucio : public PuntDeInteresBase
{

private:
	string m_tipoCocina, m_nombre;
	bool m_accesoSilla;		//Si -> 1, No -> 0


public:
	PuntDeInteresRestaurantSolucio() { m_tipoCocina = "", m_accesoSilla = false; }
	~PuntDeInteresRestaurantSolucio() {}



	unsigned int getColor()
	{
		if (m_tipoCocina == "pizza" && m_accesoSilla)		
			return 0x03FCBA;
		else if (m_tipoCocina == "chinese")
			return 0xA6D9F7;
		else if (m_accesoSilla)
			return 0x251351;
		else
			return 0xFFA500;	//Ponemos este color, sacado de PuntDeInteresBase->getColor().
	}
};