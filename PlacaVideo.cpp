#include "PlacaVideo.h"

PlacaVideo::PlacaVideo() :Silicon()
{
	m_frecventa = 0.0f;
	m_pret = 0;
}

PlacaVideo::PlacaVideo(const float& m_frecventa, const int& m_pret, const int& pret_silicon, const char* m_numeSursa) : Silicon(m_numeSursa, pret_silicon)
{
	this->m_frecventa = m_frecventa;
	this->m_pret = m_pret;

}

PlacaVideo::PlacaVideo(PlacaVideo& other) :Silicon(other)
{
	m_frecventa = other.m_frecventa;
	m_pret = other.m_pret;
}

PlacaVideo& PlacaVideo::operator=(PlacaVideo& other)
{
	this->m_frecventa = other.m_frecventa;
	this->m_pret = other.m_pret;
	Silicon::operator=(other);
	return *this;

}

float PlacaVideo::getFrecventa() const
{
	return m_frecventa;
}

int PlacaVideo::getPret() const
{
	return m_pret;
}
void PlacaVideo::afisare() const {
	std::cout << "Placa video Detalii:" << std::endl;
	std::cout << "  Frecventa: " << m_frecventa << " GHz" << std::endl;
	std::cout << "  Pret: " << m_pret << std::endl;
	std::cout << "  Sursa Silicon: " << Silicon::getSursa() << std::endl;
	std::cout << "  Pret Silicon: " << Silicon::getPret() << std::endl;
}
