
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>

using  namespace std;

int w(int);

int main (){

fstream p1;
p1.open("59.txt",ios::in);

for (int i = 0 ; i < 1;i ++){

int liczba;

p1 >> liczba;

cout << liczba<<endl<<endl;

while (liczba > 9){

liczba =  w(liczba);
cout << liczba <<"  ";

}

cout <<endl <<liczba <<endl;

}

}

int w(int n){

while (9*(10 * k)  )

}




