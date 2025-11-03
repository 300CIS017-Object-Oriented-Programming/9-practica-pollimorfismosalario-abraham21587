//
// Created by Usuario on 3/11/2025.
//

#ifndef INC_9_PRACTICA_POLLIMORFISMOSALARIO_ABRAHAM21587_DESARROLLADORSENIOR_H
#define INC_9_PRACTICA_POLLIMORFISMOSALARIO_ABRAHAM21587_DESARROLLADORSENIOR_H
#include "desrolladorjunior.h"
#include <iostream>
using namespace std;


class desarrolladorsenior: public empleado{
public:
    desarrolladorsenior(string nombre, double salario);
    double calcularsalario() override;

};


#endif //INC_9_PRACTICA_POLLIMORFISMOSALARIO_ABRAHAM21587_DESARROLLADORSENIOR_H