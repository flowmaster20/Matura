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

    for(int x = 0; x < slowa.size();x++){

    if (slowa[x] == nowy){

      ile[x]=ile[x]+1;
      break;

    }

    if(x+1 == slowa.size()){
       if( nowy != slowa[x]){
      slowa.push_back(nowy);
      ile.push_back(1);
      break;
    }
    }
}
  }
int k =0;
for (int i = 0;i< slowa.size();i++){
if (ile[i]>1){

  cout <<k<<"   "<<slowa[i]<<"   "<<ile[i]<<endl;
  k++;
}

}
cout << slowa.size();
}
