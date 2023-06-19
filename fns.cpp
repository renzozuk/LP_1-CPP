#include <iostream>
#include <string>
#include "../include/fns.h"
using namespace std;

void funcionario::getFunc(string nm, double wg, string depat){
    name = nm; department = depat;
    if(wg < 1320){
        wage = 1320;
    }else{
        wage = wg;
    }
}

void funcionario::amtsl(){
    if(wage < 6000){
        wage *= ((10000-wage)*2.35/8680);
    }else if(wage < 9240){
        wage *= 1.07;
    }else if(wage < 30000){
        wage *= 1.05;
    }else if(wage < 50000){
        wage *= 1.03;
    }else if(wage < 70000){
        wage *= 1.01;
    }
}

void funcionario::showFunc(){
    cout << "Funcionário: " << name << endl;
    printf("Salário: R$%.2f \n", wage);
    cout << "Departamento: " << department << endl << endl;
}