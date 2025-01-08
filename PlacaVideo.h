#pragma once
#include "Silicon.h"
class PlacaVideo : virtual public Silicon {
	float m_frecventa;
	int m_pret; // diferit fata de m_pret din Silicon, e pretul propriu clasei !!!!!!!!!
	// si aceasta clasa are 4 atribute dintre care 2 sunt preturi D I F E R I T E
public:
	PlacaVideo();
	PlacaVideo(const float& m_frecventa, const int& m_pret, const int& pret_silicon, const char* m_numeSursa);
	PlacaVideo(PlacaVideo& other);
	PlacaVideo& operator=(PlacaVideo& other);
	float getFrecventa() const;
	int getPret() const override;
	void afisare() const;
	//ca mai sus
};