#ifndef JOUEUR_H
#define JOUEUR_H

#include <vector>
#include <pierre.h>

class joueur
{
    public:
        joueur();
        ~joueur();
        int Getm_point() { return m_point; }
        void Setm_point(int val) { m_point = val; }
        std::vector<pierre> Getm_pierres() { return m_pierres; }
        void Setm_pierres(std::vector<pierre> val) { m_pierres = val; }

        void jouer(int[m_taille][m_taille] tableau);
    protected:
    private:
        int m_point;
        std::vector<pierre> m_pierres;
};

#endif // JOUEUR_H
