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
        int[m_taille][m_taille];

};

#endif // GOBAN_H
