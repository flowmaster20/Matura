#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main(){
int n,licz=0;
cin >> n;

for(int i =1;i < n*n;i =i*10){
    cout << i << endl;
    licz++;
    if ((n*n)%i == n){

        cout << "tak";
        cout << endl << licz;
        return 0;
    }

}
cout << "nie";
cout << endl << licz;
return 0;
}
