#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string>
#include<vector>



using namespace std;

vector<string> slowa;
vector<int> ile;

int main(){

  fstream p1;
  p1.open("dane.txt",ios::in);

  string nowy;
  string old;
  p1>> old;

  slowa.push_back(old);
  ile.push_back(1);

  for (int i =0 ;i < 1000;i++){

    p1 >> nowy;

    for(int x = 0; x < slowa.size();x++)

    if (slowa[x] == nowy){

      ile[x]++;

    }

    if(i+1 == slowa.size() && nowy != slowa[i]){

      slowa.push_back(nowy);
      ile.push_back(1);

    }

  }

}
