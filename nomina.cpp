//
// Created by Usuario on 3/11/2025.
//

#include "nomina.h"
#include <iostream>

#include "desarrolladorsenior.h"
#include "desrolladorjunior.h"
#include "lidertecnico.h"
#include "tester.h"
using namespace std;

nomina::nomina() {}

void nomina::incializardatos() {
    empleados.push_back(make_shared<desrolladorjunior>("carlos", 2000));

    empleados.push_back(make_shared<desarrolladorsenior>("andres", 5000));

    empleados.push_back(make_shared<lidertecnico>("abraham", 10000));

    empleados.push_back(make_shared<tester>("felipe", 2000));
}

void nomina::procesarnomina() {
    cout << "nomina de empleado" << endl;
    for (auto& e : empleados) {
        cout << e->getnombre() << " gana: " << e->calcularsalario() << endl;
    }
}

double nomina::calculartotalpagos() {
    double totalpagos = 0;
    for (auto& e : empleados) {
        totalpagos += e->calcularsalario();
    }
    return totalpagos;
}

