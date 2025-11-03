//
// Created by Usuario on 3/11/2025.
//

#include "empleado.h"
#include <iostream>
using namespace std;

empleado::empleado(string nombre, double salariobase)
:nombre(nombre), salariobase(salariobase) {}

empleado::~empleado() { }

double empleado::calculatesalario() {
    return salariobase;
}

string empleado::getnombre() {
    return nombre;
}

double empleado::getsalario() {

    return salariobase;
}

