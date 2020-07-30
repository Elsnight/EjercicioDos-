/*Crea un arreglo, donde el usuario ingrese por teclado el tamaño del arreglo y posterior a ello crear una función para que llene el arreglo con los múltiplos de un numero pedido por teclado.
Por ejemplo, si se define un arreglo de tamaño 5 y luego se ingresa un 3, el arreglo deberá presentar los siguientes valores:
3, 6, 9, 12, 15.*/

#include <iostream>
using namespace std;
void leer();
void escribir();

int main()
{
  int num,num2;
   //leer();
   cout <<"ingrese el tamaño del arreglo"<<endl;
   cin>>num;
   cout <<"ingrese los multiplos"<< endl;
   cin>>num2;
  escribir();
    return 0;
}

int i,n,V[100],c,ac;
void leer()
{
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>V[i];
    }
}

void escribir()
{
    for(i=2;i<20;i++)
    {
        cout<<i<<" ";
    }
}


