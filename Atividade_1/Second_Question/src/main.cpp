#include <iostream>
#include "../include/fns.h"
using namespace std;

int main(){
    zoo z;
    //z.addAnimal nome especie idade 
    z.addAnimal("Luan", "passaro", 2);
    z.addAnimal("Bartolomeu", "jaguatirica", 3);
    z.addAnimal("Loki", "lobo", 3);
    z.addAnimal("Simba", "leao", 4);
    z.addAnimal("Nala", "leao", 4);
    z.addAnimal("Slytherio", "cobra", 22);
    z.addAnimal("Mufasa", "leao", 7);
    z.addAnimal("Scar", "leao", 7);
    z.addAnimal("Lara", "passaro", 3);
    z.addAnimal("Frederico", "jaguatirica", 4);
    z.addAnimal("Katy", "jaguatirica", 1);
    z.addAnimal("Princess", "tartaruga", 17);
    z.addAnimal("Utu", "macaco", 5);
    z.addAnimal("Slytherina", "cobra", 21);
    z.addAnimal("Nafu", "macaco", 4);
    z.addAnimal("Genisvaldo", "tartaruga", 56);
    z.addAnimal("Suassuna", "cobra", 8);
    z.gcmd();
    return 0;
}