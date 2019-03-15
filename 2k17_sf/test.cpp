#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

int main(){

string a;

//cin >> a;

a = "1111111111111111";
int liczba=0;

for (int i = 0;i < a.size();i++){
liczba = liczba + (a[i]-48) * pow(2 ,(a.size()-1-i));
cout << liczba<<endl;
}
cout << liczba;
}
