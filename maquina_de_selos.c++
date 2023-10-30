#include <iostream>
#include <locale.h>
using namespace std;

/*Este programa cria uma máquina de devolução de selos, de 3 e de 5 euros, que aceita uma quantia maior ou igual
a 8 euros e devolve a totalidade dessa quantia em selos de 3 e 5 euros;*/

int main()
{
setlocale(LC_ALL,"");
const int selo3=3;
const int selo5=5;
const int valor_minimo=8;

int valor_inserido;

cout << "\n Introduza um valor (mínimo de " << valor_minimo << " euros:)\n";
cin >> valor_inserido;
if(valor_inserido< valor_minimo ){
cout << "O valor mínimo a inserir é " << valor_minimo << " euros" <<endl;
}else{
    int selo_3= valor_inserido/selo3;
    int selo_5= valor_inserido/selo5;

        cout <<"Com " << valor_inserido << " euros é possível comprar:"<< endl;
        cout << selo_3<< " selos de 3 euros ou "<< selo_5 << " selos de 5 euros" << endl;

    }
        return 0;
