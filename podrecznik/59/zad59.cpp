#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>
#include <math.h>
#include <vector>

using namespace std;

const long int n = 10000000000;
bool pierwsze[100000];

vector <int> dzielniki[1000];


int main(){
fstream p1,p2;
p2.open("59.txt",ios::out);

for(int i = 0;i < sqrt(n);i++){
    pierwsze[i] = true;
    cout << i<<endl;
}

cout << "czyszczenie tablicy zakonczone"<<endl;

for(int i = 2;i < sqrt(n) ; i++){

if(pierwsze[i]==true){
int k = 2;
while(k * i < sqrt(n)){

pierwsze[k * i] = false;
//cout << k * i <<endl;
k++;
}//koniec while
}//koniec if
}//koniec i

cout << "znaleziono pierwsze: "<<endl<<endl;

for(int i = 0; i < sqrt(n);i++){

if (pierwsze[i] == true){

    p2 << i << endl;

}

}

p2.close();

p1.open("59.txt",ios::in);

for (int p = 0;p < 1000;p++){

int liczba;
p1 >> liczba;

if(liczba % 2 != 0){

while(liczba > 1){
    for (int i = 1;i < sqrt(n);i ++){
        if(liczba % i == 0){
            liczba = liczba /i;
            dzielniki[p].push_back(i);
        }//koniec if
    }//koniec i 
}//koniec if


}//koniec if

for (int i = 1;i < dzielniki[p].size();i++){

    cout << dzielniki[p][i]<<" ";

}//koniec i
cout << endl;
}//koniec p

}



