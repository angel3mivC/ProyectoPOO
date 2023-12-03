//Angel Emiliano Vargas Carreto
//29/11/2023

#include <iostream>
#include <conio.h>
#include "seguridad.h"
#include "crud.h"

using namespace std;

//EL siguiente metodo muestra el menu de opciones que se pueden realizar
void menu(){
    int decision;

    do{
        cout << "\nOpciones\n";
        cout << "1. Agregar\n";
        cout << "2. Consultar plantilla\n";
        cout << "3. Consultar\n";
        cout << "4. Modificar\n";
        cout << "5. Eliminar\n";
        cout << "6. Salir\n";

        cin >> decision;
        system("cls");

        switch(decision){
        case 1:
            agregar();
            break;
        case 2:
            mostrarPlantilla();
            break;
        case 3:
            consultar();
            break;
        case 4:
            modificar();
            break;
        case 5:
            eliminar();
        case 6:
            break;
        default:
            cout << "Opcion no valida\n";
        }
    }while(decision != 6);
}

int main(){
    if(ingresar()){
        menu();
    }else{
        cout << "Demasiados intentos";
    }
    return 0;
}
