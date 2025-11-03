//
// Created by Usuario on 3/11/2025.
//

#ifndef INC_9_PRACTICA_POLLIMORFISMOSALARIO_ABRAHAM21587_NOMINA_H
#define INC_9_PRACTICA_POLLIMORFISMOSALARIO_ABRAHAM21587_NOMINA_H

#include <vector>
#include <memory>
#include "empleado.h"

using namespace std;


class nomina {

private:
    vector<shared_ptr<empleado>> empleados;
public:
    nomina();
    void incializardatos();
    void procesarnomina();
    double calculartotalpagos();
};


#endif //INC_9_PRACTICA_POLLIMORFISMOSALARIO_ABRAHAM21587_NOMINA_H