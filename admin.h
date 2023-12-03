//Angel Emiliano Vargas Carreto
//29/11/2023

#include <iostream>
#include <string>

using namespace std;

class admin{

private:
    string nombre;
    string contrasena;

public:

    //Inicializa los atributos como vacios
    admin(){
        nombre = "";
        contrasena = "";
    }

    //Inicializa el nombre y contrasena con los parametros recibidos
    admin(string nombre, string contrasena){
        this->nombre = nombre;
        this->contrasena = contrasena;
    }

    //Actualiza el valor de nombre
    void setNombre(string nombre){
        this->nombre = nombre;
    }

    //Actualiza la contrasena
    void setContrasena(string contrasena){
        this->contrasena = contrasena;
    }

    //Obtiene el nombre
    string getNombre(){
        return nombre;
    }

    /*Comprueba si la contrasena recibida es la misma que la del administrador, si es asi regresa verdadero,
    de lo contrario retorna falso*/
    bool validar(string contrasena){
        if(this->contrasena == contrasena){
            return true;
        }
        return false;
    }
};
