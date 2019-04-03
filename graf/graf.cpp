#include <iostream>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <stack>

using namespace std;

void test(fstream p1);

int main(){

fstream p1;

p1.open("graf.txt",ios::in);


int n;

p1 >> n;

vector <int> tab[ n + 1 ];

while (!p1.eof()){
int a , b;

p1 >> a;
p1 >> b;

tab[a].push_back(b);
tab[b].push_back(a);

}


for(int i = 1;i < n;i++){

    cout << i <<" -- " <<tab[i].size();

    cout << endl;


}


}

