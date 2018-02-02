#include "client.h"

Client::Client(string nom, string prenom, int identifiant, string codePostal, long date):monPanier_ (nullptr)
{
	nom_ = nom;
	prenom_ = prenom;
	identifiant_ = identifiant;
	codePostal_ = codePostal;
	dateNaissance_ = date;
	
	
}

Client::~Client()
{
	delete[] monPanier_;
	cout << "Destructor" << endl;

}

string Client::obtenirNom() const
{
	return nom_;
}

string Client::obtenirPrenom() const
{
	return prenom_;
}

int Client::obtenirIdentifiant() const
{
	return identifiant_;
}

string Client::obtenirCodePostal() const
{
	return codePostal_;
}

long Client::obtenirDateNaissance() const
{
	return dateNaissance_;
}

void Client::modifierNom(string nom)
{
	nom_ =  nom;
}

void Client::modifierPrenom(string prenom)
{
	prenom_ = prenom;
}

void Client::modifierIdentifiant(int identifiant)
{
	identifiant_ = identifiant;
}

void Client::modifierCodePostal(string codePostal)
{
	codePostal_ = codePostal;
}

void Client::modifierDateNaissance(long date)
{

	dateNaissance_ = date;

}

void Client::acheter(Produit * prod)
{
	if (monPanier_ == nullptr) { 

		monPanier_ = new Panier(4);
		cout << "A panier object has been created with capacties of 4" << endl;
		monPanier_->ajouter(prod); 

	}

	else {		
		
		monPanier_->ajouter(prod);

	}
}

void Client::afficherPanier()
{
	 monPanier_->afficher();
}

void Client::livrerPanier()
{

	monPanier_->livrer();
	
}
