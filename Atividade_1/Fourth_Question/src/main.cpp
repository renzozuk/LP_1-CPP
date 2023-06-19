#include <iostream>
#include <string>
#include "../include/fns.h"
using namespace std;

int main(){
    person p;
    p.set("Aracy da Silva", 45, 1.65);
    p.set("Joana dos Santos", 27, 1.70);
    p.set("Carlos Pereira", 31, 1.90);
    p.set("Michelle Alves", 41, 1.61);
    p.set("Rafael Vieira", 19, 1.79);
    p.set("Nathalia Franca", 21, 1.72);
    p.set("Janaina Rodrigues", 45, 1.53);
    p.set("Arthemis Karagiannis", 20, 1.72);
    p.getN();
    return 0;
}