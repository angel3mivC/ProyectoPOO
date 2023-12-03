//Angel Emiliano Vargas Carreto
//29/11/2023

#include <vector>
#include "empleado.h"

vector <empleado> empleados;

//Agrega un nuervo empleado a la lista
void agregar(){
    string nombre;
    string id;
    int salario;
    float deduccion;

    cout << "Nombre: ";
    cin >> nombre;
    cout << "Id ";
    cin >> id;
    cout << "Salario base: ";
    cin >> salario;
    cout << "Deduccion: ";
    cin >> deduccion;

    empleados.push_back({nombre, id, salario, deduccion});
}

//Muestra toda la lista de empleados
void mostrarPlantilla(){
    cout << "PLANTILLA\n";
    for(auto empleado:empleados){
        cout << "------------\n";
        cout << "Nombre " << empleado.getNombre() << endl;
        cout << "ID " << empleado.getId() << endl;
        cout << "Salario base " << empleado.getSalarioBase() << endl;
        cout << "Salario final " << empleado.getSalarioFinal() << endl;
    }
}

//Busca un id en la lista, si lo encuentra regresa la posicion del id, de lo contrario retorna -1
int encontrarId(){
    string id;
    cout << "ID ";
    cin >> id;

    for(int i=0; i<empleados.size(); i++){
        if(id == empleados[i].getId()){
            return i;
        }
    }
    cout << "No se encontro el ID\n";
    return -1;
}

//Consulta los datos de un empleado en especifico
void consultar(){
    int i = encontrarId();

    if(i != -1){
        cout << "Nombre " << empleados[i].getNombre() << endl;
        cout << "ID " << empleados[i].getId() << endl;
        cout << "Salario base " << empleados[i].getSalarioBase() << endl;
        cout << "Salario final " << empleados[i].getSalarioFinal() << endl;
    }
}

//Modifica los datos de un empleado en especifico
void modificar(){
    int i = encontrarId();

    if(i != -1){
        int decision;

        cout << "Que modificacion hara\n";
        cout << "1. Nombre\n";
        cout << "2. Sueldo base\n";
        cout << "3. Deduccion\n";
        cout << "4. Agregar bono\n";

        cin >> decision;

        //Aqui no se puede cambiar a un switch pues genera un error debido a que ya hay un switch ejecutandose en el main
        if(decision == 1){
            string nombre;
            cout << "Nuevo nombre ";
            cin >> nombre;
            empleados[i].setNombre(nombre);
            cout << "Nombre actualizado\n";
            return;
        }
        if(decision == 2){
            int sueldo;
            cout << "Nuevo sueldo ";
            cin >> sueldo;
            empleados[i].setSalarioBase(sueldo);
            cout << "Sueldo ctualizado\n";
            return;
        }
        if(decision == 3){
            float deduccion;
            cout << "Nueva deduccion ";
            cin >> deduccion;
            empleados[i].setDeduccion(deduccion);
            cout << "Deduccion cambiada\n";
            return;
        }
        if(decision == 4){
            int bono;
            cout << "Agregar bono ";
            cin >> bono;
            empleados[i].agregarBono(bono);
            cout << "Bono agregado\n";
            return;
        }
        cout << "Opcion no valida\n";
    }
}

//Elimina a un empleado en especifico
void eliminar(){
    int i = encontrarId();

    if(i != -1){
        empleados.erase(empleados.begin()+i);
        cout << "Empleado eliminado\n";
    }
}
