#include <iostream>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <stack>

using namespace std;

int n;
stack <int> stos;
vector <int> tab[ 8 ];
vector <bool> odw;

void fun(int x);

int main(){

fstream p1;

p1.open("graf.txt",ios::in);




p1 >> n;



while (!p1.eof()){
int a , b;

p1 >> a;
p1 >> b;

tab[a].push_back(b);
tab[b].push_back(a);

}

vector <int > wynik;

for (int i = 0; i <= n ; i ++){

 odw.push_back(false);

}




for(int i = 1;i < n;i++){

    cout << i << " -- " <<tab[i].size();

    cout << endl;


}

cout << endl;

fun (1);

}

void fun(int x){
    
    odw[x] = true;

for (int i = 0 ; i < tab[x].size();i++){

    

    stos.push(tab[x][i]);

    if (odw[stos.top()] == false){

        cout << stos.top();
        fun(stos.top());

    }
    else{

        stos.pop();

    }

}

}

