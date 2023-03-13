//
// Created by lufe0 on 25/10/2021.
//
#include "Calculator.h"
#include <iostream>
using std::cout;
using std::cerr;
using std::endl;
using std::runtime_error;

int main (){
    Calculator myCalculator;

    try {
        float resultado = myCalculator.divide(12, -2);
        cout << "El resultado es: " << resultado << endl;
    } catch (const runtime_error e) {
        cout << "SE PRESENTÓ UN ERROR: " << e.what() << endl;
    }  catch (const std::invalid_argument e) {
        cout << "SE PRESENTÓ UN ERROR: " << e.what() << endl;
        cout << "Por favor ingrese nuevamente los datos" << endl;
    }

    return 0;
}