#include <iostream>

using namespace std;

int fatorial(int num){
    if(num == 1){
        return 1;
    }else{   
        return (num * fatorial(num - 1));
    }
}

int main(){
    int numero;
    cout << "Digite um numero: ";
    cin >> numero;

    cout << "Resultado fatorial e: " << fatorial(numero);
    cin>> numero;
}