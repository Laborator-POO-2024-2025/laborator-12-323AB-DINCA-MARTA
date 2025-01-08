#include "Calculator.h"

Calculator::Calculator():Silicon(), PlacaVideo(), Procesor()
{
	m_brand = nullptr;
}

Calculator::Calculator(const char* m_brand, const char* m_numeSursa, const int& pret, const int& m_pret, const float& m_frecventa, const int& m1_pret, const float& m1_frecventa):Silicon(m_numeSursa, pret),Procesor(m_frecventa,pret,m_pret, m_numeSursa),PlacaVideo(m1_frecventa,m1_pret, pret, m_numeSursa)
{
	this->m_brand = new char[strlen(m_brand) + 1];
	strcpy(this->m_brand, m_brand);
}

Calculator::Calculator(Calculator& other): Procesor(other), PlacaVideo(other)
{
	this->m_brand = new char[strlen(other.m_brand) + 1];
	strcpy(this->m_brand, other.m_brand);
}

Calculator& Calculator::operator=(Calculator& other)
{
	Procesor::operator=(other);
	PlacaVideo::operator=(other);
	m_numeSursa = new char[strlen(other.m_numeSursa) + 1];
	strcpy(this->m_numeSursa, other.m_numeSursa);
	return *this;
}
Calculator::~Calculator() {
	delete[] m_brand;
}
int Calculator::getPret() const {
	return Silicon::getPret() + Procesor::getPret() + PlacaVideo::getPret();
}
void Calculator::afisare() const {
	std::cout << "Brand: " << (m_brand ? m_brand : "Unknown") << std::endl;
	std::cout << "Sursa Silicon: " << Silicon::getSursa() << std::endl;
	std::cout << "Pret total: " << Calculator::getPret() << std::endl;
	std::cout << "Detalii Procesor: " << std::endl;
	std::cout << "  Frecventa: " << Procesor::getFrecventa() << " GHz" << std::endl;
	std::cout << "  Pret: " << Procesor::getPret() << std::endl;
	std::cout << "Detalii Placa Video: " << std::endl;
	std::cout << "  Frecventa: " << PlacaVideo::getFrecventa() << " GHz" << std::endl;
	std::cout << "  Pret: " << PlacaVideo::getPret() << std::endl;
}