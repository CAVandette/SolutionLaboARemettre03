// But : Écrire un programme qui demandra è l'utilisateur de deviner un nombre entre 1 et 100, On lui donne 5 chances.
// Auteur : Charles-Auguste Vandette
// Date : 2020-10-04

/*
2020-10-04 CAV Devinette V.0.1
2020-10-04 CAV Devinette V.0.2
2020-10-04 CAV Devinette V.0.3
2020-10-04 CAV Devinette V.0.4
*/

#include<iostream>			// Bibliothèque de communication
#include<time.h>			// ???

using namespace std;				// Pour éviter de répéter le std:: devant les instructions comme cout, cin, endl, ...


int main() // Bloc d'instruction principal
{
	setlocale(LC_ALL, "");	// Permet la bonne compréhension des caractères spéciaux

	// Déclaration des variables

	int iRandom;			// permet de mémoriser le nombre choisi aléatoirement par l’ordinateur
	srand(time(0));			// pour activer l’aléatoire dans le programme
	iRandom = rand() % 101; // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans iRandom
	int nombre;				// Est le nombre que l'utilisateur indiquera

	for (int compteur = 4; compteur >= 0; compteur--)	// Cette loop dit que le compteur commence a 4, il vas de 4 a 0 et descend de 1 a chaque itération.
	{
		cout << "Veuillez entrer un nombre entre 1 et 100" << endl;	// Demande à l'utilisateur d'entrer un nombre entre 1 et 100.

		cin >> nombre;	// L'utilisateur entre un nombre

		if (nombre == iRandom)	// Dit que si le nombre donné est = au chiffre aléatoire, le compteur est = a 0 (pour quitter la boucle) et que l'utilisateur à gagné.
		{
			compteur = 0;	// Pour sortir de la boucle (SUPER IMPORTANT)
			cout << "Vous avez gagné!";

		}
		else // sinon:
		{
			if (compteur > 0)	// Dit que si le compteur est toujours plus grand que 0, l'utilisateur peu continuer.
			{
				if (nombre > iRandom)	// Dit que si le nombre de l'utilisateur est plus grand que le nombtre aléatoire, alors on indique que le nombre 
										// recherché est plus petit que le dernier entrer par l'utilisateur.
				{

					cout << "Le nombre est inférrieur au votre." << endl;
					cout << "Il vous reste " << compteur << " essai." << endl;	// Indique le nombre d'essaie restant

				}
				else	// Sinon: on indique que le nombre est suppérieur que le dernier entrer par l'utilisateur.
				{
					cout << "Le nombre est suppérrieur au votre." << endl;
					cout << "Il vous reste " << compteur << " essai." << endl;	// Indique le nombre d'essaie restant
				}
			}
			else	// Sinon, l'utilisateur à perdu car il ne lui reste aucun essai.
			{
				cout << "Vous avez perdu, il ne vous reste aucun essai.";
			}




		}



	}




	return 0;
}

/*
Plan de tests
nombre a trouver				nombre donné par l'utilisateur				résultat
26								23											Le nombre est suppérrieur, il vous reste 4 essai
26								50											Le nombre est inférrieur, il vous reste 3 essai
26								44											Le nombre est inférrieur, il vous reste 2 essai
26								30											Le nombre est inférrieur, il vous reste 1 essai
26								25											Vous avez perdu, il ne vous reste auvun essai

55								54											Le nombre est suppérrieur, il vous reste 4 essai
55								56											Le nombre est inférrieur, il vous reste 3 essai
55								55											Vous avez gagné!



*/