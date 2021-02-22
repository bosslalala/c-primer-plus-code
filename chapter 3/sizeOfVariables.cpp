#include<iostream>

using namespace std;

int main(){
    int n_int;
    short n_short;
    char n_char;
    long n_long;
    long long n_llong;
    
    cout << "int is: " << sizeof(n_int)<<endl;
    cout << "short is: "<< sizeof(n_short)<<endl;
    cout << "char is: "<< sizeof(n_char)<<endl;
    cout << "long is: "<< sizeof(n_long)<<endl;
    cout << "long long is: " << sizeof(n_llong)<<endl;
    
    return 0; 
}