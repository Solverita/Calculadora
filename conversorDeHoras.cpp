#include <iostream>

using namespace std;

///Quiero un programa que el usuario ingrese una determinada cantidad de horas y el programa le diga cuantos minutos son

///Necesitamos  una variable horaPasaAMinutos  y otra horasEnMinutos
///Le pedimos al usuario que le de un valor a nuestra variable
///Guardamos ese valor
///Muliplicamos nuestra variable horaPasaAMinutos en la variable horasEnMinutos por el numero 60
///Lo mostramos

int main() {
    float horaPasaAMinutos;
    float horasEnMinutos;

    cout<<"Ingresa una cantidad de horas" <<endl;

    cin>> horaPasaAMinutos;

    horasEnMinutos = horaPasaAMinutos * 60;

    cout<<horaPasaAMinutos<<" horas en minutos son "<< horasEnMinutos<<" minutos"<<endl;

    return 0;
}
