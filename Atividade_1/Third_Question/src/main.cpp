#include <iostream>
#include "../include/fns.h"
using namespace std;

int main(){
    vector<livro> book; livro bk;
    bk.addBook("A arte da guerra", "Sun Tzu");
    book.push_back(bk);
    bk.addBook("1984", "George Orwell");
    book.push_back(bk);
    bk.addBook("Harry Potter e a Pedra Filosofal", "J. K. Rowling");
    book.push_back(bk);
    bk.addBook("A garota do lago", "Donlea Charlie");
    book.push_back(bk);
    bk.addBook("Auto da Compadecida", "Ariano Suassuna");
    book.push_back(bk);
    bk.addBook("O idiota", "Fiodor Dostoievski");
    book.push_back(bk);
    bk.addBook("Hamlet", "William Shakespeare");
    book.push_back(bk);
    bk.addBook("Dom Casmurro", "Machado de Assis");
    book.push_back(bk);
    bk.addBook("A pena e a lei", "Ariano Suassuna");
    book.push_back(bk);
    bk.addBook("Romeu e Julieta", "William Shakespeare");
    book.push_back(bk);
    bk.addBook("The Tomb", "H.P. Lovecraft");
    book.push_back(bk);
    for(int i=0; i<book.size(); i++){
        book[i].printBook();
        book[i].calcMedInd(i);
        cout << endl;
    }
    bk.calcMedAll();
    return 0;
}