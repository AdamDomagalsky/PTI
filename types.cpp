#include <iostream>
#include <math.h>
#include <typeinfo>
#include <bits/stdc++.h> 

using namespace std;

void checkInteger(){
    int number = pow(2,32);
    while(true){
        if (number + 1 < number) {
            cout << "\nMax int: " << number
                << "\nMin int: " << number+1;
            break;
        }
        number++;
    }
}

// https://en.wikipedia.org/wiki/Machine_epsilon
void machineEpsilon(float epsilon){
    float prev, expression;

    cout << "\nnumber: " << epsilon;
    
  do {

    prev = epsilon;
    epsilon = epsilon / 2;
    expression = 1 + epsilon;

  } while (expression > 1);
    

    cout << "\n\tmyEpsilon: " << prev;
    cout << "\n\tnuEpsilon: " <<  std::numeric_limits<float>::epsilon();

}

void machineEpsilonDouble(double epsilon){
    double prev, expression;

    cout << "\nnumber: " << epsilon;
    
  do {

    prev = epsilon;
    epsilon = epsilon / 2;
    expression = 1 + epsilon;

  } while (expression > 1);
    

    cout << "\n\tmyEpsilon: " << prev;
    cout << "\n\tnuEpsilon: " <<  std::numeric_limits<double>::epsilon();

}

void doubleRange(){
    
}

int main() 
{
    cout << "\n\n\tINT";
    checkInteger();

    cout << "\n\n\tFLOAT";
    float number = 3.14;

    machineEpsilon(std::numeric_limits<float>::max());


    cout << "\n\n\tDOUBLE";

    machineEpsilonDouble(std::numeric_limits<double>::max());
    // machineEpsilon(std::numeric_limits<float>::min());


    // doubleRange();

    // auto result = std::numeric_limits<double>::epsilon();
    // cout << "Epsiolon: " << result;
    // cout << "\nLowest= " << std::numeric_limits<double>::lowest();
    // std::cout << "sizeof(float) = " << sizeof( float ) << std::endl;
    




    
    cout << "\n";
    return 0;
}