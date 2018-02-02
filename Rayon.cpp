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

string Rayon::obtenirCategorie() const
{
	return categorie_;
}

Produit ** Rayon::obtenirTousProduits() const
{
	return tousProduits_;
}

int Rayon::obtenirCapaciteProduits() const
{
	return capaciteProduits_;
}

int Rayon::obtenirNombreProduits() const
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
		
		
		if (nombreProduits_ >= capaciteProduits_) {
		capaciteProduits_ = capaciteProduits_ *  2;
		tousProduits_[nombreProduits_] = produit;
		nombreProduits_++;
		}

		else {		
			tousProduits_[nombreProduits_] = produit;
			nombreProduits_++;
		}
	}

	else {

		if (nombreProduits_ >= capaciteProduits_) {
			capaciteProduits_ =  capaciteProduits_ * 2;
			tousProduits_[nombreProduits_] = produit;
			nombreProduits_++;

		}

		else {

			tousProduits_[nombreProduits_] = produit;
			nombreProduits_++;

		}

	}
}




void Rayon::afficher() const
{

	
	cout << "Categorie: " << obtenirCategorie() << endl;
	cout << "Capctie: " << obtenirCapaciteProduits() << endl;
	cout << "Nombre de produits: " << obtenirNombreProduits() << endl;

	cout << "-------" << endl;

	for (int i = 0; i < obtenirNombreProduits(); i++) {

		tousProduits_[i]->afficher();

	}


	

	

}
