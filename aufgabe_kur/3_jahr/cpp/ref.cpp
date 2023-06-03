#include <iostream>     // für cout und cin
using namespace std;    // damit man nicht std::cout schreiben muss

void setnull(int &a){
    if (a == 7 ) {
        a = 99;
    }
    else {
    a=0;
    }
}

int main(void){
    int x;
    int &rx = x ;       // rx ist ein neuer Name für x
    int &tx = rx;       // tx ist ein neuer Name für rx
    x=3;
    rx = 5;
    cout << x << endl;
    tx = 7;
    cout << x << endl;
    setnull(tx);
    cout << x << endl;
    cout << rx << endl;


    return 0;
}