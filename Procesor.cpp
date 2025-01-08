#include "Procesor.h"

Procesor::Procesor():Silicon()
{
	m_frecventa = 0.0f;
	m_pret = 0;
}

Procesor::Procesor(const float& m_frecventa, const int& m_pret, const int& pret_silicon, const char* m_numeSursa): Silicon(m_numeSursa,pret_silicon )
{
	this->m_frecventa = m_frecventa;
	this->m_pret = m_pret;

}

Procesor::Procesor(Procesor& other) :Silicon(other)
{
	m_frecventa = other.m_frecventa;
	m_pret = other.m_pret;
		}

Procesor& Procesor::operator=(Procesor& other)
{
	this->m_frecventa = other.m_frecventa;
	this->m_pret = other.m_pret;
	Silicon::operator=(other);
	return *this;

}

float Procesor::getFrecventa() const
{
	return m_frecventa;
}

int Procesor::getPret() const
{
	return m_pret;
}
void Procesor::afisare() const {
	std::cout << "Procesor Detalii:" << std::endl;
	std::cout << "  Frecventa: " << m_frecventa << " GHz" << std::endl;
	std::cout << "  Pret: " << m_pret << std::endl;
	std::cout << "  Sursa Silicon: " << Silicon::getSursa() << std::endl;
	std::cout << "  Pret Silicon: " << Silicon::getPret() << std::endl;
}
