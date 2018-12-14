/*
 * Arme.h
 *
 *  Created on: 26 avr. 2018
 *      Author: 34011-55-04
 */

#ifndef DEF_ARME
#define DEF_ARME

#include <iostream>
#include <string>

class Arme {
public:
	Arme();
	Arme(std::string nom, int degats);
	Arme(Arme const& arme);
//	virtual ~Arme();
	void changer(std::string nom, int degats);
	void afficher() const;
	int getDegats() const;

private:

	std::string m_nom;
	int m_degats;

};



#endif /* ARME_H_ */
