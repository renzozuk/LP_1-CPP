#ifndef FNS_H
#define FNS_H

#include <vector>
using namespace std;

class animal{
private:
    string name;
    int idade;
public:
    string especie;
    void addA(string, string, int);
    void print();
    void printesp();
    int getIdade();
};

class zoo{
private:
    vector<animal> anml; animal aml;
    vector<string> espaux;
public:
    void addAnimal(string, string, int);
    void printEspcAnimals(int);
    void printAllAnimals();
    void removing(int);
    void sgcmd();
    void gcmd();
};

#endif