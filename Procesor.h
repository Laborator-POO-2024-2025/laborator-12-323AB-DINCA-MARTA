#pragma once
#include "Silicon.h"
class Procesor : virtual public Silicon {
	float m_frecventa;
	int m_pret; // diferit fata de m_pret din Silicon, e pretul propriu clasei !!!!!!!!!
	//clasa are 4 atribute dintre care 2 sunt preturi D I F E R I T E
public:
	Procesor();
	Procesor(const float& m_frecventa, const int& m_pret, const int& pret_silicon, const char* m_numeSursa);
	Procesor(Procesor& other);
	Procesor& operator=(Procesor& other);
	float getFrecventa() const;
	int getPret() const override;
	void afisare() const;
	//Constructori (fara parametrii, cu parametrii si de copiere) + Destructor
	//Operator=
};

