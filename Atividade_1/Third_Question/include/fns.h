#ifndef FNS_H
#define FNS_H

#include <vector>
#include <string>
using namespace std;

class livro{
private:
    string titulo, autor;
    vector<double> notas;
    float indmedia, allmedia;
public:
    void addNotas(int);
    void addBook(string, string);
    void printBook();
    void calcMedInd(int);
    void calcMedAll();
};

#endif