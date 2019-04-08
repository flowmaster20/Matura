#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

string t[20];
int rewers = 0;
string trash;
int maxp = 0;

int main(){

    fstream p1;
    p1.open("dane_obrazki.txt",ios::in);

    for (int i = 0 ;i < 200;i ++){

        int pt0 =0;
        int pt1 =0;

        for(int y = 0;y < 20;y++){

            p1 >> t[y];
            cout << t[y];
        
            cout << endl;
            
        }//koniec y
        p1 >> trash;
        for (int y = 0; y < 20; y++ ){

            

            for (int x = 0;x < t[y].size();x++){

                if (t[y][x] == '1'){

                    pt1++;

                }
                else{

                    pt0++;

                }

            }

           // cout << " pt1 ="<<pt1<<" pt0 = "<<pt0<<endl;

        }//koniec y

        if (pt1 > maxp){

            maxp = pt1;

        }

        if (pt0 < pt1){

            rewers++;

        }

    cout << endl;
    }//koniec i


    cout << maxp;


}//koniec main