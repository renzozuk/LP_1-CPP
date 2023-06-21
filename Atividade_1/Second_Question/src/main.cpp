#include <iostream>
#include "../include/fns.h"
using namespace std;

int main(){
    zoo z;
    
    //add animals to zoo (name, specie, age)
    z.addAnimal("Luan", "pássaro", 2);
    z.addAnimal("Bartolomeu", "jaguatirica", 3);
    z.addAnimal("Loki", "lobo", 3);
    z.addAnimal("Simba", "leão", 4);
    z.addAnimal("Nala", "leão", 4);
    z.addAnimal("Slytherio", "cobra", 22);
    z.addAnimal("Mufasa", "leão", 7);
    z.addAnimal("Scar", "leão", 7);
    z.addAnimal("Lara", "pássaro", 3);
    z.addAnimal("Frederico", "jaguatirica", 4);
    z.addAnimal("Katy", "jaguatirica", 1);
    z.addAnimal("Princess", "tartaruga", 17);
    z.addAnimal("Utu", "macaco", 5);
    z.addAnimal("Slytherina", "cobra", 21);
    z.addAnimal("Nafu", "macaco", 4);
    z.addAnimal("Genisvaldo", "tartaruga", 56);
    z.addAnimal("Suassuna", "cobra", 8);
    
    //show the options:
    //- print all the animals of the list
    //- print the animals by specie
    //- remove the animals of the list by age (the animals that's the age chosen or above will be removed)
    z.gcmd();
    
    return 0;
}
