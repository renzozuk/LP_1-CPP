#ifndef FNS_H
#define FNS_H

/*#include <iostream>
#include <string>*/
using namespace std;

class funcionario{
private:
    string name;
    double wage;
public:
    string department;
    void getFunc(string, double, string);
    void amtsl();
    void showFunc();
};

#endif