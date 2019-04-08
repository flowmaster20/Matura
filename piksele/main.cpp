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
p1.open("/CMakeFiles/przyklad.txt",ios::in);

for (int y = 0;y < 200;y++){

    for (int x = 0; x < 320;x++){

    p1 >> tab[y][x];
    cout << tab[y][x];

    }

    cout << endl;

}


    for (int y = 0;y < 200;y++){

        for (int x = 0; x < 320;x++){

            bool znaleziono = false;

            for (int i = -1;i <=1 ;i ++){

                if (abs(tab[y][x] - tab[y][x + 1]) > 128 && znaleziono != true && x + i < 320 ){

                    znaleziono = true;
                    policz++;

                }

            }


            for (int i = -1;i <=1 ;i ++ ){

                if (abs(tab[y][x] - tab[y + i][x]) > 128 && znaleziono != true && y + i < 200){

                    znaleziono = true;
                    policz++;

                }

            }

        }

    }

cout << policz;

return 0;
}