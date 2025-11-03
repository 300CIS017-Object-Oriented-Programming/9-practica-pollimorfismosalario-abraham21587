//
// Created by Usuario on 3/11/2025.
//

#include "tester.h"

tester::tester(string nombre, double salariobase)
:empleado(nombre, salariobase) {}

double tester::calcularsalario() {
    return salariobase* 1.05;
}

