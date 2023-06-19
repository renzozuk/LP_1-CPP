#include <iostream>
#include <cstdlib>
#include <ctime>
#include "../include/fns.h"
using namespace std;

void livro::addNotas(int varl){
    srand(time(NULL)+varl);
    for(int i=0; i<3; i++){
        notas.push_back(rand()%11);
    }
}

void livro::addBook(string nm, string au){
    titulo=nm; autor=au;
    int varl=nm.length()+au.length();
    livro::addNotas(varl);
}

void livro::printBook(){
    cout << "Livro: " << titulo << endl;
    cout << "Autor: " << autor << endl;
}

void livro::calcMedInd(int ord){
    indmedia=0;
    for(int i=(ord*3); i<(ord*3+3); i++){
        cout << "Avaliação " << i%3+1 << ": " << notas[i] << endl;
        indmedia+=notas[i];
    }
    printf("Média: %.2f\n", indmedia/3);
}

void livro::calcMedAll(){
    allmedia=0;
    for(int i=0; i<notas.size(); i++){
        //cout << "Avaliação: " << notas[i] << endl;
        allmedia+=notas[i];
    }
    printf("Média total: %.2f\n", allmedia/notas.size());
}