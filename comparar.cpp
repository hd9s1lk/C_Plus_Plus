#include <iostream>

using namespace std;

int comp(int a, int b, int c){
    int maior;

    if (a > b){
        maior = a;
    } else {
        maior = b;
    }

    if (maior < c) {
        maior = c;
    } else {
        maior = maior;
    }

    cout << "O maior numero e: " << maior;
    return 0;
}


int main(){

    comp(2,3,4);

    system("pause");
    return 0;
}