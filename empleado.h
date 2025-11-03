//
// Created by Usuario on 3/11/2025.
//

#ifndef INC_9_PRACTICA_POLLIMORFISMOSALARIO_ABRAHAM21587_EMPLEADO_H
#define INC_9_PRACTICA_POLLIMORFISMOSALARIO_ABRAHAM21587_EMPLEADO_H

#include <iostream>
using namespace std;


class empleado {
private:
    string nombre;
    double salariobase;
public:

    empleado(string nombre, double salariobase);
    virtual ~empleado();

    virtual double calculatesalario();
    string getnombre();
    double getsalario();
};


#endif //INC_9_PRACTICA_POLLIMORFISMOSALARIO_ABRAHAM21587_EMPLEADO_H