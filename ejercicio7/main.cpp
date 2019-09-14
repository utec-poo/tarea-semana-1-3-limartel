#include <iostream>

using namespace std;

int main(){
    int num;
    do{
        cout<<"Escriba un numero: ";
        cin>>num;
    }
    while(num<=10 || num>=30);
}
