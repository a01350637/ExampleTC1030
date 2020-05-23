
/*----------------------------------
 *
 * Laboratorio: POO y C++
 * Fecha: 15-Mayo-2020
 * Autor: A01350637 Héctor Calderón
 *
 *----------------------------------*/
#include <iostream>
using namespace std;



class Triangulo {
  private:
    float ladoA;
    float ladoB;
    

  public:
    Triangulo();//constructor () //objeto vacio, default
    Triangulo(float a,float b);
  //constructor(float,float,float,float) //Crear el objeto 
    float get_ladoA(); //Obtener valor
    float get_ladoB();
    void set_ladoB(float nueva_ladoB); //set para poner valor a una variable, cambiar valor
    void set_ladoA(float nueva_ladoA); 
}; 

Triangulo::Triangulo(){
  ladoA=0;
  ladoB=0;
}
Triangulo::Triangulo(float a,float b){
  ladoA=a;
  ladoB=b;
}
float Triangulo::get_ladoB(){
  return ladoB;
}
float Triangulo::get_ladoA(){
  return ladoA;
}

void Triangulo::set_ladoB(float nueva_ladoB){
  ladoB = nueva_ladoB;
}
void Triangulo::set_ladoA(float nueva_ladoA){
  ladoA = nueva_ladoA;
}