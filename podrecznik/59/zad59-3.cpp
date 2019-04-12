
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <cmath>
#include <math.h>

using  namespace std;

int w(int);

int main (){

fstream p1;
p1.open("59.txt",ios::in);
string liczba;
cin >> liczba;
int iloczyn = 1;

for(int i = 0 ;i < liczba.size();i++){

   int znak = liczba[i];
   znak -= 48;
   cout << znak<<endl;

   iloczyn *= znak;


}

cout << endl<<endl<<iloczyn;

}





