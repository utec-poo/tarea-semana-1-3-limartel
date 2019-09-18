#include <iostream>
#include "Tipos.h"
using namespace std;
int main() {
  int n;
  cin>>n;

  if(n>=1 && n<=30){
    for(int i=0;i<n;i++){
    for(int k=0;k<(n-1)-i;k++){
      cout<<" ";
    }
    for(int k=0;k<(i*2)+1;k++){
      cout<<"*";
      }
    cout<<endl;
    }
  }
}
