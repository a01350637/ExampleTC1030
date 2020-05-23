
/*----------------------------------
 *
 * Laboratorio: Herencia en C++
 * Fecha: 22-Mayo-2020
 * Autor: A01350637 Hector Calderon
 *----------------------------------*/
#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include <iostream>
#include <string>
#include <sstream>
#include "Package.h"
using namespace std;

class Twodaypackage : public Package{
  protected:
  float tarifa;
  public:
  Twodaypackage();
  Twodaypackage(string r, string d, float pk, float ck, float t);
  string toString() const;
  float getTarifa() const;
  double Calculatecost() const;
  };

  Twodaypackage::Twodaypackage() 
	: Package() {
}
  Twodaypackage::Twodaypackage(string r, string d, float pk, float ck, float t): Package( r,  d,  pk,  ck), tarifa(t){
  }

float Twodaypackage::getTarifa() const {
	return tarifa;
}
double Twodaypackage::Calculatecost() const{
    return double (tarifa + Package::Calculatecost());
  }

string Twodaypackage::toString() const {
	stringstream aux;

	aux << Package::toString() << " calculo a dos días: "<< Twodaypackage::Calculatecost()<< endl ;

	return aux.str();
}

#endif

