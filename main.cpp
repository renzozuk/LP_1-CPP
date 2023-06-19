#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "../include/fns.h"
using namespace std;

int main(){
    vector<funcionario> func;
    vector<string> depataux;
    funcionario funci; int i, cm; char cml;
    funci.getFunc("Aracy da Silva", 1390, "Cadastro e Controle");
    func.push_back(funci);
    funci.getFunc("Joana dos Santos", 3315, "Recursos Humanos");
    func.push_back(funci);
    funci.getFunc("Carlos Pereira", 900, "Cadastro e Controle");
    func.push_back(funci);
    funci.getFunc("Michelle Alves", 2972.49, "Recursos Humanos");
    func.push_back(funci);
    funci.getFunc("Rafael Vieira", 3596, "Cadastro e Controle");
    func.push_back(funci);
    funci.getFunc("Nathalia Franca", 9500, "Assuntos Internos");
    func.push_back(funci);
    funci.getFunc("Janaina Rodrigues", 1410, "Cadastro e Controle");
    func.push_back(funci);
    funci.getFunc("Arthemis Karagiannis", 9425.56, "Assuntos Internos");
    func.push_back(funci);
    funci.getFunc("Sandra Lopes", 3113, "Cadastro e Controle");
    func.push_back(funci);
    funci.getFunc("Ana Oliveira", 7449.45, "Ouvidoria");
    func.push_back(funci);
    funci.getFunc("Francisco Souza", 4259.69, "Cadastro e Controle");
    func.push_back(funci);
    funci.getFunc("Percivaldo Gomes", 1750, "Almoxarifado");
    func.push_back(funci);
    funci.getFunc("Luiz Ribeiro", 2111.11, "Recursos Humanos");
    func.push_back(funci);
    funci.getFunc("Paulo de Jesus", 2525, "Cadastro e Controle");
    func.push_back(funci);
    depataux.push_back(func[0].department);
    for(int j=1; j<func.size(); j++){i=0;
        for(int k=0; k<depataux.size(); k++){
            if(func[j].department!=depataux[k]){
                i++;
            }
        }
        if(i==depataux.size()){
            depataux.push_back(func[j].department);
        }
    }
    do{
        cout << "Legenda dos comandos:" << endl;
        cout << "1 a " << depataux.size() << " para exibir os funcionários de um determinado departamento;" << endl;
        cout << depataux.size()+1 << " para exibir os funcionários de todos os departmentos;" << endl; 
        cout << "0 para sair do programa." << endl;
        for(i=0; i<depataux.size(); i++){
            cout << i+1 << " - " << depataux[i] << endl;
        }
        do{
            cout << "Comando: "; cin >> cm;
        }while(cm<0||cm>(depataux.size()+1));
        if(cm==(depataux.size()+1)){
            cout << endl;
            for(i=0; i<func.size(); i++){ 
                func[i].showFunc();
            }
            do{ 
                cout << "Deseja aumentar o salário dos funcionários? (s/n): ";
                cin >> cml;
            }while(cml!='s'&&cml!='S'&&cml!='n'&&cml!='N');
            cout << endl;
            for(i=0; i<func.size(); i++){
                if(cml=='s'||cml=='S'){
                    func[i].amtsl();
                }
                func[i].showFunc();
            }
        }else if(cm>0){
            cout << endl;
            for(i=0; i<func.size(); i++){
                if(func[i].department==depataux[cm-1]){
                    func[i].showFunc();
                }
            }
            do{ 
                cout << "Deseja aumentar o salário dos funcionários? (s/n): ";
                cin >> cml;
            }while(cml!='s'&&cml!='S'&&cml!='n'&&cml!='N');
            cout << endl;
            for(i=0; i<func.size(); i++){
                if(func[i].department==depataux[cm-1]){
                    if(cml=='s'||cml=='S'){
                        func[i].amtsl();
                    }
                    func[i].showFunc();
                }
            }
        }
    }while(cm!=0);
    return 0;
}