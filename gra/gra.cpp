#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<fstream>

using namespace std;

bool tab[20][12][100];
int tab2[20][12][100];

void show(int n);

int main(){



fstream p1;
p1.open("gra2.txt",ios::in);

for(int y = 0;y< 12;y++){

    for(int x= 0;x< 20;x++){
    char znak;
    p1 >> znak;
    if (znak == 'X'){
        tab[x][y][0] = true;
    }
    else{
        tab[x][y][0] = false;
    }
    }
}

for(int n = 0;n< 300;n++){

    for (int y = 0;y<12;y++){

        for (int x = 0;x<20;x++){
                int licz = 0;
                tab[x][y][n+1] = tab[x][y][n];
            for (int y1 = y-1 ;y1<= y+1;y1++){

                for (int x1 = x- 1;x1<=x+1;x1++){


                if (x1 != x || y1 != y){
                    if (x1 > 19) { if(tab[0][y1][n] == true)licz++;}
                    if (x1 < 0)  { if(tab[19][y1][n] == true)licz++;}
                    if (y1 > 11) { if(tab[x1][0][n] == true)licz++;}
                    if (y1 < 0)  { if(tab[x1][11][n] == true)licz++;}
                    if (tab[x1][y1][n]==true){

                        licz++;

                    }


                }




                }
            }
            tab2[x][y][n] = licz;

                            if(tab[x][y][n] == false && licz == 3){tab[x][y][n+1]=true;};

                if((tab[x][y][n] == true )&& ( tab2[x][y][n] > 3)){tab[x][y][n+1]=false;};
                if ((tab[x][y][n] == true )&& ( tab2[x][y][n] < 2)){tab[x][y][n+1]=false;};

    }
    }

}

for(int n =0 ;n<300;n++){
       system( "cls" );
show (n);
}


cout<<endl;

//for (int n = 0;n< 2;n++){
//for(int y = 0;y< 12;y++){
//
//    for(int x= 0;x< 20;x++){
//
//                cout<<" ";
//                cout << tab2[x][y][n];
//                cout<<" ";
//}
//cout << endl;
//}
//cout << endl;
//}
cout << tab2[1][18][36];

}


void show(int n){

for(int y = 0;y< 12;y++){

    for(int x= 0;x< 20;x++){

                cout<<" ";
                if (tab[x][y][n] == true) cout << "X";
                else cout << ".";
                cout<<" ";
    }
    cout << endl;
}
cout <<endl;
}
