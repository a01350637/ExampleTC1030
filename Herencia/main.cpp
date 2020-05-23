#include <iostream>
#include <string>
#include <sstream>
#include "Package.h"
#include "Twodaypackage.h"
#include "Overnightpackage.h"

using namespace std;

int main(int argc, char* argv[]) {
Package a;
Package b ("Luis", "Juan", 12, 5);
Twodaypackage c ("Pepe", "Luis", 12, 5, 100);
Overnightpackage d ("Hector", "Bayit", 12, 5, 200);

	cout << "Paquete Básico A:\n";
	cout << a.toString() << "\n\n";

  cout << "Paquete Básico B: \n";
	cout << b.toString() << "\n\n";

  cout << "Two day package C: \n";
	cout << c.toString() << "\n";

  cout << "Overnight Package D: \n";
	cout << d.toString() << "\n";

  return 0;
}