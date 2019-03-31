#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

class shape {



public:

int x;
int y;
int z; 

void get_data(){


cin >> x;
cin >> y;
cin >> z;


}

int v(){

return x * y * z;


}
int p(){

return (2 * (x*z)) +  (4 * (x * y));


}



};


int main (){

shape shape1;

shape1.get_data();

cout << shape1.v();

}