#ifndef PIERRE_H
#define PIERRE_H


class pierre
{
    public:unsigned int m_Counter
        pierre();
        ~pierre();
        int Getm_liberte() { return m_liberte; }
        void Setm_liberte(int val) { m_liberte = val; }
        char Getm_couleur() { return m_couleur; }
        void Setm_couleur(string val) { m_couleur = val; }
        int Getm_x() { return m_x; }
        int Getm_y() { return m_y; }
        void Setm_position(int val) { m_position = val; }
    protected:
    private:
        int m_liberte;
        string m_couleur;
        int m_x;
        int m_y;
};

#endif // PIERRE_H
