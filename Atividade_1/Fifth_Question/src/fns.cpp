#include <iostream>
#include <cstdlib>
#include <ctime>
#include "../include/fns.h"
using namespace std;

void numbers::set(){
    srand(time(NULL));
    int quant=(rand()%6)+1;
    for(int i=0; i<quant; i++){
        A.push_back(rand()%51);
    }
    x=rand()%101;
}

void numbers::get(){
    for(int i=0; i<A.size(); i++){
        cout << A[i] << " ";
    }
    cout << endl << x << endl;
}

void numbers::testSum(){
    bool yn=false; int sum, sumtot=0, aux;
    for(int i=0; i<A.size(); i++){
        if(A[i]==x){
            cout << "Sim" << endl;
            yn=true;
        }
        for(int j=0; j<A.size(); j++){
            if((yn==false)&&(i!=j)&&(A[i]+A[j]==x)){
                cout << "Sim" << endl;
                yn=true;
            }
        }
        if(A.size()>2){
            for(int j=3; j<A.size(); j++){
                for(int k=0; k<A.size(); k++){
                    sum=0;
                    if(k!=0){
                        aux=A[0];
                        for(int l=1; l<A.size(); l++){
                            A[l-1]=A[l];
                        }
                        A[A.size()-1]=aux;
                    }
                    for(int l=0; l<j; l++){
                        sum+=A[l];
                    }
                    if(sum==x){
                        if(yn==false){
                            cout << "Sim" << endl;
                        }
                        yn=true;
                    }
                }
            }
        }
        sumtot+=A[i];
    }
    if(sumtot==x&&yn==false){
        cout << "Sim" << endl;
        yn=true;
    }
    if(yn==false){
        cout << "Não" << endl;
    }
}