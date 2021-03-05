// 2021.3.4

#include<iostream>

using namespace std;

int main(){
    int i = 5;
    int x = 4;
    cout << x * i++<<endl;
    cout << i <<endl;
    cout << x * ++i<<endl;
    cout << i<<endl;

    return 0;
}