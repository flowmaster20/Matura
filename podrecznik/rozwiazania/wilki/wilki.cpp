#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <math.h>
#include <iomanip>


using namespace std;

double w = 30;
double z = 100;

double maxz = 0;
double maxw = 0;

double a = 0.02;
double b = 0.0005;
double c = 0.05;

int main (){

 bool firstw = true; 
 bool firstz = true;

for (int i = 0;i < 40 * 12;i++){

 double tempz = z;
 double tempw = w;



 z = tempz + (a * tempz) - (b * tempz * tempw);
 w = tempw + (b * tempz * tempw) - (c * tempw); 

if (tempz > z && firstz == true){

firstz = false;
cout << "populacja zajecy maleje od    " <<  i << endl;


}
if (tempw > w && firstw == true){
firstw = false;
cout << "populacja wilkow maleje od    " <<  i << endl;


}

if ( maxz < z )maxz = z;
if ( maxw < w )maxw = w;

}

cout << "wilki: "<< setprecision(4) << w << endl;
cout << "zajace: "<< setprecision(5)<< z << endl;

cout << "max wilki: " << maxw << endl;
cout << "max zajace: " << maxz << endl;

}