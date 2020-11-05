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
/*
#include <iostream>
#include <string>

#include<vector>
using namespace std;

struct Persona{//structura igual a clase
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
void imprimirinverso(vector<Persona> contenedor){
    for(auto p=contenedor.rbegin();p!=contenedor.rend();p++){
        cout<<"Nombre: "<<p->nombre<< "---Edad: "<<p->edad<<endl;
    }
}

int main(){
    vector<Persona> participantes;
    participantes = cargarDatos(participantes);
    imprimir(participantes);
    cout<<endl;
    imprimirinverso(participantes);
    return 0;
}

*/
//---------------------------MAPAS-------------------------
/*
#include<iostream>
#include<string>
#include <map>
using namespace std;

struct Persona{
    string nombre;
    int identificacion;
};
map<string,Persona> cargarDatos(map<string,Persona> contenedor){
    Persona persona;//la clave siepre se va a guardar en orden alfabetico
    persona.nombre="Dalia";
    persona.identificacion=24;
    contenedor["Electronica"]=persona;
    persona.nombre="Edisson";
    persona.identificacion=22;
    contenedor["Ambiental"]=persona;
    persona.nombre="Carlos";
    persona.identificacion=2;
    contenedor["Electrica"]=persona;
    persona.nombre="Pedro";
    persona.identificacion=2;
    contenedor["Civil"]=persona;
    return contenedor;
}
void imprimir(map<string,Persona> contenedor){
    for(auto par=begin(contenedor);par!=end(contenedor);par++){
        cout<<"Departamento: "<<par->first<<endl;
        cout<< "Jefe: "<<par->second.nombre<< " Identificacion: "<<par->second.identificacion<<endl<<endl;
    }
}
int main(){
    map<string,Persona> jefes;
    jefes=cargarDatos(jefes);
    imprimir(jefes);
    return 0;
}
*/
//-----------------ANIDADOS-------------------------
#include<iostream>
#include<string>
#include <map>
#include <vector>
using namespace std;

struct Persona{
    string nombre;
    int identificacion;
};
map<string,vector<Persona>> cargarDatos(map<string,vector<Persona>> contenedor){
    Persona persona;//la clave siepre se va a guardar en orden alfabetico
    persona.nombre="Dalia";
    persona.identificacion=24;
    contenedor["Electronica"].push_back(persona);
    persona.nombre="Edisson";
    persona.identificacion=22;
    contenedor["Ambiental"].push_back(persona);
    persona.nombre="Carlos";
    persona.identificacion=2;
    contenedor["Electrica"].push_back(persona);
    persona.nombre="David";
    persona.identificacion=2;
    contenedor["Civil"].push_back(persona);
    persona.nombre="Pedro";
    persona.identificacion=2;
    contenedor["Civil"].push_back(persona);
    persona.nombre="Mario";
    persona.identificacion=245;
    contenedor["Ambiental"].push_back(persona);
    persona.nombre="German";
    persona.identificacion=234;
    contenedor["Electronica"].push_back(persona);
    return contenedor;
}
void imprimir(map<string,Persona> contenedor){
    for(auto par=begin(contenedor);par!=end(contenedor);par++)
    {
        cout<<"Carrera: "<<par->first<<endl;
        for(auto es=begin(par->second);es!=end(par->second);es++)
        {
        cout<< "Nombre: "<<es.nombre << " Identificacion: "<<es.identificacion<<endl<<endl;
        }
    }
}
int main(){
    map<string,Persona> jefes;
    jefes=cargarDatos(jefes);
    imprimir(jefes);
    return 0;
}
