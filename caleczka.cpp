#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>

using namespace std;

double pole (double a,double b,double h);
double fx (double x);
double gx (double x);
int main(){

double dx = 0.001;

double sumapolef = 0.0;
double sumapoleg = 0.0;

//for (double x = 0.0;x < 10-dx;x = x + dx)

double x = 0.000000001;

while (x < 10){

sumapoleg = sumapoleg + pole(gx(x),gx(x + dx),dx);
sumapolef = sumapolef + pole(fx(x),fx(x + dx),dx);

cout <<"x = "<<x<<" suma f = " << sumapolef<<"  suma g = "<<sumapoleg<< endl;

x = x + dx;
}
cout << sumapolef + sumapoleg<< endl;
}


double pole(double a ,double b,double h){


  return ((a+b)*h)/2;


}

double fx(double x){

return (1*(x*x))/50;

}

double gx(double x){

return 1 + ((x*x)/100) - (x/200);

}
