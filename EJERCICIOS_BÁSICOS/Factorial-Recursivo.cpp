//Daniel Braun Sandino
//Ejercicio recursividad - Calcular el factorial 
#include <iostream>

using namespace std;

int calcular_factorial(int i){

    if(i == 0){
        return 0;
    }else{
        return(i + contador(i - 1));
    }

}

void devolver_factorial(int i){
    cout<<"La suma es: "<<contador(i)<<endl;
}

void programa(){
    int num;
    cout<<"Introduce un numero: "<<endl;
    cin>>num;
    devolverRespuesta(num);
}

int main(){
    programa();

    return 0;
}
