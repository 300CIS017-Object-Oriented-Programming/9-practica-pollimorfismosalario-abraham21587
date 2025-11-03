//
// Created by Usuario on 3/11/2025.
//

#ifndef INC_9_PRACTICA_POLLIMORFISMOSALARIO_ABRAHAM21587_DESROLLADORJUNIOR_H
#define INC_9_PRACTICA_POLLIMORFISMOSALARIO_ABRAHAM21587_DESROLLADORJUNIOR_H

#include  "empleado.h"
#include  <iostream>
using namespace std;


class desrolladorjunior: public empleado{

public:
    desrolladorjunior(string nombre, double salariobase);
    double calcularsalario() override;

};


#endif //INC_9_PRACTICA_POLLIMORFISMOSALARIO_ABRAHAM21587_DESROLLADORJUNIOR_H