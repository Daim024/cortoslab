#include "iostream"
#include "cstdlib"//librerias
 #include "stdio.h"

using namespace std;

 int bisiesto(int a){
if(a % 4 != 0 || (a % 100 == 0 && a % 400 != 0) ){//determianr si el periodo es bisisesto
    cout << "\nLa fecha "<<a<<" NO es bisiesto."<<endl;// con dos pruebas que son: si es 
}//divisile con 400 y si es divisible entre 4 pero no divisible entre 100
else{
    cout<< "\nLa fecha "<<a<<" SI es bisiesto." <<endl;
}
cout<<endl;
return 0;
 }
int main()
{
    int a, b;
    cout << "\nDescubre si la fecha que piensas es bisiesto"<<endl;//interfaz de lo que trata el programa
    cout<< "\nIngrese la fecha que deseas saber: ";//el usuario ingresa el periodo que desea saber
    cin >>a;//se guarda en la variale a
    b = bisiesto(a);
    cout << b;
    return 0;
}
