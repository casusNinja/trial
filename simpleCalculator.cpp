#include <iostream>
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
    return a/b;
}



int main (){
    cout << divide(3.4,5)<<endl;
    cout << multiply(3.4,5)<<endl;


    return 0;
}