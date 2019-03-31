#include <iostream>
#include <cstdlib>

using namespace std;

int main (){

int x  =  0;
int nww = 0;
int a,b;

cin >> a ;
cin >> b;

    while(x <= (a *b)){

        if (x % a == 0 && x % b == 0 && x > nww){


            nww = x;

           }
        
         x = x +1;

    }

cout << nww;

}