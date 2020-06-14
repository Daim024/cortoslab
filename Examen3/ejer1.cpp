#include "iostream"//librerias

using namespace std;

float work(float htra,float hex,float real,float htrabajadas,
float hextras,float total,float social,float afp,float renta){//variables
    int f;
    htrabajadas = htra *1.75;// se multiplican las horas trabajas por 1.75 que vale
    hextras = hex *2.50;// se multiplican las horas extras que hizo por 2.50
    total= htra +hex;// se suman las horas trabajadas con las extras
    social = total *0.04;// al total se modifica por el 4%
    afp = total *0.0625;// se multiplica por el 6.25%
    if(total >=500){
       renta = total *0.10;}// aqui si el resultado es mayor de 500 se le aplica 10%
    else{
       renta = 0;}// si no se pasa de 500 no se aplica el 10%
    real = total - afp - social - renta;//al final al total se le resta los descuentos
  cout <<("\nEl salario por las horas normales es: ") <<htrabajadas <<endl;
    cout <<("El salario por las horas extras es: ") << hextras <<endl;
    cout <<("El salario total obtenido es: ") <<total<<endl;
    cout <<("\nDescuento por Seguro Social es: ") <<social <<endl;
    cout <<("Descuento por AFP es: ")<<afp <<endl;
    cout <<("Descuento por Renta es: ")<<renta <<endl;
    cout <<("\nEl salario Real con los descuentos incluidos es: ") << real <<endl;
    cout<<endl;//aqui se imprime los datos para que el usuario los observe
 return f;}

int main()
{  
   int op,a,b;
   float htra, hex, real, htrabajadas,
   hextras, total, social, afp, renta;
    cout<<("\nInformacion sobre los salarios.")<<endl;// interfaz para que el usuario sepa de que trata
    while (op!=2){
    cout<< "1- Ingresa un trabajador"<<endl;
    cout<< "2- Salir" <<endl;
    cin>>op;// en esta parte se da la opcion se seguir con el programa o salir de el.
    cout<<endl;

    switch(op){
            case 1:
    cout <<("\nDigite las horas que trabajo: ");
    cin >> htra;
    cout <<("Digite las horas extras que trabajo: ");
    cin >> hex;
   // se indica que el usuario ingrese los datos
    work(htra,hex,real,htrabajadas,hextras,total,social,afp,renta);

    break;
    
    default:
    if (op<1||op>2){
     cout<<"El numero que dijito no esta entre estas opciones"<<endl;//si la persona no sihue indicaciones
        cout<<"Por favor inserte uno de los valores"<<endl;}//se imprimira esto
    }
}return 0;}