#include <iostream>
#include <cstdlib>
#include <fstream>
#include <vector>

using namespace std;
int ile [1000]={0};
int main (){
	int licza = 0;
	int liczb = 0;


	vector<string> slowa;


bool prim(int number);
bool rise(string slowo);
bool czyBylo(string slowo,vector <string> slowa);

fstream p1;

p1.open("NAPIS.TXT",ios::in);

for (int i = 0 ;i < 1000 ;i++){



	string napis;
	int napisint = 0;

	p1 >> napis;

	for (int x = 0;x< napis.size();x++){


		char znak = napis[x];
		napisint = napisint + znak;


	}

	if (prim(napisint)==true) {licza++;}
    if (rise(napis)==true) {liczb++;}
        if (czyBylo(napis,slowa)==false) {


            slowa.push_back(napis);


        }
        else{

            cout << napis << endl;

        }





}


cout << licza<<endl;
cout << liczb;
for (int i =0 ; i < slowa.size();i++){
    if (ile[i]>1){
    cout << slowa[i]<< endl;
    }

}
}



bool prim(int number){


for (int x = 2 ;x < number ;x++){


	if (number % x == 0){


	return false;


	}


	}

return true;

}

bool rise(string slowo){


for (int i =0 ;i < slowo.size()-1;i++){


    char znak1 = slowo[i];
    char znak2 = slowo[i+1];

    if (znak1 >= znak2){

        return false;

    }


}

return true;
}



bool czyBylo(string slowo, vector<string> slowa){


    for (int x =0;x < slowa.size();x++){


        if (slowo == slowa[x]){
            ile[x]=ile[x]+1;
            return true;

        }


    }

return false;
}
