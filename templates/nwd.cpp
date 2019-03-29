#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
int a,b;
int nwd = 1;

cin >> a;
cin >> b;

int x = a;


    while(x > 1){

        if ( a % x == 0 && b % x == 0 && nwd < x){


            nwd = x;


        }

    x--;

    }

cout << nwd;

}