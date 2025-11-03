//
// Created by Usuario on 3/11/2025.
//

#include "desarrolladorsenior.h"
#include <iostream>
using namespace std;

desarrolladorsenior::desarrolladorsenior(string nombre, double salariobase)
:empleado(nombre, salariobase) {}


double desarrolladorsenior::calcularsalario() {
    return salariobase * 1.20;
}

