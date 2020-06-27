#include "iostream"

using namespace std;

float arreglo1();
float arreglo2();

int main(){
  //mini interfaz para el programa
  cout<<"\n...Matriz para saber si apruebas o no apruebras..."<<endl;
  cout<<endl;
  arreglo1();//funcion
  arreglo2();//funcion

}
////////////
    float numeros[100][100], prom, suma;//variables
    int filas, columnas=5, n, i, da;//variables

  float arreglo1(){


    cout<<"Digite el numero de alumnos (filas): ";
        cin>>filas;

    for(int i=0; i<filas; i++){     //almacenando datos en la matriz
        for(int j=0; j<columnas; j++){
            cout<<"Digite una nota ["<<i<<"]["<<j<<"]: ";
                cin>>numeros[i][j]; }
    }
    cout<<"\nMostrando las notas"<< endl;
    cout<<endl;
    for(int i=0; i<filas; i++){   //mostrando la matriz
        for(int j=0; j<columnas; j++){
            cout<<" | "<<numeros[i][j]; }

        cout<<endl; }
 //termina la matriz
return 0;
}
  ////////
  float arreglo2(){

  //promediar notas
  cout<<"\nCual alumno (fila) deseas promediar: ";
  cin>>n;

      if((n>=0)&&(n<=filas)){
          suma=0;
          for(int j=0; j<columnas; j++){
              suma=suma+numeros[n][j]; }
      prom=suma/5;

     cout<<"\nEl promedio del alumno (fila) '"<<n<<"' es: "<<prom<<endl;}

     else{
        cout<<"\nERROR valor introducido no existente!!"<<endl; }
    //termino de promediar notas
    //inicio de si apruea o no

    if(prom>6){
        cout<<"\nEl alumno aprobo satisfactoriamente!"<<endl;
        cout<<endl; }
     else{
        cout<<"\nEl alumno no aprobo satisfactoriamente..."<<endl;
        cout<<endl; }

    //termino de saber si aprobo o no 
    //para saber si el usuario quiere seguir viendo si aprueba o no 
   cout<<"Deseas ingresar otra fila?";
   cout<<"\n1. Ingresar otra fila.";
   cout<<"\n2. salir";
   cout<<"\nIngrese su opcion: ";
   cin>>da;

   if(da == 1){
       arreglo2(); }

   else if(da == 2){
       return 0; }
    
    else{
        cout<<"ERROR digite un numero de los que se le muestra..."<<endl;
    }
   return 0;
}