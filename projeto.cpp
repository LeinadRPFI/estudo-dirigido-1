#include <iostream>
#include <vector>
#include <algorithm>
#include <locale.h>
#include <stdlib.h>
#include <iomanip>


using namespace std;

//Somat�rio dos elementos do vetor

void somavetor(vector<int> lista){

    int somatorio = 0;

    for(auto a : lista)

        somatorio += a;



cout << "O SOMAT�RIO DOS ELEMENTOS �: " << somatorio << endl;

}

//Media do elementos do vetor

void mediavetor(vector<int> lista){

double media = 0;

    for(int b : lista)

    media = (media + b);

    media = media/lista.size();

    cout << "A M�DIA DOS ELEMENTOS �: " << fixed << setprecision(2) << media << endl;

}

// Zerando os negativos e imprimindo a m�dia

void negativos(vector<int> lista){

    for(int c=0; c < lista.size(); c++){

    if(lista[c] < 0){
        lista[c] = 0;

        }
    }

    mediavetor(lista);
}

// Zerando os repitidos e imprimindo a m�dia e o somat�rio

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

    vector<int> numeros;
    string decisao;
    int decisao2;

    do{


    int valor;
    cout << "Digite um numero inteiro" << endl;

    cin >> valor;
    numeros.push_back(valor);

    cout << "Deseja adicionar outro numero?(Sim/N�o)" << endl;

    cin >> decisao;

    }while(decisao == "Sim");




    do{

        sort(begin(numeros), end(numeros));

    cout << endl << endl;
    cout << "Digite [1] para imprimir o somat�ria dos numeros" << endl << endl;
    cout << "Digite [2] para imprimir a media dos numeros" << endl << endl;
    cout << "Digite [3] para imprimir a media e o somat�rio dos numeros" << endl << endl;
    cout << "Digite [4] para substituir por zero todos os valores negativos e imprimir a m�dia" << endl << endl;
    cout << "Digite [5] para substituir por zero todos os valores repetidos e imprimir a m�dia e o somat�rio" << endl << endl;
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

    cout << endl << "N�o me abandonas usu�rio, eu preciso de ti :C";

    return 0;
}
