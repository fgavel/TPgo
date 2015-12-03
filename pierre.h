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
        int[2] Getm_position() { return m_position; }
        void Setm_position(int val) { m_position = val; }
    protected:
    private:
        int m_liberte;
        string m_couleur;
        int[2] m_position;
};

#endif // PIERRE_H
