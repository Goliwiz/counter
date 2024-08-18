#include <iostream>

using namespace std;

int main(){
    int x;
    char ch;

    

    do{
    cout << "Enter an integer: ";
    cin >> x;
    if (x >= 0){
        for (int i = 0; i <= x; i++)
        cout << i << " ";
    }

    else {
        for (int i = 0; i >= x; i--)
        cout << i << " ";
    }

    cout << endl;
    cout << "Continue? ";
    cin >> ch;
    }

    while(ch == 'y');

    


    return 0;
}