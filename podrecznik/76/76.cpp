#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cmath>
#include <math.h>
#include <vector>
#include <list>

using namespace std;

string szyfroj(string slowo,int klucz[]);



int main (){

    int liczby[] = {1,2,3,4,5};
    int *adres = vector<int> klucz(liczby,liczby+sizeof(liczby)/ sizeof(int));

szyfroj("informatyka",adres);

}

string szyfroj(string slowo,vector <int> klucz){


for(int i = 0;i < klucz.size();i++){

cout<< klucz[i]<< endl;

}



}