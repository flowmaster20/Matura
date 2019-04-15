#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <conio.h>

using namespace std;

 long double f(long double x);
 long double g(long double x);
long double dst(long double x1,long double y1,long double x2,long double y2);
long double pole_trapez(long double a,long double b,long double h);

int main(){

long double suma = 0;
long double n = 0.001;

for(long double i = 2 ; i < 10;i += n){ //rozkminic jak sie konczy jak sie zaczyna

    suma += dst(i,f(i)AMD A8-8600B,i+n,f(i+n));
    suma += dst(i,g(i),i+n,g(i+n));
   // cout << suma <<" " << i<< endl;

}

suma += dst(19+(61/25),1,-32+(2/3),1);
suma += 16;
//cout << suma;
n = 0.25;
long double i = 9.75;
long double sumapasy= 0;
while (floor(dst(i,f(i),i,g(i))) > 1.0 && i > 2.0){

    sumapasy += floor(dst(i,f(i),i,g(i)));

    i -= 0.25;
}

cout << endl << sumapasy;



long double pole = 8.0 * ((-32.0+(2.0/3.0))-(19.0+(61.0/125.0)));
//long double pole = 117.705;
n = 0.0010000;
for (long double i = 2;i < 10 ; i +=n){

    pole += abs( pole_trapez(f(i),f(i + n),n));
    pole += abs(pole_trapez(g(i),g(i + n),n));

   cout << i << " "<< g(i) << " "<< pole << endl;

}


cout << g(10.0);


}

long double f(long double x){

return (pow(x,4)/500.0)-(pow(x,2)/200.0)-(3.0/250.0);

}

long double g(long double x){

return (-1*(pow(x,3)/30.0))+(x/20.0)+(1.0/6.0);

}

long double dst(long double x1,long double y1,long double x2,long double y2){

return sqrt(pow((x1 - x2),2)+pow(( y1 - y2 ),2));

}

long double pole_trapez(long double a ,long double b,long double h){

return ((a+b)*h)/2.0;

}
