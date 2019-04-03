#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <fstream>
using namespace std;

int main(){

fstream p1;
p1.open("42.txt",ios::in);



int n = 101;


int t[n];



int i = 0;
int j = n;

bool rob = true;

for (int x = 1;x < n;x++){

t[x] =x;


}
int x =  t[1];

do {
    do{
        cout <<"j = "<< j << "  ";
        j = j -1;

    }while(t[j]>x);
    
    do{
        cout << "i = "<< i << "   ";
        i = i +1;

    }while(t[i]<x);
    
    if (i  <  j){

        int temp = t[i];
        t[i] = t[j];
        t[j] = temp;
    }
    else{

        rob = false;

    }    
    
    
}while(rob == true);



for (int x = 1 ; x < n ; x++){

cout << t[x] << "   ";

}

}