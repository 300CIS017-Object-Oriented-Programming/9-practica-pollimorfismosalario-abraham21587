//
// Created by Usuario on 3/11/2025.
//

#ifndef INC_9_PRACTICA_POLLIMORFISMOSALARIO_ABRAHAM21587_TESTER_H
#define INC_9_PRACTICA_POLLIMORFISMOSALARIO_ABRAHAM21587_TESTER_H
#include "lidertecnico.h"

class tester: public empleado {
public:
    tester(string nombre, double salariobase);
    double calcularsalario() override;

};


#endif //INC_9_PRACTICA_POLLIMORFISMOSALARIO_ABRAHAM21587_TESTER_H