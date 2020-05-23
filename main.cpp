
/*----------------------------------
 *
 * Laboratorio: POO y C++
 * Fecha: 15-Mayo-2020
 * Autor: A01350637 Héctor Calderón
 *
 *----------------------------------*/

#include <iostream>
#include <math.h>

#include "traingulo.h"
using namespace std;

float a=0;
float b=0;
float perimetro=0;
float area=0;

int main (){

cout << "Triangulo 1. Ejemplo " << endl;
cout << "Lado A: " << endl;
cin>>a;
cout << "Lado B " << endl;
cin>>b;
cout<<endl;

cout << "a:" <<a<<endl;
cout << "b:" <<b<<endl;
  Triangulo triangulo1(a,b);
  cout << "Perimetro: " << (triangulo1.get_ladoA()*2+triangulo1.get_ladoB()) << endl ;
cout << "Area: " << (sqrt(pow(triangulo1.get_ladoA()*triangulo1.get_ladoB()/2,2)-pow(triangulo1.get_ladoB()/2,4))) << endl;
cout<<endl;


cout << "Triangulo 2. Ejemplo " << endl;
cout << "Lado A " << endl;
cin>>a;
cout << "Lado B " << endl;
cin>>b;
cout<<endl;

cout << "a:" <<a<<endl;
cout << "b:" <<b<<endl;
  Triangulo triangulo2(a,b);
  cout << "Perimetro: " << (triangulo2.get_ladoA()*2+triangulo2.get_ladoB()) << endl ;
cout << "Area: " << (sqrt(pow(triangulo2.get_ladoA()*triangulo2.get_ladoB()/2,2)-pow(triangulo2.get_ladoB()/2,4))) << endl;



}