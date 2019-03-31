#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <fstream>
#include "plansza.h"

using namespace std;



int main () {

    //TWORZYMY 100 KOLEJNYCH PLANSZ

plansza plansza[100];

//PRZECHODZIMY PRZEZ WSZYTSKIE PLANSZE

for (int i = 0;i < 100 - 1;i++){ // 100 - 1 BO ZAWSZE ODNAWIAMY STAN NASTEPNEJ

//TODO PRZEJSCIE PO WSZYTSKICH PUNKTACH DANEJ PLANSZY
plansza[i + 1].data[y][x] = plansza[i].update(x,y);


}



}