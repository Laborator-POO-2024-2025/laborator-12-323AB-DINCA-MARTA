#include "Silicon.h"

Silicon::Silicon()
{
	pret = 0;
	m_numeSursa = nullptr;
}

Silicon::Silicon(const char* m_numeSursa, const int& m_pret)
{
	this->pret = m_pret;
	this->m_numeSursa= new char[strlen(m_numeSursa) + 1];
	strcpy(this->m_numeSursa, m_numeSursa);
}

Silicon::Silicon(Silicon& other)
{
	this->pret = other.pret;
	if (other.m_numeSursa != nullptr) {
		m_numeSursa = new char[strlen(other.m_numeSursa) + 1];
		strcpy(this->m_numeSursa, other.m_numeSursa);
	}
}

Silicon::~Silicon()
{
	delete[] m_numeSursa;
}

char* Silicon::getSursa() const
{
	return m_numeSursa;
}

int Silicon::getPret() const
{
	return pret;
}
