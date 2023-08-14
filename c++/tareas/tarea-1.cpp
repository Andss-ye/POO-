#include <iostream>
using namespace std;

int main() {
    struct Alumno {
        string Nombre[3] = {"Andres", "Ivan", "Cristian"};
        string *p_Nombre{Nombre};
        int Notas[3] = {50, 45, 45}; 
        int *p_Notas{Notas};
    };
    
    Alumno alumno;

    cout << "Resultado de los apuntadores (Nombres):" << endl;
    
    for (int i = 0; i < 3; i++) {
        cout << "Nombre: " << alumno.p_Nombre[i] << endl;
    }

    cout << "Resultado de los apuntadores (Notas):" << endl;

    for (int j = 0; j < 3; j++) {
        cout << "Notas: " << alumno.p_Notas[j] << endl;
    }

    return 0;
}
