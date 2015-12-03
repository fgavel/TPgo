#include "goban.h"

goban::goban()
{
    m_taille = 9;
    for (int i =0 ; i< m_taille ; i++){
    for (int j =0 ; j< m_taille ; j++){
    m_tableau[i][j] = 'o';

    }

}

goban::~goban()
{
    //dtor
}
