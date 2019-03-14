#include<iostream>
#include<cstdlib>

using namespace std;

int zamien(char znak);

int main(){

string slowo;
string klucz;
string wynik;

cin>> slowo;
cin >> klucz;

wynik = "";

for (int i =0 ;i < slowo.size();i++){

//jak zapetlac dlugosc klucza kiedy slowo jest od niego dluzsze

int k = i % klucz.size(); //czy to dziala jako zapetlenie dzialania k w granicahc dlugosci klucza

int znak = zamien(slowo[i]);
int znakklucz = zamien(klucz[k]) - 64;
int znakwynik = znakklucz + znak;
if (znakwynik > 90)znakwynik = znakwynik -26;
char koniec = znakwynik;

wynik = wynik + koniec;


}

 cout << wynik<<endl;


 for (int i = 0;i< slowo.size();i++){
 int k = i % klucz.size();
 int znak = zamien(slowo[i]);
 int znakklucz = zamien(klucz[k]) - 64;
 int znakwynik = znak - znakklucz;
 if (znakwynik < 65)znakwynik = znakwynik +26;
 char koniec = znakwynik;
 wynik = wynik + koniec;
 }
 cout << wynik;

}

int zamien (char znak){

int znakliczba = znak;

return znakliczba;


}
