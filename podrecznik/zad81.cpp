#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

struct punkt {

    int x;
    int y;

};



struct trojkat {
    
    punkt p[3];


};

trojkat t[100];

int cwiartka1 = 0;

int main(){

fstream p1;

p1.open("81-1.txt",ios::in);

for (int i = 0;i < 100;i++){

for (int j = 0;j < 3 ;j++){

p1 >> t[i].p[j].x;
p1 >> t[i].p[j].y;

}//koniec j


for (int k = 0; k < 3;k++){

//BLAD POLEGA NA TYM ZE SPRAWDZAM TYLKO POJEDYNCZE DWOJKI Z SOBA A NIE WSZYTSKIE RAZEM 


if (t[i].p[k].x > 0 && t[i].p[k].y > 0){

cwiartka1++;

}

}//koniec k


}//koniec i


cout << cwiartka1;

}
