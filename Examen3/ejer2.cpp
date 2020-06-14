#include "iostream"
#include "time.h"//librerias
#include "stdlib.h"

using namespace std;

float room( float numero, float dato, float contador = 2){ 
srand(time(NULL)); //Generar un numero aleatorio donde se debe adivinar
dato = 1 + rand()%(100);//formula para que la maquina genere el numero aleatorio
do
{
    if(numero > dato){  //si el numero es mayor al numero aleatorio que la computadora dio
        cout <<("\nIntenta con un numero menor: "); cin >> numero;//le pedira al ususario ingresar
        cout <<("Numero de intento :c : ") <<contador <<endl;//un numero menor que se aproxime
    }
    if(numero < dato){ //si el numero es menor al numero aleatorio que la computadora dio
        cout <<("\nIntenta un numero mayor: "); cin >> numero;//le pedira al usuario ingresar
        cout <<("Numero de intento :c : ") <<contador <<endl;//un numero mayor que se aproxime
    }
    contador++;//el contador ira aumentando los intentos


    if(contador > 5-1){ //si el contador es mayor a 5 el bucle parara y le dira al usuario que sus 
      cout <<("\nHa realizado el maximo de intentos, intenta de nuevo.") <<endl;//intentos terminaron
    break;
    }

} while (numero != dato);//si el numero que el usuario digite le atina al numero producido por la
    if (numero == dato) // computadora le dira que lo adivino
    {
         cout <<("\nWow, felicidades esto es casi imposible lo adivinaste!!!!\n");
    }
    return 0;
}
int main()
{
        float f;
        float numero;//variables
        float dato;
        float contador = 2;

        cout <<("\nJuguemos al numero magico!!") <<endl;//interfaz para saber de que trata
        cout <<("Digite un numero para inciar: ");//para que el usuario incie el juego
        cin >> numero;

        f = room(numero, dato, contador = 2);
        cout <<f;
   return 0;
}