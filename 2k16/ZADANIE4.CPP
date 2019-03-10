#include <iostream>
#include<fstream>
#include<cstdlib>
#include<conio.h>
#include <cmath>

using namespace std;

void show();

int ilew=0;
float ps = 400 *400;
float pi;

int main(){


fstream p1;

p1.open("Dane_PR2/punkty.txt",ios::in);
for (int i = 0;i< 10000;i++){
int x,y;
p1 >> x;
p1 >> y;


if((x-200)*(x-200)+(y-200)*(y-200)==200*200){

    cout << x <<"   "<<y<<endl;

}
if((x-200)*(x-200)+(y-200)*(y-200)<=200*200){

    ilew++;

}



}

pi = (ilew * ps)/(200*200*10000);
show();

}


















void show(){

cout << ilew<<endl;
cout << pi;


}
