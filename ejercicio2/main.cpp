#include <iostream>
using namespace std;
int main() {
    int zona,precio;
    char claro[3]="SI";
    char cliente[3];
    cout<<"indique la zona: ";
    cin>>zona;
    cout<<"Usted es cliente de claro: ";
    cin>>cliente;
    switch (zona) {
        case 1:
            cout<<"Eligio la zona SUPER VIP"<<endl;
            if (claro[1] == cliente[1] and claro[2] == cliente[2] ){
                precio=212*0.8;
                cout<<"El precio de la entrada es: "<< precio<<endl;
            }
            else{
                precio=212;
                cout<<"El precio de la entrada es: "<< precio<<endl;
            }
            break;
        case 2:
            cout<<"Eligio la zona VIP"<<endl;
            if (claro[1] == cliente[1] and claro[2] == cliente[2] ){
                precio=170*0.8;
                cout<<"El precio de la entrada es: "<< precio<<endl;
            }
            else{
                precio=170;
                cout<<"El precio de la entrada es: "<< precio<<endl;
            }
            break;
        case 3:
            cout<<"Eligio la zona PREFERENCIAL"<<endl;
            if (claro[1] == cliente[1] and claro[2] == cliente[2] ){
                precio=136*0.8;
                cout<<"El precio de la entrada es: "<< precio<<endl;
            }
            else{
                precio=136;
                cout<<"El precio de la entrada es: "<< precio<<endl;
            }
            break;
        case 4:
            cout<<"Eligio la zona GENERAL"<<endl;
            if (claro[1] == cliente[1] and claro[2] == cliente[2] ){
                precio=59*0.8;
                cout<<"El precio de la entrada es: "<< precio<<endl;
            }
            else{
                precio=59;
                cout<<"El precio de la entrada es: "<< precio<<endl;
            }
            break;
    }
}
