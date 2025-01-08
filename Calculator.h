#pragma once
#include "Procesor.h"
#include "PlacaVideo.h"
class Calculator : public Procesor, public PlacaVideo {
	char* m_brand;
	// pretul unui obiect de acest tip va fi:
	// pret total = pret silicon + pret procesor + pret placa video
	// adica m_pret DIN FIECARE CLASA PARINTE A ACESTEI CLASE
public:
	//ca mai sus, aveti grija ca trebuie apelat direct constructorul clasei de baza “A”,
	Calculator();
	Calculator(const char* m_brand, const char* m_numeSursa, const int& pret, const int& m_pret, const float& m_frecventa, const int& m1_pret, const float& m1_frecventa);
	Calculator(Calculator& other);
	Calculator& operator=(Calculator& other);
	~Calculator();
	int getPret() const override;

	void afisare() const;

};