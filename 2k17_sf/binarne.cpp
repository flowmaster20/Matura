#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<fstream>

using namespace std;

int ilenie = 0;

int main (){

fstream p1;

p1.open("binarne.txt",ios::in);

for (int i =0;i< 500;i++){
        string liczba;
p1>>liczba;

for(int x = 0;x< liczba.size()/2;x++){

if(liczba[x] != liczba[x+liczba.size()/2]){

ilenie++;
break;

}

for(int x =0;x< liczba.size();x+4){

    for(int y =0;y<4;y++){



    }

}

}

}

cout << ilenie;

}



