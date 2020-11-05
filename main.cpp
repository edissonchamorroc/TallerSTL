/*/*Este primer código es para un ejemplo de TEMPLATe
 * Estos dinamizan una funcion ya que permite ingresar
 * como parametro,cualquier tipo de dato.
#include <iostream>
#include<string>
using namespace std;

template<class tipo>
void mostrarAbs(tipo n);//funcion que reciba cualquier tipo de dato

template<class ejem2>
void outputdato(ejem2 dato);
int main()
{
    int num1=-4;float num2=-56.67;double num3=859.659887;
    char dato='Ab';string dato2="Ab";

    mostrarAbs(num1);
    mostrarAbs(num2);
    mostrarAbs(num3);
    outputdato(num1);
    outputdato(num3);
    outputdato(dato);
    outputdato(dato2);
    return 0;
}
template<class tipo>
void mostrarAbs(tipo n)
{
    if(n<0)
    {
        n*=-1;
    }
    cout<<"El valor absoluto es: "<<n<<endl;
}
template<class ejem2>
void outputdato(ejem2 dato){
    cout<<"El dato es: "<<dato<<endl;
}
*/
//---------------------------------------------------------------
//Se trabajara con contenedores VECTORES, MAPAS E ITERADORES
#include <iostream>
#include <string>

#include<vector>
using namespace std;

struct Persona{
    string nombre;
    int edad;
};

vector<Persona> cargarDatos(vector<Persona> contenedor){
    Persona persona;
    persona.nombre="Dalia";
    persona.edad=24;
    contenedor.push_back(persona);
    persona.nombre="Nahia";
    persona.edad=2;
    contenedor.push_back(persona);
    persona.nombre="Edisson";
    persona.edad=27;
    contenedor.push_back(persona);
    persona.nombre="Nancy";
    persona.edad=42;
    contenedor.push_back(persona);
    persona.nombre="German";
    persona.edad=45;
    contenedor.push_back(persona);
    return contenedor;
}//creo vector llamado cargarDato
//como atributos de ingreso a la funcion le ingreso un vector llamado persona y ese dato se denominara contenedor

void imprimir(vector<Persona> contenedor){
    for(auto p=begin(contenedor);p!=end(contenedor);p++){
        cout<<"Nombre: "<<p->nombre<< "---Edad: "<<p->edad<<endl;
    }
}
int main(){
    vector<Persona> participantes;
    participantes = cargarDatos(participantes);
    imprimir(participantes);
    return 0;
}
