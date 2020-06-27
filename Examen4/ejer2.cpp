#include <iostream>

using namespace std;

int arra1();
int arr();
float prom, q, sum=0, promedio=0, menor=0, mayor=0;//varialbles
int main(){
//mini interfaz para el programa
 cout << "\n...Promedia la altura de cada estudiante..." << endl;

  arr();//funcion
  arra1();//funcion
   }

float a[26];
int arr(){

//un for donde debe ingresar las alturas de los estudiantes 
    for(int i=0;i<25;i++) {
        
        cout<<endl;
        cout<<i+1<<". Ingrese la altura del estudiante: ";
        cin>>a[i]; 
        }
     //aqui se hacen las operaciones para el total y el promedio de las alturas   
         for(int i=0; i<25;i++) {

            sum += a[i];  }
                cout << "\nLa suma de los elementos es: " << sum << endl;

                promedio = sum/25;
                cout << "\nEl promedio de la altura de los alumnos es: " << promedio << endl;
    
    return 0;
     }

int arra1() {
    //aqui se hacen dos if para evaluar cuantos estan antes y despues de la media
    for(int i=0; i<25; i++) {

       if(a[i] < promedio) {

            menor=menor+1; }

       if(a[i] > promedio) {

            mayor=mayor+1; }
            }

//aqui muestra en pantalla cuantos estudiantes son
 cout  << "\nLos estudiantes que estan por debajo del promedio son: "<<menor << endl;
 cout  << "Los estudiantes que estan por encima del promedio son: "<<mayor << endl;
 
 cout<<endl;
return 0;}