#include <iostream>
#include<fstream>
#include<cstdlib>
#include<conio.h>
#include <cmath>

using namespace std;

void show();

string cezar(string slowo,int k);


int main(){


fstream p1,p2;

p1.open("Dane_PR2/dane_6_1.txt",ios::in);
p2.open("Dane_PR2/dane_6_2.txt",ios::in);
string slowo ;

for (int i =0 ;i < 100;i++){

p1 >> slowo;
//slowo = "AZ";


cout <<cezar(slowo,107)<<endl;
p1.close();
}
if(p2.good()){
for(int i = 0;i< 3000;i++){
    int k;
    cout << i<<endl;
    string text;
    p2 >> text;
    cout<< text<<"  ";

    p2 >> k;
    if (k != NULL){
cout << "   "<<k<<"    ";
   cout << cezar(text,k)<<endl;
    }
}
}
else cout<<"blad";
}



string cezar(string slowo,int k){
if (k == 0)return slowo;
    k = k%26;

for(int x  =0 ;x< slowo.size();x++){
    if (slowo[x]<90 - (k-1)){
    slowo[x] = slowo[x] + k;
    }
    else{

        slowo[x]=slowo[x]+k -26;

    }
}

return slowo;

}
