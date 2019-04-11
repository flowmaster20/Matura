#include<iostream>
#include<cstdlib>
#include<fstream>
#include <string>

using namespace std;

int ilenie = 0;

int main (){

fstream p1;

p1.open("binarne.txt",ios::in);

for (int i =0;i< 5;i++){
        string liczba;
p1>>liczba;

for(int x = 0;x< liczba.size()/2;x++){

  if (liczba.size()>16)cout << liczba.size()<<endl;

if(liczba[x] != liczba[x+liczba.size()/2]){

ilenie++;
break;

}



}
string liczba2;
cout << liczba<<"  ";
while(liczba[0]=='0'){

liczba  = liczba.substr(1);

}
if (liczba.size()<= 16){



}
cout << liczba<< endl;
}



}
