#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cmath>
#include <math.h>

using namespace std;

double odl(int x1,int y1,int x2,int y2);

struct punkt {

    int x;
    int y;

};



struct trojkat {
    
    punkt p[3];


};

trojkat t[100];

int cwiartka1 = 0;

double maxo = 0;

int main(){

fstream p1;

p1.open("81-2.txt",ios::in);

for (int i = 0;i < 100;i++){

for (int j = 0;j < 3 ;j++){

p1 >> t[i].p[j].x;
p1 >> t[i].p[j].y;

}//koniec j

double ob = 0;

for (int k = 0; k < 2;k++){

ob = ob + odl(t[i].p[k].x ,t[i].p[k].y , t[i].p[k+1].x , t[i].p[k+1].y);


}

ob = ob + odl(t[i].p[0].x ,t[i].p[0].y , t[i].p[2].x , t[i].p[2].y);

if (maxo < ob){

maxo = ob;

} 



}//koniec i


cout << maxo << endl;;

}

double odl(int x1,int y1,int x2,int y2){

    double wynik = (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2);

return sqrt(wynik);

}