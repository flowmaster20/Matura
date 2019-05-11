#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cmath>
#include <math.h>

using namespace std;

int na10(string binarny,int podstawa);
string na2(int liczba);

string tab1[1095][2];
string tab2[1095][2];
string tab3[1095][2];

int main(){

fstream p1,p2,p3;

p1.open("1.txt",ios::in);
p2.open("2.txt",ios::in);
p3.open("3.txt",ios::in);

for(int i = 0;i < 1095 ;i++){

p1 >> tab1[i][0];
p1 >> tab1[i][1];
p2 >> tab2[i][0];
p2 >> tab2[i][1];
p3 >> tab3[i][0];
p3 >> tab3[i][1];

}

cout << na2(-14);

}

int na10(string binarny,int podstawa){

int wynik = 0;

if (binarny[0] == '-'){

    binarny = binarny.substr(1);

    

for(int i = 0;i < binarny.size();i++){

wynik +=  ((int)binarny[i]- 48) * pow(podstawa,binarny.size()-i-1);

}

wynik *= -1;

}
else{
for (int i = 0;i < binarny.size();i++){

wynik +=  ((int)binarny[i] - 48) * pow(podstawa,binarny.size()-i-1);

}
}
return wynik;

}


string na2(int liczba){

string wynik="";

    if (liczba < 0){
        liczba = abs(liczba);
        wynik += '-';
    }


    while (liczba != 0){
    if (liczba % 2 == 0){
        liczba = liczba / 2;
        wynik += '0';
        cout << liczba << "  " << wynik<< endl;
    }
    else{
        liczba = (liczba - 1) / 2;
        wynik += '1';
        cout << liczba << "  " << wynik<< endl;
    }
    }
        string wynik2 = "";
    for (int i = wynik.size()-1 ; i >=0;i--){

        wynik2 += wynik[i];

    }

return wynik2;

}
