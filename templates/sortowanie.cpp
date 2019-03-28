#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;
string sortuj(string a);

int main(){

string a = "11221212";

cout << sortuj(a);

}

string sortuj(string a){


for (int i = 0;i < a.size();i++){

        for (int j = i ;j < a.size();j++){


            if (a[i] < a[j]){

                swap(a[i],a[j]);

            }


        }


}

        return a;

}
