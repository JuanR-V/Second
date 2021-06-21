//JUAN RIVERA VARGAS
//Creacion de una clase Persona
#include <iostream>
#include <stdlib.h>
using namespace std;
//clase
class Persona{
    private://ATRIBUTOS
        int edad;
        string nombre;
    public://METODOS, son los unicos que pueden
        void leer();//modificar los atributos
        void correr();
        Persona(int,string);//constructor, ayuda a 
        					//inicializar los atributos
};
//Constructor
//es el encargado de inicializar los atributos
//El nombre debe ser el mismo que en su declaracion dentro de la clase persona
Persona::Persona(int _edad, string _nombre){
    edad= _edad;
    nombre=_nombre;
}

//Metodos de la clase
//sintaxis
//tipo AqueClasePertenece :: nombre(){}

//metodo leer
void Persona::leer(){
    cout<<"Soy "<<nombre<<" y estoy leyendo"<<endl<<endl;
}
//metodo correr
void Persona::correr(){
    cout<<"Soy "<<nombre<<" y estoy corriendo"
        <<" Tengo "<<edad<<" anios"<<endl<<endl;
}

int main()
{
    Persona p1 =Persona(20,"Juan");//creacion o instancia del objeto p1
    Persona p2 =Persona(21,"Raul");//creacion o instancia del objeto p2
    Persona p3(21,"Maria");//creacion o instancia del objeto p3
    
    p1.leer();//metodo del objeto p1
    p2.correr();//metodo del objeto p2
    p3.leer();//metodos del objeto p3
    p3.correr();
    
    return 0;
}
