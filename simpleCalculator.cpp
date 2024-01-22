#include <iostream>
using namespace std;

double sum(double a, double b){
    return a+b;
}

double subtract(double a, double b){
    return a-b;
}


int main (){
    cout << sum(3.4,5)<<endl;
    cout << subtract(3.4,5)<<endl;


    return 0;
}