//
// Created by Usuario on 3/11/2025.
//

#include "lidertecnico.h"

lidertecnico::lidertecnico(string nombre, double salariobase)
: empleado(nombre, salariobase) {}

double lidertecnico::calcularsalario() {
    return salariobase* 1.25;
}

