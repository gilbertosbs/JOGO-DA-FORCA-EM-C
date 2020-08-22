#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

void limpaTela(){
    system("CLS");
}

int main(){
     setlocale(LC_ALL, "Portuguese");

    int a = 10;

    char palavra[3];
    palavra[0] = 'g';
    palavra[1] = 'o';
    palavra[2] = 'l';

    printf("%c%c%c", palavra[0], palavra[1], palavra[2]);

    printf("O valor %d eh maior que 0", a);

    //limpaTela();

    string outraPalavra = "gol";
    cout << outraPalavra;
    cout << "\nO valor de " << a << " eh maior que 0";

    return 0;
}
