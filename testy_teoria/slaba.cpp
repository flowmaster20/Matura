#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

bool pal(string n);

int main (){

string slowo;

cin >> slowo;

cout << pal(slowo);
    
}
bool pal(string n){

if (n.size() != 1 && n[0] != 'a'){
cout << "slaby a palindrom";
return true;
}
else if(pal(n.substr(0,n.size()/2)) == true|| pal(n.substr(0,n.size()/2)) == true){

return true;

}else{

cout << "nie palindrom";
return false;

}

}