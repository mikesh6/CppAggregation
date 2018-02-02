#include "panier.h"

Panier::Panier(int capacite)
{
	
	capaciteContenu_ = capacite;
	contenuPanier_ =  new  Produit * [capaciteContenu_];
	totalAPayer_ = 0;
	nombreContenu_ = 0;


}

Produit ** Panier::obtenirContenuPanier() const
{
	return  contenuPanier_; 
	
}

int Panier::obtenirNombreContenu() const
{
	return nombreContenu_;
}

double Panier::obtenirTotalApayer() const
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
			contenuPanier_[i] = 0;
			 
		}

		contenuPanier_ = doublePanier;
		contenuPanier_[nombreContenu_] = prod;
		nombreContenu_++;
		totalAPayer_ += prod->obtenirPrix();

	}


	

	else {

		contenuPanier_[nombreContenu_] = prod;
		nombreContenu_++;
		totalAPayer_ += prod->obtenirPrix();
	}

	
}

void Panier::livrer()
{
	

	delete[] contenuPanier_;
	
	capaciteContenu_ = 0;
	nombreContenu_ = 0;
	totalAPayer_ = 0;

	


}

void Panier::afficher() const
{
	cout << "Nombre contenu " << nombreContenu_ << endl;
	cout << "Capacite " << capaciteContenu_ << endl;
	cout << "Total a payer " << totalAPayer_ << endl;
		

	for (int i = 0; i < nombreContenu_; i++)
	{

		contenuPanier_[i]->afficher();
		
	}

	

}
