#include <iostream>
#include "punto.h"

using namespace std;

void comprobacion_1 (Punto p1);
void comprobacion_2 (Punto p1, Punto p2);
void comprobacion_3 (Punto p1, Punto p2);
void comprobacion_4 (Punto p1, Punto p2);
void comprobacion_5 (Punto p1, Punto p2);
void comprobacion_6 (Punto p1, const unsigned int valor);
void comprobacion_7 (Punto p1);
void comprobacion_8 (Punto p1);

int main()
{
    Punto p1,
          p2;

    //comprobacion_1(p1);
    //comprobacion_2(p1, p2);
    //comprobacion_3(p1, p2);
    //comprobacion_4(p1, p2);
    //comprobacion_5(p1, p2);
    //comprobacion_6(p1, 7);
    //comprobacion_7 (p1);
    //comprobacion_8 (p1);

    return 0;
}

void comprobacion_1 (Punto p1)
{
    cout<< "Ingrese P1: "<< endl;
    cin >> p1;

    Punto p2, /// creado con constructor por defecto
          p3(77,88), /// creado con constructor parametrizado
          p4(p1), /// creado con constructor por copia
          p5;

    p5 = p4;

    cout << "P1: " << p1 << endl;
    cout << "P2: " << p2 << endl;
    cout << "P3: " << p3 << endl;
    cout << "P4: " << p4 << endl;
    cout << "P5: " << p5 << endl;
}

void comprobacion_2 (Punto p1, Punto p2)
{
    cout<< "Ingrese P1: "<<endl;
    cin >> p1;

    cout<< endl << "Ingrese P2: "<<endl;
    cin >> p2;

    cout << p1 << endl;
    cout << p2 << endl;

    if (p1 == p2)
        cout << "Son iguales" << endl;

    if (p1 != p2)
        cout << "Son distintos" << endl;

    if (p1 >= p2)
        cout << "P1 es mayor o igual" << endl;

    if (p1 > p2)
        cout << "P1 es mayor" << endl;

    if (p1 <= p2)
        cout << "P1 es menor o igual" << endl;

    if (p1 < p2)
        cout << "P1 es menor" << endl;
}

void comprobacion_3 (Punto p1, Punto p2)
{
    cout<< "Ingrese P1 "<< endl;
    cin >> p1;

    p2 = p1;

    cout <<"\np1  "<< p1 << endl;
    cout <<"Post" << p1-- << endl;
    cout <<"p1  "<< p1 << endl;

    cout <<"\np2  "<< p2 << endl;
    cout <<"pre " <<--p2 <<endl;
    cout <<"p2  " <<p2 << endl;

}

void comprobacion_4 (Punto p1, Punto p2)
{
    cout<< "Ingrese P1: "<< endl;
    cin >> p1;

    cout<< endl << "Ingrese P2: "<<endl;
    cin >> p2;

    cout << p1 << endl;
    cout << p2 << endl;

   // cout << (p1+=p2) << endl;
    //cout << (p1-=p2) << endl;
   // cout << (p1*=p2) << endl;
    cout << (p1/=p2) << endl;
}

void comprobacion_5 (Punto p1, Punto p2)
{
    Punto p3;

    cout<< "Ingrese P1: "<< endl;
    cin >> p1;

    cout<< endl << "Ingrese P2: "<<endl;
    cin >> p2;

    cout << p1 << endl;
    cout << p2 << endl;


    p3 = p1 + p2;
    //p3 = p1 - p2;
    //p3 = p1 * p2;
   // p3 = p1 / p2;

    cout << p3 << endl;
}

void comprobacion_6 (Punto p1, const unsigned int valor)
{
    cout<< "Ingrese P1: "<< endl;
    cin >> p1;

    cout << p1 << endl;

    p1 += valor ;
    cout << p1 << endl;
}

void comprobacion_7 (Punto p1)
{
    cout<< "Ingrese P1: "<< endl;
    cin >> p1;

    cout << p1 << endl;

    3+=p1;

    cout << p1 << endl;
}

void comprobacion_8 (Punto p1)
{
    Punto p2;

    cout<< "Ingrese P1: "<< endl;
    cin >> p1;

    cout << p1 << endl;

    p2 = 3+p1;

    cout << "P1: " << p1 << endl;
    cout << "P2: " << p2 << endl;
}
