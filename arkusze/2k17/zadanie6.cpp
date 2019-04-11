#include<iostream>
#include<cstdlib>
#include<fstream>
#include<cmath>

using namespace std;

int tab[320][200];

int maks = 0;
int mini = 255;
int ileout = 0;

int main(){

fstream p1;

p1.open("dane/dane.txt",ios::in);

for (int x = 0;x< 320;x++){

    for(int y = 0 ;y< 200;y++){

       p1 >> tab[x][y];

       if(tab[x][y]< mini)mini = tab[x][y];
       if(tab[x][y]> maks)maks = tab[x][y];


    }

}

for(int y= 0;y< 200;y++){

    for(int i = 0;i < 320/2;i++){

        if (tab[i][y] != tab[320-i][y] ){
            ileout++;
            break;
        }

    }

}

cout << maks<<endl;
cout << mini<<endl;
cout << ileout<<endl;

}

