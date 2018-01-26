#include "panier.h"

Panier::Panier(int capacite)
{
	
	capaciteContenu_ = capacite;
	contenuPanier_ =  new  Produit * [capaciteContenu_];
	totalAPayer_ = 0;
	nombreContenu_ = 0;


}

Produit ** Panier::obtenirContenuPanier()
{
	return  contenuPanier_; 
	
}

int Panier::obtenirNombreContenu()
{
	return nombreContenu_;
}

double Panier::obtenirTotalApayer()
{
	return totalAPayer_;
}

void Panier::ajouter(Produit * prod)
{
	
	Produit **doublePanier;	
	if (nombreContenu_ >= capaciteContenu_) {
		capaciteContenu_ *= 2;		
		doublePanier = new Produit* [capaciteContenu_];

		for (int i = 0; i < capaciteContenu_; i++) {			
			doublePanier[i] = nullptr;

		}

		for (int i = 0; i < nombreContenu_; i++) {
			doublePanier[i] = contenuPanier_[i];
			delete contenuPanier_[i];
			 
		}

		contenuPanier_ = doublePanier;
		

	}

	

	else {

		contenuPanier_[nombreContenu_] = prod;
	}
	contenuPanier_[nombreContenu_] = prod;
}

void Panier::livrer()
{
	delete  * contenuPanier_;
	Panier(0);
}

void Panier::afficher()
{
	cout << nombreContenu_;
	cout << capaciteContenu_;
	cout << totalAPayer_; 

	for (int i = 0; i < nombreContenu_; i++)
	{

		contenuPanier_[i]->afficher();
		
	}


}
