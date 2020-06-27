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
    float num2[100];
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

      for( int i = 0 ; i <filas; i ++) {
            for( int j = 0 ; j <columnas; j ++)
            {
            num2[i] = num2[i] + 0.20 * numeros[i][j];
            }
            cout <<"\nLa fila "<< i + 1 << " tiene el promedio de: " << num2[i];
			cout << endl;
        }
	
        for( int i = 0 ; i <filas; i ++){
            if (num2 [i] <= 5.99 ) {
                cout <<"\nEl estudiante de la fila "<< i + 1 << " no aprobo satisfactoriamente..." << endl;
            }
            else if(num2[i] >= 6.00 ){
                cout <<"\nEl estudiante de la fila "<< i + 1 << " aprobo satisfactoriamente!!!" << endl;
            }
        }    
    //termino de saber si aprobo o no 
   return 0;
}