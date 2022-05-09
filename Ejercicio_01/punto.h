#ifndef PUNTO_H
#define PUNTO_H

#include <iostream>

using namespace std;

#define MAX_X 1024
#define MAX_y 768


class Punto
{
    public:

        /// Constructores
        Punto();
        Punto(int x, int y);
        Punto (const Punto &p2);

        /// Setters
        void SetcoordX(unsigned int val) { coordX = val; }
        void SetcoordY(unsigned int val) { coordY = val; }

        /// Getters
        unsigned int GetcoordY() { return coordY; }
        unsigned int GetcoordX() { return coordX; }

        /// Sobrecarga de operadores unarios
        Punto &operator++ ();
        Punto operator++ (int n);
        Punto &operator-- ();
        Punto operator-- (int n);

        /// Sobrecargas operadores binarios
        bool operator== (const Punto &p2);
        bool operator!= (const Punto &p2);
        bool operator> (const Punto &p2);
        bool operator>= (const Punto &p2);
        bool operator< (const Punto &p2);
        bool operator<= (const Punto &p2);

        /// Objeto llamador operacion objeto -> objeto llamador modificado
        Punto &operator+= (const Punto &p2 );
        Punto &operator-= (const Punto &p2);
        Punto &operator*= (const Punto &p2);
        Punto &operator/= (const Punto &p2);

        /// Objeto llamador operacion valor -> objeto llamador modificado
        Punto &operator+= (const unsigned int valor);
        Punto &operator-= (const unsigned int valor);
        Punto &operator*= (const unsigned int valor);
        Punto &operator/= (const unsigned int valor);

        /// valor llamador operacion objeto -> objeto modificado
        friend Punto operator+= (const unsigned int valor , Punto &p);
        friend Punto operator-= (const unsigned int valor , Punto &p);
        friend Punto operator*= (const unsigned int valor , Punto &p);
        friend Punto operator/= (const unsigned int valor , Punto &p);

        /// Objeto llamador operacion objeto -> nuevo objeto
        Punto operator+ (const Punto &p2 );
        Punto operator- (const Punto &p2);
        Punto operator* (const Punto &p2);
        Punto operator/ (const Punto &p2);

        friend Punto operator+ (const unsigned int valor , Punto &p);
        friend Punto operator- (const unsigned int valor , Punto &p);
        friend Punto operator* (const unsigned int valor , Punto &p);
        friend Punto operator/ (const unsigned int valor , Punto &p);

        /// Sobrecargas operadores friends cin cout
        friend ostream &operator<< (ostream &salida, const Punto &p);
        friend istream &operator>> (istream &entrada, Punto &p);

    protected:

    private:

        /// Atributos
        unsigned int coordX;
        unsigned int coordY;

        /// Metodo Comparacion interna
        int comparacion (const Punto &p2);
};

#endif // PUNTO_H
