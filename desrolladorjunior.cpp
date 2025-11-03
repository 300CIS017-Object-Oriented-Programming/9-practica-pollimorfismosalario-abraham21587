//
// Created by Usuario on 3/11/2025.
//

#include "desrolladorjunior.h"
#include <iostream>
using namespace std;


desrolladorjunior::desrolladorjunior(string nombre, double salariobase)
: empleado(nombre, salariobase) {}

double desrolladorjunior::calcularsalario() {
    return salariobase;
}

