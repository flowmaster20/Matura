#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cmath>
#include <cstdlib>

using namespace std;

double f(double x);
double g(double x);
double dst(double x1,double y1,double x2,double y2);

int main(){

double suma = 0;
double n = 0.001;

for(double i = 2 ; i < 10;i += n){ //rozkminic jak sie konczy jak sie zaczyna

    suma += dst(i,f(i),i+n,f(i+n));
    suma += dst(i,g(i),i+n,g(i+n));
    cout << suma <<" " << i<< endl;

}

suma += dst(19+(61/25),1,-32+(2/3),1);
suma += 16;
cout << suma;
n = 0.25;
double i = 10;
double sumapasy= 0;
while (dst(i,f(i),i,g(i)) >= 1.0 && i > 2.0){

    sumapasy += floor(dst(i,f(i),i,g(i)));

    i -= 0.25;
}

cout << endl << sumapasy;

}

double f(double x){

return (pow(x,4)/500)-(pow(x,2)/200)-(3/250);

}

double g(double x){

return (-(pow(x,3)/30))+(x/20)+(1/6);

}

double dst(double x1,double y1,double x2,double y2){

return sqrt(pow((x1 - x2),2)+pow(( y1 - y2 ),2));

}
