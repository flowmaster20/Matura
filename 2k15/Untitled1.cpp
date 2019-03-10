
//
//wychodzi zly wynik zamiast numeru wiersza z najwieksza liczba rownego 925 ;nie dochodzi do konca w pewnym momencie wyrzuca core dumped problem moze byc w zaorno
//
//porownywaniu jak i w calej metodzie myslenia trzeba to sprawdzic najelpieij przez reczne porowanie mojego maksa z ich maksem
//
//



#include<iostream>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<fstream>

using namespace std;

unsigned int tab[1000][8]={0};

int main (){

string liczba;

string liczby[1000];

int infoi = 0;
int duza[8] ={0};

fstream p1;

p1.open("dane/liczby.txt",ios::in);

for(int i =0;i< 988;i++){
cout << i<<endl;
    p1 >> liczba;
    //liczba = "1";
   // cout <<endl <<endl<<endl<<liczba<<endl;

    //usunac zera z poczatku w jakis sposob
    int x =0;
    while (liczba[x] == 0){
    cout << liczba;
     liczba = liczba.substr(1,liczba.size());
    cout <<" ===>>> " <<liczba;

    }


    //dopelnianie do pelnych 250 zerami na koncu
    string zera;
    int m = liczba.size();
    while (m < 250){
    zera = zera + '0';
    m++;                        //dodajemy zera z przodu kazdej liczby zeby wszystkie mialy 255 zakow
    }
    liczba = zera + liczba;
    //cout<< liczba << endl;
   // cout << "tab = ";
    //przechodizmy najpierw po wszystkich znakach
    for(int a = 0;a<240;a=a+30){
        //dzieki liczeniu od tylu mamy potegi kolejnych miejsc po przecinku

        for(int b = 30;b>-1;b=b-1){

            tab[i][a] = tab[i][a] + (liczba[a+29 -b ]-48)*pow(2,b); //segment a liczby o indkesie i rowna sie sumie poteg dwojki razy miejsca gdzie sa jedynki
                                                                    // -48 bo zamieniamy znak 1 na liczbe 1
        }

        //cout<<tab[i][a];

    }

//obliczanie co sie dzieje z ostatnimi 10

for (int c = 10;c> -1;c=c-1){
tab[i][7] = tab[i][7] + (liczba[249 -c ]-48)*pow(2,c);
}
int z = 0;
while (tab [i][z] >= duza[z]){


if (tab[i][z]>duza[z]){

for (int d = 0;d<8;d++){
duza[d] = tab[i][z];
infoi = i;
}

break;

}
else{
z++;
}

}
}

cout << infoi;

}
