/*
    Realice un simulador de cajero automatic, debe empezar con un saldo fijo de 500$
    el menu debe permitir al usuario, consultar saldo, retirar fondos y depositar. No se debe
    permitir retirar mas de lo que hay disponible, no se pueden usar ni funciones ni arreglos
*/


#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int saldo = 500;
    int opciones = 0;
    int valor = 0;
    int valorRestado;
    char repeticion = 'Y';
    
    do{

        opciones = 0;


        cout<<"Cajero automatico PSM"<<endl;
        cout<<"Opcion 1: Consultar saldo"<<endl;
        cout<<"Opcion 2: Retirar fondos"<<endl;
        cout<<"Opcion 3: Depositar"<<endl;
        cout<<"Seleccione la opcion: "<<endl;
        cin>> opciones;

        switch(opciones)
        {

           case 1:
                {
                cout<<"El saldo disponible es: "<< saldo << endl;

                break;
                }
        
            case 2:
                {
                    cout<<"Ingrese la cantidad de dinero que desea retirar"<<endl;
                    cin>>valor;

                    saldo -= valor;

                    cout<<"El saldo actual es: "<< saldo << endl;

                    break;
                }
            case 3:
                {
                    cout<<"Ingrese la cantidad de dinero que desea depositar"<<endl;
                    cin>>valor;

                    saldo += valor;

                    cout<< "El saldo actual es: "<< saldo << endl;

                    break;

                }

        }

        cout<<"Seguir comprando? (Use Y)";
        repeticion = getch();
    }while(repeticion == 'Y' || repeticion == 'Y');

    return 0;
}
