#include "iostream" //Libreria utilizada 

using namespace std;

const int longcad = 50; //longitud del nombre del producto

struct info{
    char articulo[longcad +1];
    int cantidad;    //estructura 
    float precio;
    float costoart;

}informacion[100];

int arreglo1;
float total;      //variables globales 

void leer();
void calculo();
void mostrar();      //funciones
void recibo();

int main(){

 cout<<"------------------------------------------------------------------------"<<endl;
    cout<<"     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"                         DAVID'S MARKET"<<endl;//interfaz de la factura 
    cout<<"     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
 cout<<"------------------------------------------------------------------------"<<endl;

    cout<<"Ingrese la cantidad de productos que lleva: ";//ingresa la cantidad de productos
    cin >> arreglo1;

 cout<<"------------------------------------------------------------------------"<<endl;
    leer();
    calculo(); //se llaman las funciones 

 cout<<"------------------------------------------------------------------------"<<endl;
 cout<<"                             FACTURA"<<endl;//interfaz de la factura 
 cout<<"------------------------------------------------------------------------"<<endl; 

    mostrar();
    recibo(); //se llaman las funciones 
  cout<<"\nEl total a pagar a caja fue $: "<<total<<endl;

 cout<<"------------------------------------------------------------------------"<<endl;
 cout<<"------------------------------------------------------------------------"<<endl;

 cout<<"                          GRACIAS POR SU COMPRA                         "<<endl;
 cout<<"                      SIEMPRE CONTIGO DAVID'S MARKET                    "<<endl;
 cout<<"------------------------------------------------------------------------"<<endl;
}

void leer(){
//funcion donde el usuario ingresa los datos para la factura
   for(int i=0; i< arreglo1; i++){
       cout<<"\nIngrese el nombre del producto: ";
           cin>>informacion[i].articulo;
        cout<<"Ingrese el precio del articulo $: ";
           cin>>informacion[i].costoart;
       cout<<"Ingrese la cantidad que lleva : ";
           cin>>informacion[i].cantidad;       }  
}

void calculo(){
  //aqui se hace la multilicacion del costo con la cantidad del producto 
    for(int i=0; i< arreglo1; i++){
        informacion[i].precio = informacion[i].costoart * informacion[i].cantidad;
    } //donde se pondra el total de cada producto 
}

void mostrar(){
    //despliqega los datos para mostrarlos como factura 
  for(int i=0; i< arreglo1; i++){

      cout<< "\n   El producto fue: "<< informacion[i].articulo <<endl;
      cout<< "   Precio del producto es $: "<< informacion[i].costoart<<endl;
      cout<< "   Cantidad del producto es: "<< informacion[i].cantidad<<endl;
      cout<< "   El precio total del producto es $: "<< informacion[i].precio<<endl;

  }
}

void recibo(){
   //aqui se hacen las sumas del total de todos los productos y da el total a pagar
    for(int i=0; i< arreglo1; i++){

        total += informacion[i].precio;
           }
}