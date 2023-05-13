#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int x;
    string s;
    x=5;
    cin >> x;
    //cin >> s;
    getline(cin,s); 
    cout << "Hello World!" << x << s << endl;
    return 0;
}