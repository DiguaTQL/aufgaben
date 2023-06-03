#include <iostream>
using namespace std;

int main(void){
    int *px;
    px=new int[10];
    px[2]=5;

    cout << px [2] << endl;
    delete [] px;
    return 0;
}