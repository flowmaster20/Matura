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


//TODO WYGLADA JAKBY PROBLEM BYL W LICZENIU ZYWYCH KOMUREK 
//- CZEMU ZAWSZE ZWRACA 1 BEZ WZGLEDU CO SIE DZIEJE
int zywe = 0;
for (int y = posy - 1;y <= posy + 1;y++){
    
    for(int x = posx - 1;x <= posx + 1;x++){
        
        //jezeli wychodzi poza zakres to zerujemy

        if (y > 11 && data[0][x] == true){

            zywe  = zywe + 1;
            
        }

        if (x > 19 && data[y][0] == true){

            zywe  = zywe + 1;
            
        }
        
        if (y < 0 && data[11][x] == true){

            zywe  = zywe + 1;
            
        }

        if (x < 0 && data[y][19] == true){

            zywe  = zywe + 1;
            
        }

        if(y == posy && x == posy){

            zywe = zywe;

        }
        else{
            if (data[y][x] == true){
            zywe = zywe + 1; 
            }
        }
    }
}    

// WARUNKI CZY ZYWA CZY MARTWA

 cout << zywe ;

if (zywe > 1 && zywe < 4 && data[posy][posx] == true){

    //cout << "nr1 wywolany"<<endl;

return true;

}
if (zywe == 3 && data[posy][posx] == false){

    //cout << "nr2 wywolany"<<endl;

return true;

}

    //cout << "nr3 wywolany"<<endl
    
  else{  
    return false;
  }
}



























//WYSWIETLAMY NASZA TABLICE

void show(){


for (int y = 0; y < 12 ; y++){


    for (int x = 0 ; x < 20; x++){

        if (data[y][x]  == true )cout << " "<<"X"<<" ";
        if (data[y][x]  == false )cout << " "<<"."<<" ";

    }

cout << endl;

}

}

};