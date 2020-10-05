// But : D�veloppez un programme qui entre les ventes brutes hebdomadaires de chaque repr�sentant et qui calcule et
//affiche son salaire.Entrez - 1 � la valeur des ventes pour quitter le programme.
// Auteur : Charles-Auguste Vandette
// Date : 2020-10-04

/*
2020-10-04 CAV SalairesDesRepr�sentants V.0.1
*/

#include<iostream>			// Biblioth�que de communication

using namespace std;				// Pour �viter de r�p�ter le std:: devant les instructions comme cout, cin, endl, ...


int main() // Bloc d'instruction principal
{
	setlocale(LC_ALL, "");	// Permet la bonne compr�hension des caract�res sp�ciaux

	// D�claration des variables
	const int SALAIRE = 250;	// Est le salaire par d�finition
	float vente;				// Est le nombre que l'utilisateur entre
	float taux = 7.5;			// Est le taux du bonus addition� sur le salaire
	float total;				// Est le total du salaire
	const int STOP = -1;		// Est la cl� pour fermer le programme

	cout << "Pour quitter le programme, veuillez entrer -1." << endl;	// Indique � l'utilisateur qu'il peut entrer -1 pour fermer le programme

	cout << "Veuillez entrer le montant total de la vente : ";			// Indique � l'utilisateur d'entrer le montant total des ventes de la semaine

	cin >> vente;			// L'utilisateur entre le montant total des ventes de la semaine

	while (vente != STOP)	// Dit que si vente n'est PAS �gale a -1, on entre dans la loop
	{

		total = ((vente * taux) / 100) + SALAIRE;	// Le calcule suivant dit que le total du salaire est = a la vente fois le taux divis� par 100 plus le salaire

		if (vente <= -2)	// Dit que si la vente est <= a -2, on indique une erreur, si c'est -1 on uqitte le programme, si c'est 0 il n'y aura que le salaire de 250$
		{
			cout << "Erreur, veuillez entrer un nombre positif ou -1 pour quitter" << endl;
			cin >> vente;



		}
		else	// Sinon, on calcule le total et l'indique.
		{
			cout << "Votre total pour la semaine est de : " << total << "$" << endl;

			cout << "Veuillez entrer le montant total de la vente : ";

			cin >> vente;
		}


	}






	return 0;
}

/*
plan de tests

repr�sentant				salaire/semaine				vente				taux 7.5%				total
1							250$						5000$				375$					625$
2							250$						9000$				675$					925$
3							250$						2243.75$			168.28$					418.28$
4							250$						-9000$				non calcul�				Erreur, veuillez entrer un nombre valide
5							250$						-500$				non calcul�				Erreur, veuillez entrer un nombre valide
6							250$						800$				60						310$
7							250$						0					0						250$
8							-							-1					-						Quitte le programme.


*/