#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main(){

int suma;
int k;
int licz=0;

vector<int>  t;
t.push_back(5005);

int i = 0;
int f =0;
while( f == 0) //co tutaj za petle zrobic w sumie nie wiem
{

    k = t[i];

    suma = 0;
    while (k > 0){
    licz++;

    suma = suma + (k%10)*(k%10);
    k = k/10;


    }
    if (suma ==1){

    cout << "wesola"<< endl;
    f = 1;
    break;
    }
    for(int j = 0;j <= i ;j++){

    if (suma == t[j]){

        cout << "smutna" << endl;
        f = 1;
    break;

    }

    }
    i = i +1;
    t.push_back(suma);

}



for (int i = 0;i < t.size();i++){

cout <<i<<" "<< t[i]<<endl;

}
cout    <<  licz;
}
