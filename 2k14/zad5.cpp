#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main (){
	
	int licza = 0;

bool prim(int number);


fstream p1;

p1.open("NAPIS.TXT",ios::in);

for (int i = 0 ;i < 1000 ;i++){
	
	
	string napis;
	int napisint = 0;

	p1 >> napis;

	for (int x = 0;x< napis.size();x++){

		cout << napis ;

		char znak = napis[x];
		cout << znak<<"  ";
		napisint = napisint + znak;


	}
	cout << endl;

	if (prim(napisint)==true) {licza++;}



}


cout << licza;


}



bool prim(int number){
	

for (int x = 2 ;x < number ;x++){


	if (number % x == 0){


	return false;  
	

	}


	}

return true;

}