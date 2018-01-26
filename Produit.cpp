#include "Produit.h"

Produit::Produit()
{
	nom_ = "outil";
	reference_ = 0;
	prix_ = 0;

	
}

Produit::Produit(string nom, int reference, double prix)
{
	nom_ = nom;
	reference_ = reference;
	prix_ = prix;

}

string Produit::obtenirNom()
{
	return nom_;
}

int Produit::obtenirReference()
{
	return reference_;
}

double Produit::obtenirPrix()
{
	return prix_;
}

void Produit::modifierNom(string nom)
{
	nom_ = nom;
}

void Produit::modifierReference(int reference)
{
	reference_ = reference;
}

void Produit::modifierPrix(double prix)
{
	prix_ = prix;
}

void Produit::afficher()
{
	cout << nom_ << endl;
	cout << reference_ << endl;
	cout << prix_ << endl;

}


