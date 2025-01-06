#include <iostream>

using namespace std;

int main(void) {
    int a;
    int b;
    cin >> a >> b;
    
    string star;
    for(int i = 0; i < a; i++)
    {
        star += "*";
    }
    
    for(int j = 0; j < b; j++)
    {
        cout << star << endl;
    }

    return 0;
}