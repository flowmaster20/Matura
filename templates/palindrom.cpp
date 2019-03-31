#include <cstdlib>
#include <iostream>

using namespace std;

bool palindrom (string slowo);

int main (){

string slowo;

cin >> slowo;


if (palindrom(slowo) == true ){

    cout << slowo << "  to palindrom";

}


}

bool palindrom(string slowo){

for (int i = 0;i < slowo.size();i++){

    if (slowo[i] != slowo[slowo.size() -1 - i]){


        return false;
        break;


    }

return true;

}


return true;

}