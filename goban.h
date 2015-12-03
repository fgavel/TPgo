#ifndef GOBAN_H
#define GOBAN_H


class goban
{
    public:
        goban();
        ~goban();
        int Getm_taille() { return m_taille; }
        void Setm_taille(int val) { m_taille = val; }
    protected:
    private:
        int m_taille;
        char[m_taille][m_taille] m_tableau;

};

#endif // GOBAN_H
