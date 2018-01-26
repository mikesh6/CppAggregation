#include "Rayon.h"
#include<iostream>
using namespace std;

Rayon::Rayon()
{
	categorie_ = "unknown";
	tousProduits_ = nullptr;
	capaciteProduits_ = 0;
	nombreProduits_ = 0;

}

Rayon::Rayon(string cat)
{
	categorie_ = cat;
	tousProduits_ = nullptr;
	capaciteProduits_ = 0;
	nombreProduits_ = 0;
}

string Rayon::obtenirCategorie()
{
	return categorie_;
}

Produit ** Rayon::obtenirTousProduits()
{
	return tousProduits_;
}

int Rayon::obtenirCapaciteProduits()
{
	return capaciteProduits_;
}

int Rayon::obtenirNombreProduits()
{
	return nombreProduits_;
}

void Rayon::modifierCategorie(string cat)
{
	categorie_ = cat;
}

void Rayon::ajouterProduit(Produit * produit)
{

	if (tousProduits_ == nullptr)
	{
		capaciteProduits_ = 5;
		tousProduits_ = new  Produit *[capaciteProduits_];

		
		if (nombreProduits_ >= 5) {
		capaciteProduits_ *= 2;		
		tousProduits_[nombreProduits_] = produit;
		}

		else {

		
			tousProduits_[nombreProduits_] = produit;
		}
	}

	else {

		if (nombreProduits_ >= 5) {
			capaciteProduits_ *= 2;
			tousProduits_[nombreProduits_] = produit;

		}

		else {

			tousProduits_[nombreProduits_] = produit;

		}

	}
}

void Rayon::afficher()
{


	cout << categorie_ << endl;
	cout << capaciteProduits_ << endl;
	cout << nombreProduits_ << endl;
	

	
	for (int i = 0; i< nombreProduits_; i++)
	{
		
		tousProduits_[i]->afficher();	   
		
    }


}
