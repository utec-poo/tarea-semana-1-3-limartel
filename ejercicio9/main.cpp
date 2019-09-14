#include <iostream>
using namespace std;
int main(){
    int cant,hora,min,seg;
    do {
        cout<<"Escriba la cantidad de segundos: "<<endl;
        cin>>cant;
    }
    while(cant<1);
    hora=cant/3600;
    min=(cant%3600)/60;
    seg=((cant%3600)%60);
    cout<<"La cantidad en HORAS es: "<<hora<<endl;
    cout<<"La cantidad en MINUTOS es: "<<min<<endl;
    cout<<"La cantidad en SEGUNDOS es: "<<seg<<endl;
}
