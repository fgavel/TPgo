#include "joueur.h"

joueur::joueur()
{
    //ctor
}

joueur::~joueur()
{
    //dtor
}

void joueur::jouer(int[m_taille][m_taille] Tableau, pierre Pierre){
    int[2] position = Pierre.Getm_position();
    if (Tableau[position[0]][position[1]] == 'o')
        Tableau[position[0]][position[1]] == Pierre.Getm_couleur();





}
