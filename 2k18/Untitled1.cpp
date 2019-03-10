#include<iostream>
#include<cstdlib>
#include<cmath>
#include<vector>

using namespace std;

string tab[1000];

int main (){

vector<int> cala[1000];

string liczba;

int ilewiecej = 0;

fstream p1;

p1.open("dane/liczby.txt",ios::in);

for(int i =0;i< 1000;i++){

    string liczba2;

    p1 >> liczba;

    tab[i] = liczba;



    for (int x = 0;i<liczba.size();x++){



    }
    int x = 0;
    while (liczba[x]!=1){

    x++;

    }

    liczba2 = liczba.substr(x);

    int czesc = liczba2.size() / 32;



    for (int z = 0;z < liczba2.size()-liczba2.size()%32;z+32){
    int cos  = 0;
        for(int v  = z + 32;v > 0;v--){

         cos = cos + liczba2[v] * pow(2, (v - z));

        }

    cala[i].push_back(cos);

    }
    int cos = 0;
    for (int z = liczba2.size();z> liczba2.size()%32;z-- ){
    cos = cos+ liczba2[z] * pow(2, z);
    }
    cala[i].push_back(cos);

}
}
