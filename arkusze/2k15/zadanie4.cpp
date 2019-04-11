#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<cmath>
#include<algorithm>
#include<fstream>
#include<vector>

using namespace std;

string tab[1000];
bool zawiera(string text1,string text2);
int main(){

int zad1 = 0;
int p2 = 0;
int p8 = 0;
int maxsize = 1;

vector <string> duze;

fstream plik;

plik.open("liczby.txt",ios::in);
for(int i = 0;i< 1000 ;i++){
plik >> tab[i];
}

for(int i = 0;i< 1000;i++){
string liczba;
int zero=0,jeden=0;
    liczba = tab[i];



    for(int x = 0;x< liczba.size();x++){
        if(liczba[x] == '0'){
            zero++;
        }
        else{

            jeden++;
        }



    }

        if(zero > jeden){

        zad1++;

    }


    if(liczba[liczba.size()-1] == '0') p2++;
    if(liczba[liczba.size()-3] == '0'&&liczba[liczba.size()-2] == '0'&&liczba[liczba.size()-1] == '0') p8++;


    string mem;



    while(liczba[0] == '0'){

        mem = liczba;

        for(int x = 1;x< liczba.size();x++){

            liczba[x] = mem[x];

        }



    }

        if(liczba.size()> maxsize){

            maxsize = liczba.size();

        }

}

    for(int i = 0;i< 1000;i++){
        string liczba = tab[i];
        if(liczba.size() == maxsize){

            duze.push_back(liczba);

        }

    }
    int maxtextsize = 0;
    string maxtext;
      for(int i = 0;i< duze.size();i++){
        string liczba = tab[i];
        string text = "1";
        while(zawiera(liczba,text)){

            text = text + "1";
            cout << endl<<text<<endl;
        }
        if(text.size()> maxtextsize){
            maxtext = text;
        }
    }

    cout << endl<<zad1<<endl;

    cout<< p2<<endl<<p8<<endl;

    for(int i = 0;i < 1000;i++){

        cout<<endl<<tab[i]<<endl;

    }

    cout <<endl<< maxsize<<endl;

    for(int i =0;i < duze.size();i++){

        cout <<endl << duze[i]<<endl<<i;

    }
cout <<endl<< maxtext<<endl;
int ile= 0;
for(int i = 0;i< duze.size();i++){

        if(zawiera(duze[i],maxtext)){

            cout<<endl<<"zad4.3 tp"<<i<<endl;
ile++;
        }

}
cout<< ile;
return 0;

}

bool zawiera(string text1,string text2){


for(int i = 0;i < text2.size();i++){

    if(text1[i] != text2[i]){

        return false;
    }

}

return true;

}
