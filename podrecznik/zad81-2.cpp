#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cmath>
#include <math.h>

using namespace std;

struct punkt {

    int x;
    int y;

};



struct trojkat {
    
    punkt p[3];


};

struct fun{

double a;
double b;

};

fun f(int x1 , int y1,int x2, int y2);

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

double a1 = f( t[i].p[0].x ,t[i].p[0].y ,t[i].p[1].x ,t[i].p[1].y ).a;
double b1 = f( t[i].p[0].x ,t[i].p[0].y ,t[i].p[1].x ,t[i].p[1].y ).b;

double a2 = f(t[i].p[2].x ,t[i].p[2].y ,t[i].p[1].x ,t[i].p[1].y).a;
double b2 = f(t[i].p[2].x ,t[i].p[2].y ,t[i].p[1].x ,t[i].p[1].y).b;

//cout << "a1: "<<(a1) << " a2: " << (a2) <<"       "<< " b1: "<<(b1)<<" b2: "<<(b2)<< endl;

if((a1) == (a2) && (b1) == (b2)){

cout << "its alive"<<endl;

}




}//koniec i




}

fun f(int x1 ,int y1,int x2,int y2){

fun fx;

//cout << x1 << "  " << double(x1)<<endl;

fx.a = ((double)x2 - (double)x1)/(double)((double)y2 - (double)y1);

fx.b = (double)y1 - (fx.a * (double)x1);



return fx;

}