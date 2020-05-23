
/*----------------------------------
 *
 * Laboratorio: Herencia en C++
 * Fecha: 22-Mayo-2020
 * Autor: A01350637 Hector Calderon
 *----------------------------------*/

#ifndef PACKAGE_H
#define PACKAGE_H

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Package {
protected:
  string remitente;
  string destinatario;
  string mostrar;
  float pesokg;
  float costokg;

public:
	Package();
  Package(string r, string d, float pk, float ck);
  string toString() const;
  string getDestinatario() const;
  string getRemitente() const;
  double Calculatecost() const;
};

Package::Package(){
  remitente="";
  destinatario="";
  pesokg=0;
  costokg=0;
}

Package::Package(string r, string d, float pk, float ck){
  remitente=r;
  destinatario=d;
  pesokg=pk;
  costokg=ck;
}

double Package::Calculatecost() const{
  return double(pesokg*costokg);}


string Package::getDestinatario() const {
	return destinatario;
}


string Package::getRemitente() const {
	return remitente;
}

string Package::toString() const {
	stringstream aux;

	aux << "Remitente = " << remitente << " Destinatario = " << destinatario << " Peso = " << pesokg << " Costo = " << costokg << " Calculo Precio Básico = " << Calculatecost();

	return aux.str();
}
#endif
