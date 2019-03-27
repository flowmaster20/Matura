#include <cstdlib>
#include <iostream>

using namespace std;

int nwd (int a , int b);

int main(){
int t[4];
for (int i = 0 ;i < 4;i++){

cin >> t[i];

}

for (int i = 0 ;i < 3;i++){

  t[i+1] = nwd(t[i],t[i+1]);


}
cout << t[3];



}

int nwd (int a,int b){
int r;

while (b!=0){

r= a % b;
a = b;
b = r;

}
return a;


}
