#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>
#include <math.h>

using namespace std;

int tab[200][320];



int main() {

    int policz = 0;

fstream p1;
p1.open("przyklad.txt",ios::in);

for (int y = 0;y < 200;y++){

    for (int x = 0; x  < 320;x++){

    p1 >> tab[y][x];
    cout << tab[y][x];

    }

    cout << endl;

}


    for (int y = 0;y < 200;y++){

        for (int x = 0; x < 320;x++){

            bool znaleziono = false;

            for (int i = -1;i <=1 ;i ++){

                    if(y + i > 200 || y +i <= 0){

                        break;
                        
                    }

                if (abs(tab[y][x] - tab[y][x + 1]) > 128 && znaleziono != true){
                    
                    cout << "x = "<< x <<" y ="<<y<<" warosc = ";
                    cout << abs(tab[y][x] - tab[y + i][x])<<endl;
                    znaleziono = true;
                    policz++;
                    break;

                }

            

            }


            for (int i = -1;i <=1 ;i ++ ){

                

                    if(y + i > 200 || y +i <= 0){

                        break;
                    }


                if (abs(tab[y][x] - tab[y + i][x]) > 128 && znaleziono != true ){


                     cout << "x = "<< x <<" y ="<<y<<"warosc = ";
                    cout << abs(tab[y][x] - tab[y + i][x])<<endl;
                    znaleziono = true;
                    policz++;
                    break;

                }

            

            }

        }

    }

cout << endl<<endl<<policz;

return 0;
}