#include "punto.h"

/// Constructores
Punto::Punto()
{
    this->coordX = MAX_X/2;
    this->coordY = MAX_y/2;
}

Punto::Punto(int x, int y)
{
    this->coordX = x;
    this->coordY = y;
}

Punto::Punto (const Punto &p2)
{
    this->coordX = p2.coordX;
    this->coordY = p2.coordY;
}

/// Sobrecargas operadores unarios

/// Pre
Punto &Punto::operator++ ()
{
    this->coordX++;
    this->coordY++;
    return *this;
}

/// Post
Punto Punto::operator++ (int n)
{

/// Almacena su valor antes de incrementar
/// entonces devuelve ese valor, pero el contenido de la direccion
/// en donde esta alojado se vio incrementado
/// por eso cuando se vuelve a usar ya tiene un valor incrementado
    Punto temp=*this;

    ++*this;
    //this->coordX++;
    //this->coordY++;

    return temp;
}

/// Pre
Punto &Punto::operator-- ()
{
    this->coordX--;
    this->coordY--;
    return *this;
}

/// Post
Punto Punto::operator-- (int n)
{
    Punto temp=*this;

    --*this;

    return temp;
}

/// Sobrecargas operadores binarios

bool Punto::operator== (const Punto &p2)
{
    return comparacion(p2) == 0 ? true : false;
}

bool Punto::operator!= (const Punto &p2)
{
    return comparacion(p2) != 0 ? true : false;
}

bool Punto::operator> (const Punto &p2)
{
    return comparacion(p2) > 0 ? true : false;
}

bool Punto::operator>= (const Punto &p2)
{
    return comparacion(p2) >= 0 ? true : false;
}

bool Punto::operator< (const Punto &p2)
{
    return comparacion(p2) < 0 ? true : false;
}

bool Punto::operator<= (const Punto &p2)
{
    return comparacion(p2) <= 0 ? true : false;
}

/// Objeto llamador operacion objeto -> objeto llamador modificado
Punto &Punto::operator+= (const Punto &p2 )
{
    this->coordX += p2.coordX;
    this->coordY += p2.coordY;

    return *this;
}

Punto &Punto::operator-= (const Punto &p2)
{
    this->coordX -= p2.coordX;
    this->coordY -= p2.coordY;

    return *this;
}

Punto &Punto::operator*= (const Punto &p2)
{
    this->coordX *= p2.coordX;
    this->coordY *= p2.coordY;

    return *this;
}

Punto &Punto::operator/= (const Punto &p2)
{
    /// Despues crear un try catch
    if (p2.coordX != 0)
        this->coordX /= p2.coordX;

    if (p2.coordY != 0)
        this->coordY /= p2.coordY;

    return *this;
}

/// Objeto llamador operacion valor -> objeto llamador modificado
Punto &Punto::operator+= (const unsigned int valor)
{
    this->coordX += valor;
    this->coordY += valor;

    return *this;
}

Punto &Punto::operator-= (const unsigned int valor)
{
    this->coordX -= valor;
    this->coordY -= valor;

    return *this;
}

Punto &Punto::operator*= (const unsigned int valor)
{
    this->coordX *= valor;
    this->coordY *= valor;

    return *this;
}

Punto &Punto::operator/= (const unsigned int valor)
{
    if (valor != 0)
    {
        this->coordX /= valor;
        this->coordY /= valor;
    }

    return *this;
}

/// valor llamador operacion objeto -> objeto modificado (FRIENDS)
Punto operator+= (const unsigned int valor, Punto &p)
{
    p.coordX += valor;
    p.coordY += valor;
    return p;
}

Punto operator-= (const unsigned int valor, Punto &p)
{
    p.coordX -= valor;
    p.coordY -= valor;
    return p;
}

Punto operator*= (const unsigned int valor, Punto &p)
{
    p.coordX *= valor;
    p.coordY *= valor;
    return p;
}

Punto operator/= (const unsigned int valor, Punto &p)
{
    if (p.coordX != 0)
        p.coordX /= valor;

    if (p.coordY != 0)
        p.coordY /= valor;

    return p;
}

/// Objeto llamador operacion objeto -> nuevo objeto
Punto Punto::operator+ (const Punto &p2 )
{
    Punto pNew;

    pNew.coordX = this->coordX + p2.coordX;
    pNew.coordY = this->coordY + p2.coordY;

    return pNew;
}

Punto Punto::operator- (const Punto &p2)
{
    Punto pNew;

    pNew.coordX = this->coordX - p2.coordX;
    pNew.coordY = this->coordY - p2.coordY;

    return pNew;
}

Punto Punto::operator* (const Punto &p2)
{
    Punto pNew;

    pNew.coordX = this->coordX * p2.coordX;
    pNew.coordY = this->coordY * p2.coordY;

    return pNew;

}

Punto Punto::operator/ (const Punto &p2)
{
    Punto pNew;

    if (p2.coordX != 0)
        pNew.coordX = this->coordX / p2.coordX;

    if (p2.coordX != 0)
        pNew.coordY = this->coordY / p2.coordY;

    return pNew;
}

/// valor llamador operacion objeto ->  nuevo objeto (FRIENDS)
Punto operator+ (const unsigned int valor, Punto &p)
{
    Punto pNew;

    pNew.coordX = valor + p.coordX;
    pNew.coordY = valor + p.coordY;

    return pNew;
}

Punto operator- (const unsigned int valor, Punto &p)
{
    Punto pNew;

    pNew.coordX = valor - p.coordX;
    pNew.coordY = valor - p.coordY;

    return pNew;
}

Punto operator* (const unsigned int valor, Punto &p)
{
    Punto pNew;

    pNew.coordX = valor * p.coordX ;
    pNew.coordY = valor * p.coordY;

    return pNew;
}

Punto operator/ (const unsigned int valor, Punto &p)
{
    Punto pNew;

    if (p.coordX != 0)
        pNew.coordX =  valor / p.coordX;
    if (p.coordY != 0)
        pNew.coordY =  valor / p.coordY;

    return pNew;
}

/// Sobrecargas operadores friends cin cout (FRIENDS)
ostream &operator<< (ostream &salida, const Punto &p)
{
   return salida << "( " << p.coordX << " , " << p.coordY << " )";
}

istream &operator>> (istream &entrada, Punto &p)
{
    cout << "Ingrese x: " ;
    entrada >>   p.coordX ;
   // entrada.ignore();
    cout << "Ingrese y: " ;
    entrada  >> p.coordY ;
    //entrada.ignore(); /// ¿?
    return entrada;
}

/// Metodo Privado de la clase
int Punto::comparacion (const Punto &p2)
{
    int cmp;

    cmp = this->coordX - p2.coordX;
    if ( !cmp )
        return this->coordY - p2.coordY;
    return cmp;
}

