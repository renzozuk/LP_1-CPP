#include <iostream>
#include <string>
#include <vector>
#include "../include/fns.h"
using namespace std;

template<typename T, typename U, typename V>
void comp(T nm[], U ag[], V quant){
    for(int i=0; i<quant; i++){
        for(int j=0; j<quant; j++){
            if(i!=j){
                if(ag[i]>ag[j]){
                    cout << nm[i] << " (" << ag[i] << " anos) é mais velh@ que " << nm[j] << " (" << ag[j] << " anos)." << endl; 
                }else if(ag[i]<ag[j]){
                    cout << nm[i] << " (" << ag[i] << " anos) é mais nov@ que " << nm[j] << " (" << ag[j] << " anos)." << endl; 
                }else{
                    cout << nm[i] << " (" << ag[i] << " anos) e " << nm[j] << " (" << ag[j] << " anos) possuem a mesma idade." << endl;
                }
            }
        }
        cout << endl;
    }
}
template<typename T, typename U, typename V>
void printAll(T nm[], U ag[], V ht[], int size){
    for(int i=0; i<size; i++){
        cout << "Nome: " << nm[i] << endl;
        if(ag[i]==1){
            cout << "Idade: " << ag[i] << " ano" << endl;
        }else{
            cout << "Idade: " << ag[i] << " anos" << endl;
        }
        printf("Altura: %.2fm\n\n", ht[i]);
    }
}

void person::set(string nm, int id, double alt){
    nome.push_back(nm);
    idade.push_back(id);
    altura.push_back(alt);
}

void person::getN(){
    string nomeaux[nome.size()];
    int idadeaux[idade.size()];
    double alturaux[altura.size()];
    for(int i=0; i<nome.size(); i++){
        nomeaux[i]=nome[i];
        idadeaux[i]=idade[i];
        alturaux[i]=altura[i];
    }
    comp(nomeaux, idadeaux, nome.size());
    printAll(nomeaux, idadeaux, alturaux, nome.size());
}