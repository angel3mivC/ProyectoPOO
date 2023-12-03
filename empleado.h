//Angel Emiliano Vargas Carreto
//29/11/2023

#include <iostream>
#include <string>

using namespace std;

class empleado{
    private:
        string nombre;
        string id;
        int salario;
        int salarioFinal;
        float deduccion;

    public:
        //El siguiente constructor inicializa los atributos como vacios
        empleado(){
            nombre = "";
            id = "";
            salario = 0;
            salarioFinal = 0;
        }

        //El siguiente constructor incializa los atributos con los parametros que recibe
        empleado(string nombre, string id, int salario, float deduccion){
            this->nombre = nombre;
            this->salario = salario;
            this->deduccion = deduccion;
            this->id = id;
            salarioFinal = salario - (salario*deduccion);
        }

        //Actualiza la variable nombre
        void setNombre(string nombre){
            this->nombre = nombre;
        }

        //Actualiza la variable salario
        void setSalarioBase(int salario){
            this->salario = salario;
            salarioFinal = salario - (salario*deduccion);
        }

        //Actualiza la variable deduccion
        void setDeduccion(float deduccion){
            this->deduccion = deduccion;
            salarioFinal = salario - (salario*deduccion);
        }

        //Regresa el nombre del empleado
        string getNombre(){
            return nombre;
        }

        //Regresa el id del empleado
        string getId(){
            return id;
        }

        //Regresa el valor del salario base
        int getSalarioBase(){
            return salario;
        }

        //Regresa el valor del salario final
        int getSalarioFinal(){
            return salarioFinal;
        }

        //El siguiente metodo recibe como parametro el bono que se le sumara al salario final
        void agregarBono(int bono){
            salarioFinal += bono;
        }
};
