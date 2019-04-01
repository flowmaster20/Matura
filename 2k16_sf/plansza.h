#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <fstream>

using namespace std;

class plansza {

public:

//DANE NASZEJ PLANSZY

bool data[12][20];

void input_data(){

fstream p1;
p1.open("gra.txt",ios::in);

//KONWERTUJEMY NA TABLICE BOOL Z TABLICY CHAR

for (int y = 0;y < 12;y++){

    for (int x = 0;x < 20;x++){

        char in;

        p1 >> in;

        if(in == '.' ){

            data[y][x] = false;

        }
        if(in == 'X'){

            data[y][x] = true;

        }


    }


}
}

bool update(int posx ,int posy){

//LICZYMY ILE ZYWYCH DOOKOLA

int zywe = 0;

for (int y = posy - 1;y < posy + 1;y++){
    for(int x = posx - 1;x < posx + 1;x++){

        if(y == 0 && x == 0){
        }
        else{

            zywe++; 

        }
    }

// WARUNKI CZY ZYWA CZY MARTWA


if (zywe > 1 && zywe < 4 && data[posy][posx] == true){

    //cout << "nr1 wywolany"<<endl;

return true;

}
else if (zywe == 3 && data[posy][posx] == false){

    //cout << "nr2 wywolany"<<endl;

return true;

}

else{

    //cout << "nr3 wywolany"<<endl;

return false;

}

}



}

//WYSWIETLAMY NASZA TABLICE

void show(){

//TODO NAPISAC FUNKCJE WYSWIETLAJACA

for (int y = 0; y < 12 ; y++){


    for (int x = 0 ; x < 20; x++){

        cout << " " <<data[y][x] << " ";

    }

cout << endl;

}

}

};