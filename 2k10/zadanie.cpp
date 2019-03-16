#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;

bool check(int taba[25],int tabb[25]);
void zeruj(int tablica[25]);

int ilenie = 0;

string tab [5][200];
int tab2[25];
int tab1[25];

int main(){

fstream p1;

p1.open("anagram.txt",ios::in);

for (int y = 0 ;y < 200;y++){

  for (int x = 0;x< 5;x++){

      p1 >> tab[x][y];

  }

zeruj(tab1);
string slowo = tab[0][y];
  for (int i =0;i< tab[0][y].size();i++){

    tab1[slowo[i]-97]++;

  }

  for (int x = 1;x < 5;x++){
slowo = tab[x][y];
zeruj(tab2);
    for(int i =0;i< slowo.size();i++){

      tab2[slowo[i]-97]++;

    }
    if(check(tab1,tab2) != true){
      break;
    }

    if (tab[0][y].size() != tab[x][y].size()) {
      ilenie++;
      break;
    }
    //if(x ==4 && tab[0][y].size() == tab[x][y].size()){
      if(x ==4 && check(tab1,tab2)==true){
      for (int i = 0;i<5;i++){
      cout << tab[i][y]<<"  ";
    }
      cout << endl;
    }

  }

}

char litera = 'z';
int literaint =litera;
cout << literaint;

}


bool check(int taba[25],int tabb[25]){

  for (int i = 0;i < 25;i++){

    if (taba[i] != tabb[i]){

      return false;

    }

  }

return true;

}

void zeruj(int tablica[25]){

for (int i =0;i< 25;i++){

tablica[i] = 0;

}

}
