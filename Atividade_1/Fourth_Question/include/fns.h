#ifndef FNS_H
#define FNS_H

#include <string>
#include <vector>
using namespace std;

class person{
private:
    vector<string> nome;
    vector<int> idade;
    vector<double> altura;
public:
    void set(string, int, double);
    void getN();
};

#endif