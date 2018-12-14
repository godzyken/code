//============================================================================
// Name        : Mystere.cpp
// Author      : godzy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream> // pour le cout
#include <string> // pour les striiiinnng
#include <ctime> // pour le ramdom 'srand()'
#include <cstdlib>
#include <fstream> // pour l'ouverture du fichier
#include <cctype> // pour tolower et toupper MAJUSCULE et minuscule
#include <algorithm> //pour transformer


using namespace std;

string motMystere() { //  fonction qui lit le fichier et recupere un mot


	string mon_dico = "../diCo/dico.txt"; // pointer l'emplacement du fichier a ouvrir

	srand(time(0));
	ifstream dico(mon_dico.c_str(), ios::in); // Ouvrir le fichier en mode lecture

	if (!dico) {
		cerr << mon_dico.c_str() << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
		return 0;
	} else {
		string mot; // le mot mystère
		int nbLigne(0); // Pour compter le nombre de ligne/mot dans notre fichier
		while (getline(dico, mot)) {
			nbLigne++; // Incrémenter lors de lire une ligne/mot

		}

		nbLigne = rand() % nbLigne; // Choisir le nombre de ligne dont on va piocher le mot
		nbLigne++; // car le nb choisie est entre 0 et (nbLigne-1)

		dico.clear(); // vide le buffeur

		dico.seekg(0, ios::beg); // renvoyer le curseur au début du ficher

		for (int i(0); i < nbLigne; i++) {
			getline(dico, mot); // Sauvgarder le mot mystère dans la variable mot

		}

		dico.close(); // fermeture de fichier
		return (mot);
	}
}

string melanger(string mot) { // fonction melanger le mot

	string melange; // capture de la chaine
	int position(0); // on part de la premiere position mot(lettre 1)

	while (mot.size() != 0) { // tant que la longueur du mot et different de 0 on boucle

		position = rand() % mot.size(); // on repositionne au hazard la lettre en respctant la taille du mot

		melange += mot[position]; // on continue jusqu'a la derniere position

		mot.erase(position, 1); // on efface l'ancienne position memoriser Et Voila !!
	}

	return melange;
}

int main() {
	string mot, motMelange, rep, rejouer;
	int coups(5); // determiner un nombre de tour par un comteur 'coups'

	srand(time(0));

	coups--; // initialiser le compteur en décrementation

	cout << "!!!Trouver le mot mystere!!!" << endl; // affichier titre

	mot = motMystere(); // appelez le mot myster dans une vaiable

	rejouer == "oui";


		do {


			motMelange = melanger(mot); // melanger le mot Mystère et l'enregistrer dans la variable motMelange




			cout << endl << "Quel est ce mot ? " << motMelange << endl; // afficher le mot melangé

			cin >> rep; // saisir un mot dans la variable 'rep'

			if (rep != mot) { // condition si la reponse est differente du mot

				cout << "ce n'est pas la bonne reponse !!" << endl;

				cout << "il ne vous reste plus que" << ", " << coups-- << " " << "essaie !!" << endl; // affiche les 'coups' restant
			} else {
				cout << "bravo ! " << "le mot été :" << endl << mot << endl;
			}
			if (coups == -1 || rep == mot) { // condition si le nombre de tour est a 0

				cout << endl << "Game over !!" << endl << "le mot Mystere est : " << mot << endl; // affiche le mot Mystère

				cout << endl << "Rejouer ?! Oui/Non " << endl;
				cin >> rejouer;
				break;
			}else{
				rejouer ="non";
			}

		} while ((rep != mot && coups != -1) || rejouer == "oui"); // on boucle tant que la reponse est fausse et que la limite de tour n'est pas atteinte

	return 0;

}

