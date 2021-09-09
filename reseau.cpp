#include <iostream>
#include "ipv4.h"

using namespace std;
void AfficherTableau(unsigned char *tab);

int main()
{
    unsigned char adresse[4]= {192,168,1,1};
    unsigned char masque[4];
    unsigned char reseau[4];
    unsigned char premiere[4];
    unsigned char derniere[4];
    unsigned char diffusion[4];
    unsigned char AdresseParDefault[4];
    unsigned char AdresseReseauCopie[4];

    IPv4 uneAdresse(adresse, 24); // instanciation de la classe IPv4
    IPv4 uneAutreAdresse; //Appel du constructeur par defaut
    IPv4 AdresseCopie(uneAdresse);
    IPv4 adresse3 = uneAdresse;
    adresse3= uneAdresse;

    cout << "Adresse IPv4 : ";
    AfficherTableau(adresse);

    uneAdresse.ObtenirMasque(masque); // appel d'une méthode
    cout << "Masque : ";
    AfficherTableau(masque);

    uneAdresse.ObtenirAdresseReseau(reseau);
    cout << "Réseau : ";
    AfficherTableau(reseau);

    uneAdresse.ObtenirPremierAdresse(premiere);
    cout << "Premiere : ";
    AfficherTableau(premiere);

    uneAdresse.ObtenirDernierAdresse(derniere);
    cout << "Derniere : ";
    AfficherTableau(derniere);

    uneAdresse.ObtenirAdresseDiffusion(diffusion);
    cout << "Diffusion : ";
    AfficherTableau(diffusion);

      cout <<"NB de machines : ";
   cout << uneAdresse.ObtenirNombreMachines() << endl;

   uneAutreAdresse.ObtenirAdresseReseau(AdresseParDefault);
   cout << "Adresse réseau par défaut : ";
   AfficherTableau(AdresseParDefault);

   AdresseCopie.ObtenirAdresseReseau(AdresseReseauCopie);
   cout << "Adresse réseau de l'adresse copiée : ";
   AfficherTableau(AdresseReseauCopie);

   adresse3.ObtenirAdresseReseau(reseau);
   cout << "Adresse réseau 3 : ";
  AfficherTableau(reseau);



    return 0;
}

void AfficherTableau(unsigned char *tab)
{
    for(int indice=0 ; indice < 4 ; indice ++)
    {
        cout  << static_cast<int> (tab[indice]);
        if(indice < 3)
            cout << "." ;
    }
    cout << endl;
}
