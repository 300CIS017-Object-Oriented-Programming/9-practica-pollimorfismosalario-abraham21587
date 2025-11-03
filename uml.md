al ver la actividad y leerla y ver el ejemplo y repazarlo puedo ver que el uml es

```mermaid
classDiagram
class Empleado {
- nombre : string
- salarioBase : double
+ Empleado(nombre: string, salarioBase: double)
+ calcularSalario() double
+ getNombre() string
+ getSalarioBase() double
}

    class DesarrolladorJunior {
        + DesarrolladorJunior(nombre: string, salarioBase: double)
        + calcularSalario() double
    }

    class DesarrolladorSenior {
        + DesarrolladorSenior(nombre: string, salarioBase: double)
        + calcularSalario() double
    }

    class LiderTecnico {
        + LiderTecnico(nombre: string, salarioBase: double)
        + calcularSalario() double
    }

    class Tester {
        + Tester(nombre: string, salarioBase: double)
        + calcularSalario() double
    }

    class Nomina {
        - empleados : list~Empleado~
        + Nomina()
        + inicializarDatos()
        + procesarNomina()
        + calcularTotalPagos() double
    }

    Empleado <|-- DesarrolladorJunior
    Empleado <|-- DesarrolladorSenior
    Empleado <|-- LiderTecnico
    Empleado <|-- Tester

    Nomina --> Empleado : contiene *
