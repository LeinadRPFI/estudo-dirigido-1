#include <iostream>
#include <vector>
#include <algorithm>
#include <locale.h>
#include <stdlib.h>
#include <iomanip>


using namespace std;

//Somatório dos elementos do vetor

void somavetor(vector<int> lista){

    int somatorio = 0;

    for(auto a : lista)

        somatorio += a;



cout << "O SOMATÓRIO DOS ELEMENTOS É: " << somatorio << endl;

}

//Media do elementos do vetor

void mediavetor(vector<int> lista){

double media = 0;

    for(int b : lista)

    media = (media + b);

    media = media/lista.size();

    cout << "A MÉDIA DOS ELEMENTOS É: " << fixed << setprecision(2) << media << endl;

}

// Zerando os negativos e imprimindo a média

void negativos(vector<int> lista){

    for(int c=0; c < lista.size(); c++){

    if(lista[c] < 0){
        lista[c] = 0;

        }
    }

    mediavetor(lista);
}

// Zerando os repitidos e imprimindo a média e o somatório

void repitidos(vector<int> lista){

    sort(begin(lista), end(lista));

   vector<int> listaax = lista;
   int d,e;

   for(d = 0; d < lista.size(); d++){

        for(e = 0; e < lista.size(); e++){

            if(lista[d] == lista[e]){

                if(d != e){

                    lista[d] = 0;
                }

            }

        }

   }

    somavetor(lista);
    mediavetor(lista);
}

// Colocando o vetor em ordem crescente

void ordenar(vector<int> lista){

    int ax;

    sort(begin(lista), end(lista));

    cout << "Elementes organizados de forma crescente: {";

    for( int i = 0; i < lista.size() - 1; i++){

        cout << " " << lista[i] << ",";
        ax = i;
    }

    cout << " " << lista[ax+1] << " }";
}

int main (){

    setlocale(LC_ALL,"Portuguese");
    
    cout  << "           ========== " "BEM VINDO CONSAGRADISSIMO USUÁRIO" " ==========" << endl;
    cout  << "           ========== " "CALCULOS COM NUMEROS DE UM VETOR " " ==========" << endl << endl << endl;


    vector<int> numeros;
    string decisao;
    int decisao2;

    do{


    int valor;
    cout << "Digite um numero inteiro para o seu vetor: " << endl;

    cin >> valor;
    numeros.push_back(valor);

    cout << "Deseja adicionar outro numero?(Sim/Não)" << endl;

    cin >> decisao;

    }while(decisao == "Sim");




    do{

        sort(begin(numeros), end(numeros));

    cout << endl << endl;
    cout << "Digite [1] para imprimir o somatória dos numeros" << endl << endl;
    cout << "Digite [2] para imprimir a media dos numeros" << endl << endl;
    cout << "Digite [3] para imprimir a media e o somatório dos numeros" << endl << endl;
    cout << "Digite [4] para substituir por zero todos os valores negativos e imprimir a média" << endl << endl;
    cout << "Digite [5] para substituir por zero todos os valores repetidos e imprimir a média e o somatório" << endl << endl;
    cout << "Digite [6] para mostrar o vetor organizado" << endl << endl;
    cout << "Digite [0] para sair do programa" << endl << endl;

    cin >> decisao2;
    cout << endl << endl;

    switch(decisao2){

        case 1:

            somavetor(numeros);

            break;

        case 2:

            mediavetor(numeros);

            break;

        case 3:

            somavetor(numeros);
            mediavetor(numeros);

            break;

        case 4:

            negativos(numeros);

            break;

        case 5:

            repitidos(numeros);

            break;

        case 6:

            ordenar(numeros);

            break;



    }





    }while(decisao2 != 0);

    cout << endl << "Não me abandonas usuário, eu preciso de ti :C";

    return 0;
}
