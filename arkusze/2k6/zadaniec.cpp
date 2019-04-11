#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string>
#include<vector>



using namespace std;

vector<string> slowa;
vector<int> ile;

int licz = 0;

int main(){

  fstream p1;
  p1.open("dane.txt",ios::in);

  string nowy;




  for (int i =0 ;i < 1000;i++){

    p1 >> nowy;


for(int x= 0;x< nowy.size()/2;x++){

if(nowy[x]!=nowy[nowy.size()-1-x]){

  licz++;
  break;
}


}





}
cout << 1000 -licz;
  }
