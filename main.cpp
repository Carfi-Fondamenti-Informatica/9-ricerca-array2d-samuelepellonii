

#include <iostream>
#include "lib.h"
using namespace std;

int main(){
    int posizione;
    char lista[10][20], nome[1][20];

    for (int i=0; i<10; i++){
        cin >> lista[i];
    }
    cin >> nome[0];

    if (ricerca(lista, nome, posizione)){
        cout << posizione << endl;
    }else{
        cout << "non presente" << endl;
    }
    return 0;
}
