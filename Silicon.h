#pragma once
#include <iostream>
#include <cstring>

class Silicon {
protected:	
	char* m_numeSursa;
	int pret;
public:
	Silicon();
	Silicon(const char* m_numeSursa, const int& m_pret);
	Silicon(Silicon& other);
	virtual ~Silicon();
	char* getSursa() const;
	virtual int getPret()const;

	// Destructorul trebuie sa fie virtual (nu virtual pur) !!
};