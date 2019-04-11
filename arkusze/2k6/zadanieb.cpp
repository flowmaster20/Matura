#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string>
#include<vector>
#include<cmath>


using namespace std;

string tohex(int liczba);
unsigned long long fromhex(string liczba);
vector<string> slowa;
vector<int> ile;

int main(){
int licz = 0;
  fstream p1;
  p1.open("dane.txt",ios::in);
string nowy;

  for (int i =0 ;i < 1000;i++){

    p1 >> nowy;

    string znak =  "" +nowy[nowy.size()-1];

    if (nowy[nowy.size()-1]=='A'||nowy[nowy.size()-1]=='C'||nowy[nowy.size()-1]=='E'){

      cout << nowy << "     "<< fromhex(nowy)<<endl;
      licz++;

    }


  }
  cout << licz;

}

string tohex(int liczba){
string wynik ="";
  while (liczba>0){
    if (liczba % 16 < 10){
    char znak = liczba %16;
    wynik = wynik +znak ;
    liczba = liczba / 16;
  }
else{
char znak = 65 + liczba -10;
wynik = wynik + znak;
liczba = liczba/16;

}

  }

return wynik;

}
unsigned long long fromhex(string liczba){
long long  wynik=0;
for(int i =0 ;i < liczba.size();i++){


  wynik = wynik + (liczba[i]-55) * pow(16,i);


}

return wynik;

}
