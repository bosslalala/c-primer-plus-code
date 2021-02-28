//2021.2.28

#include<iostream>
#include<string>

using namespace std;

int main(){
    string name ;
    string dessert;

    cout << "Enter your name:\n";
    getline(cin,name);
    cout << "Enter your favorite dessert:\n";
    getline(cin,dessert);
    cout << "I have some dielicious " << dessert;
    cout << " for you, "<< name << ".\n";

    return 0;
}