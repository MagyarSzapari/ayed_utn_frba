/*
*/

#include <iostream>

using namespace std;

int main(){
    int numeros1[] = {1,2,3,4,5},
        numeros2[5];

    for(int i=0; i<5; i++){
        numeros2[i] = numeros1[i]*2;
    }

    for(int i=0; i<5; i++){
        cout << numeros2[i] << endl;
    }

    return 0;
}
