#include<iostream>
#include<cstdlib>
#include<fstream>

using namespace std;

int licz =0,licz2 =0,licz3=0;

bool zawiera(string slowo1,string slowo2);

int main(){

string tab[10000][2];

string slowo;

fstream p1;

p1.open("slowa.txt",ios::in);

for (int i =0;i<1000;i++){

for (int x = 0;x< 2;x++){


p1 >> slowo;


tab[i][x]=slowo;

//cout<< slowo<<"    "<<slowo[slowo.size()-1]<<endl;

if (slowo[slowo.size()-1]=='A'){


licz++;


}








}
cout << tab[i][0] << "  "<< tab[i][1];
for (int x = 0;x < tab[i][1].size();x++){



if (zawiera(tab[i][0],tab[i][1])==true){

cout << tab[i][0] << "  "<< tab[i][1]<<endl;

licz2++;
break;

}
else{

tab[i][1] = tab[i][1].substr(1,tab[i][1].size());

}


}
cout <<endl<<endl<<endl<<endl;
string slowo1 = tab[i][0];
string slowo2 = tab[i][1];

bool tab[30];
bool tab2[30];


if(slowo1.size()==slowo2.size()){

    for(int x = 0;x< slowo1.size();x++){

            tab[slowo1[x]-65] = true ;
            tab2[slowo2[x]-65] = true ;

    }

    for(int x= 0;x< 30;x++){

        if(tab[x]!=tab2[x]){

            break;

        }
        if (x == 29){
        licz3++;
        }

    }

}



}

cout << licz<<endl;
cout << licz2<<endl;
cout << licz3<<endl;

slowo = "1234";

cout << slowo << "   "<<slowo.substr(1,slowo.size());


}




bool zawiera(string slowo1,string slowo2){


if (slowo2 == slowo1){

return true;

}

return false;

}
