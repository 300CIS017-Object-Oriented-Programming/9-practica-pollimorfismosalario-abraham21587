#include <iostream>
#include "nomina.h"
using namespace std;



int main() {
    nomina nomina;

    nomina.incializardatos();
    nomina.procesarnomina();

    cout << "\nTotal a pagar: $" << nomina.calculartotalpagos() << endl;

    return 0;
}