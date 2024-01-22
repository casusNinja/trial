#include <iostream>
#include <cmath>
using namespace std;

// double sum(double a, double b){
//     return a+b;
// }

// double subtract(double a, double b){
//     return a-b;
// }

double multiply(double a, double b){
    return a*b;
}

double divide(double a, double b){
    if (b != 0){
        return a/b;
    }
    return 0;    
}



int main (){
    cout << divide(3.4,0)<<endl;
    cout << multiply(3.4,5)<<endl;
    cout << sin(3.141528)<< endl;
    cout << pow(7,3) <<endl;


    return 0;
}