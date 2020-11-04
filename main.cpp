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
