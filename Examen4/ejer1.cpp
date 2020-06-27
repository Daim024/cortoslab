#include "iostream"

using namespace std;

int fun(char frase[100]){
 int i=0;
//donde evalua si la palabra que se ingreso es igual para cifrarla
 while(frase[i]!='\0'){

     if (frase[i]=='M'||frase[i]=='m')
         frase[i]='0';

     if (frase[i]=='U'||frase[i]=='u')
         frase[i]='1';

     if (frase[i]=='R'||frase[i]=='r')
         frase[i]='2';

     if (frase[i]=='C'||frase[i]=='c')
         frase[i]='3';

     if (frase[i]=='I'||frase[i]=='i')
         frase[i]='4';

     if (frase[i]=='E'||frase[i]=='e')
         frase[i]='5';

     if (frase[i]=='L'||frase[i]=='l')
         frase[i]='6';

     if (frase[i]=='A'||frase[i]=='a')
         frase[i]='7';

     if (frase[i]=='G'||frase[i]=='g')
         frase[i]='8';

     if (frase[i]=='O'||frase[i]=='o')
         frase[i]='9';
i++;}
 //aqui mostrara la frase que ingreso pero codificada 
  cout<<"\nLa frase codificada es: "<<frase<<endl;
      cout<<endl;
return 0;}

int main(){
 char frase[100];
 int e;
  //mini interfaz para el programa
     cout<<"\n...Codifica tu frase con la clave murcielago..."<<endl;
    //aqui debe ingresar una frase pero si tiene espacios debe ingresar 
   //el _ para denbes de espacio (tab)
     cout<<"\nIngresa el texto (si quiere ingresar espacios ponga '_'): ";
            cin>>frase;

e=fun(frase);

 }