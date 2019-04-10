#include <iostream>

using namespace std;

int a;
void ading (int *tab);
int main(){

	cin >> a;
	
	int *tablica;

	tablica = new int[a];

	ading (tablica);
	
	for (int i = 0 ;i < a;i++){

	cout << tablica[i] << endl;

	}

	delete tablica;

}

void ading (int *tab){

	for (int i = 0;i < a;i++)
	{
	tab[i] = i+100;
	}

}