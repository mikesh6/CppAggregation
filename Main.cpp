/**************************************************
* Titre: Travail pratique #1 - Main.cpp
* Date: 20 janvier 2018
* Auteur: Mohammed Esseddik BENYAHIA



**************************************************/

#include "Produit.h"
#include "Rayon.h"
#include "client.h"
#include "panier.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	//C'est à vous de voir si vous devez allouer dynamiquement ou non les élèments

	//1-  Creez 15 objets du classe produit



	Produit *p1 = new Produit("Fridge", 101, 12.0);
	Produit *p2 = new Produit("Oven", 102, 32.22);
	Produit *p3 = new Produit("Dryer", 103, 63.22);
	Produit *p4 = new Produit("Washer", 104, 12.0);
	Produit *p5 = new Produit("TV", 105, 120.0);
	Produit *p6 = new Produit("ROBOT", 106, 12.0);
	Produit *p7 = new Produit("ear phone", 107, 12.0);
	Produit *p8 = new Produit("ear phone", 108, 112.0);
	Produit *p9 = new Produit("ear phone", 109, 123.0);
	Produit *p10 = new Produit("ear phone", 110, 11.0);
	Produit *p11 = new Produit("ear phone", 111, 12.0);
	Produit *p12 = new Produit("ear phone", 112, 1.0);
	Produit *p13 = new Produit("ear phone", 113, 12.0);
	Produit *p14 = new Produit("ear phone", 114, 2.0);
	Produit *p15 = new Produit("ear phone", 115, 8.20);

	
		

	
	
	//2-  Modifiez le nom, la référence, le prix de  troisieme objet Produit créé
    //   afficher les attributs de cet objet Produit
 
	p3->modifierNom("Samsung Battery");
	p3->modifierPrix(2200.12);
	p3->modifierReference(116);
	

	
	//3-  Creez un objet du classe rayon à l'aide du constructeur par défaut


	Rayon *rayon1 = new Rayon();

   //4-  Modifiez la catégorie  du rayon
	
	rayon1->modifierCategorie("Electronics");	
	
    // 5- Ajouter 6 produits de  voret chaoix dans le rayon créé
	
	rayon1->ajouterProduit(p1);	
	rayon1->ajouterProduit(p2);
	rayon1->ajouterProduit(p3);
	rayon1->ajouterProduit(p4);
	rayon1->ajouterProduit(p5);
	rayon1->ajouterProduit(p6);
	

	
    // 6- afficher le contenu du rayon


	rayon1->afficher();
  
	//7-  Creez un objet de classe client à l'aide du constructeur

	Client *client1 = new Client("sh", "mike", 123, "h2xsas", 19960925);	
	Client *client2 = new Client("name", "prenome", 45, "34H45", 19952645);
	
	
	//8-  afficher l'etat des attributs du client
	
	cout <<"Client Name : " << client1->obtenirNom() << endl;
	cout << "Cleint Last name : " << client1->obtenirPrenom() << endl;
	cout << "Cleint Identification : " << client1->obtenirIdentifiant() << endl;
	cout << "Client Date of Birth :" << client1->obtenirDateNaissance() << endl;
	cout << "Client Postal Code :" << client1->obtenirCodePostal() << endl;
	cout << "____________________" << endl;
	

	//9-   Le client achete 9 produits
	
	client1->acheter(p1);	
	client1->acheter(p2);	
	client1->acheter(p3);
	client1->acheter(p4);
	client1->acheter(p5);
	client1->acheter(p6);
	client1->acheter(p6);
	client1->acheter(p8);
	client1->acheter(p1);



	//10- Afficher le contenu du panier du client

	client1->afficherPanier();

     //11- livrer le panier du client

	client1->livrerPanier();
	
	//12- afficher le contenu du panier du client
	
	client1->afficherPanier();
    
	//13-  terminer le programme correctement

	
	
	
	//descrutors



	delete p1;
	p1 = nullptr;

	delete p2;
	p2 = nullptr;

	delete p3;
	p3 = nullptr;

	delete p4;
	p4 = nullptr;

	delete p6;
	p6 = nullptr;


	delete p7;
	p7 = nullptr;

	delete p8;
	p8 = nullptr;

	delete p9;
	p9 = nullptr;



	delete p10;
	p10 = nullptr;

	delete p11;
	p11 = nullptr;

	delete p12;
	p12 = nullptr;

	delete p13;
	p10 = nullptr;

	delete p14;
	p11 = nullptr;

	delete p15;
	p12 = nullptr;



	delete rayon1;
	rayon1 = nullptr;

	delete client1;
	client1 = nullptr;






	

    return 0;
}
