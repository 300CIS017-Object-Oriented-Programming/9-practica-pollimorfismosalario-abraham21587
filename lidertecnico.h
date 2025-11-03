//
// Created by Usuario on 3/11/2025.
//

#ifndef INC_9_PRACTICA_POLLIMORFISMOSALARIO_ABRAHAM21587_LIDERTECNICO_H
#define INC_9_PRACTICA_POLLIMORFISMOSALARIO_ABRAHAM21587_LIDERTECNICO_H

#include "desarrolladorsenior.h"


class lidertecnico:public empleado{

public:
    lidertecnico(string nombre, double salariobase);
    double calcularsalario() override;
};


#endif //INC_9_PRACTICA_POLLIMORFISMOSALARIO_ABRAHAM21587_LIDERTECNICO_H