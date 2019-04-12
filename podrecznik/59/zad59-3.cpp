
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
//#include <cmath>
#include <math.h>

using  namespace std;

int w(int);

int main (){

fstream p1;
p1.open("59.txt",ios::in);


cout << endl<<endl<<w(123);

}
int w(int liczba){
    int k = 0;
while(pow(10,k)< liczba){
    k++;

}
int iloczyn = 1;
for(int i = k-1;i >=0;i--){
int    potega = pow(10,i);
    iloczyn *= liczba /potega;
    liczba = liczba % (potega);
cout << potega << endl;
}

return iloczyn;

}




