#include <iostream>
#include "../include/fns.h"
using namespace std;

void animal::addA(string name, string especie, int idade){
    this->name=name;
    this->especie=especie;
    this->idade=idade;
}

void animal::print(){
    cout << "Nome: " << name << endl;
    cout << "Idade: " << idade;
    if(idade==1){
        cout << " ano" << endl << endl;
    }else{
        cout << " anos" << endl << endl;
    }
    
}

void animal::printesp(){
    cout << "=============================" << endl;
    cout << endl << "Especie: " << especie << endl << endl;
}

int animal::getIdade(){
    return idade;
}

void zoo::addAnimal(string name, string especie, int idade){
    int compdif=0;
    aml.addA(name, especie, idade);
    anml.push_back(aml);
    for(int i=0; i<espaux.size(); i++){
        if(especie!=espaux[i]){
            compdif++;
        }
    }
    if(compdif==espaux.size()){
        espaux.push_back(especie);
    }
}

void zoo::printEspcAnimals(int esn){
    cout << "Especie: " << espaux[esn-1] << endl << endl;
    for(int i=0; i<anml.size(); i++){
        if(espaux[esn-1]==anml[i].especie){
            anml[i].print();
        }
    }
}

void zoo::printAllAnimals(){
    vector<int> verified; bool allow=true;
    for(int i=0; i<anml.size(); i++){
        allow=1;
        for(int k=0; k<verified.size(); k++){
            if(i==verified[k]){
                allow=0;
            }
        }
        if(allow==true){
            anml[i].printesp();
            anml[i].print();
            verified.push_back(i);
        }
        for(int j=0; j<anml.size(); j++){
            allow=true;
            for(int k=0; k<verified.size(); k++){
                if(j==verified[k]){
                    allow=0;
                }
            }
            if(i!=j&&allow==true){
                if(anml[i].especie==anml[j].especie){
                    anml[j].print();
                    verified.push_back(j);
                }
            }
        }
    }
}

void zoo::removing(int idesc){
    int idade;
    for(int i=0; i<anml.size(); i++){
        idade=anml[i].getIdade();
        if(idade>=idesc){
            anml.erase(anml.begin()+i);
        }
    }
}

void zoo::sgcmd(){
    cout << "Legenda dos comandos:" << endl;
    cout << "1 a " << espaux.size() << " para exibir animais de uma especie especifica." << endl;
    cout << espaux.size()+1 << " para exibir animais de todas as especies." << endl;
    cout << espaux.size()+2 << " para remover animais a partir de uma certa idade." << endl;
    cout << "0 para sair do programa." << endl;
    for(int i=0; i<espaux.size(); i++){
        cout << i+1 << " - " << espaux[i] << endl;
    }
}

void zoo::gcmd(){
    int cmdn, idr;
    do{
        zoo::sgcmd();
        do{
            cout << "Comando: ";
            cin >> cmdn;
        }while(cmdn<0||cmdn>(espaux.size()+2));
        if(cmdn!=0&&cmdn!=(espaux.size()+2)){
            cout << endl;
        }
        if(cmdn==espaux.size()+2){
            do{
                cout << "Idade para remover: ";
                cin >> idr;
            }while(idr<0);
            for(int i=0; i<anml.size(); i++){
                zoo::removing(idr);
            }
        }else if(cmdn==espaux.size()+1){
            zoo::printAllAnimals();
        }else if(cmdn>0){
            zoo::printEspcAnimals(cmdn);
        }
        if(cmdn!=0){
            cout << endl;
        }
    }while(cmdn!=0);
}