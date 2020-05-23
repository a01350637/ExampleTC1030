
/*----------------------------------
 *
 * Laboratorio: Herencia en C++
 * Fecha: 22-Mayo-2020
 * Autor: A01350637 Hector Calderon
 *----------------------------------*/
 
#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include <iostream>
#include <string>
#include <sstream>
#include "Package.h"
using namespace std;

class Overnightpackage : public Package{
  protected:
  float tarifakg;
  public:
  Overnightpackage();
  Overnightpackage(string r, string d, float pk, float ck, float tf);
  string toString() const;
  float getTarifakg() const;
  double Calculatecost() const;
    };

   Overnightpackage::Overnightpackage() 
	: Package() {
}
  Overnightpackage::Overnightpackage(string r, string d, float pk, float ck, float tf): Package( r,  d,  pk,  ck), tarifakg(tf){
  }

    float Overnightpackage::getTarifakg() const {
	  return tarifakg;
}
    double Overnightpackage::Calculatecost() const{
      return double( (tarifakg * pesokg) + Package::Calculatecost() );
    }

string Overnightpackage::toString() const {
	stringstream aux;

	aux << Package::toString() << " calculo Overnight: "<< Overnightpackage::Calculatecost()<<  endl;

	return aux.str();
}
#endif
