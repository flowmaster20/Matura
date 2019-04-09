#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <fstream>
#include "plansza.h"

using namespace std;



int main () {

    //TWORZYMY 100 KOLEJNYCH PLANSZ

plansza plansza[100];

plansza[0].input_data();

//PRZECHODZIMY PRZEZ WSZYTSKIE PLANSZE

for (int i = 0;i < 10 - 1;i++){ // 100 - 1 BO ZAWSZE ODNAWIAMY STAN NASTEPNEJ


for  (int y = 0;y <  12;y++){

    for (int x = 0;x < 20;x++){

        //plansza[i].data[y][x] = plansza[i - 1].data[y][x];

        plansza[i + 1].data[y][x] = plansza[i].update(x,y);

        //cout << plansza[i].update(x,y);
    
    }

    cout << endl;
    cout << endl;

}
cout <<endl <<i<<endl;
plansza[i].show();

cout << endl;
cout << endl;

}



}