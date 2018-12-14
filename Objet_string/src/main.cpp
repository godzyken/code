//============================================================================
// Name        : Objet_string.cpp
// Author      : Godzy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

#include "Personnage.h"

using namespace std;

int main() {

	Personnage perso1("Arnold","ceinture", 100, 100, 22);

	Personnage perso2("Willy");


	cout << "Arnold" << endl;
	perso1.afficherEtat();

	cout << endl << "Willy" << endl;
	perso2.afficherEtat();

	system("PAUSE");


	perso2.attaquer(perso1); // atak de willi  sur arnold
	cout << endl << "Willy fout un gros coups de mantchouk a Arnold" << endl;
	perso1.affPVie();

	system("PAUSE");

	perso1.boirePotionDeVie(20); // willi  se soigne
	cout << endl << "Arnold a mal, donc il prend un haricot magic !" << endl;
	perso1.affPVie();

	system("PAUSE");

	perso2.attaquer(perso1); // atak de willi  sur arnold
	cout << endl << "mais willy lui refout un model coups de bitin again ! arnold bouffe le plancher !" << endl;
	perso1.affPVie();

	system("PAUSE");

	perso1.attaquer(perso2); // contre atak de arnold  sur willy
	cout << endl << "Willy s'enjaille pendant qu'arnold passe derriere lui eeeet djouke !!" << endl;
	perso2.affPVie();

	system("PAUSE");

	perso2.changerArme("Marteau de thor", 40); // willy change d'arme
	cout << endl << "Willy s'est trouver une autre arme, seigneur mais quescecest ?" << endl;
	perso2.affArme();

	system("PAUSE");

	perso2.attaquer(perso1); // atak de willi  sur arnold
	cout << endl << "willy véner comme jamais macouille, il utilise sont nouveau joujou sur Arnold, et biMM!!" << endl;
	cout << endl << "fatality !! " << endl;
	perso2.afficherEtat();

	cout << endl << "YOU LOOSE !! " << endl;
	perso1.afficherEtat();


	system("PAUSE");

	return 0;
}
