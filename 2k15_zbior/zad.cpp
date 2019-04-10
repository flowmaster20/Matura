#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int maxl = 0;
int licz = 0;
int dif =0;

int tab[310];

int main(){

fstream p1;
p1.open("dziennik.txt",ios::in);

for (int i = 0;i < 310;i++){

    p1 >> tab[i];

    cout << tab[i]<<endl;

}

for(int i = 0;i < 309;i++){

    int dlugosc = 1;

    int k= 1;

    while(tab[i + k-1]<tab[i + k]){

        dlugosc++;
        //cout << dlugosc << endl;
        k++;

    }
    if (maxl < dlugosc){

        maxl = dlugosc;
        //dif = tab[i + k] - tab[i];
            if (tab[i + k] - tab[i] > dif){

    dif = tab[i + k] - tab[i];
    }


    }
    if (dlugosc > 3){

        licz++;

    }

    //cout << dif<< endl;
    if (tab[i + k] - tab[i] > dif){

    dif = tab[i + k] - tab[i];
    }

    //i += k -1;
}

cout << endl<<maxl;

}
