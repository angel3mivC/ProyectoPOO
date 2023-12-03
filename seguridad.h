//Angel Emiliano Vargas Carreto
//29/11/2023

#include <vector>
#include "admin.h"

vector<admin> administradores {{"admin", "1234"}, {"superuser", "password"}};

//El siguiente metodo regresa un booleano indicando si se logro o no ingresar al sistema
bool ingresar(){
    int intentos = 3;
    string usuario;
    string contrasena;

    do{
        cout << "Nombre: ";
        cin >> usuario;
        cout << "Contrasena: ";
        cin >> contrasena;

        for(auto admin:administradores){
            if(admin.getNombre() == usuario && admin.validar(contrasena)){
                cout << "Has ingresado exitosamente\n";
                return true;
            }
        }

        intentos--;
        if(intentos){
            cout << "Intentelo de nuevo\n";
        }

    }while(intentos);

    return false;
}
