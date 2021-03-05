//2021.3.5

#include<iostream>

using namespace std;

int main(){
    int a ,b ;
    cout<<"Enter two integer numbers:"<<endl;
    cout<<"Enter a:";
    cin >> a;
    cout<<"Enter b:";
    cin >> b;

    int sum = {};
    for( ; a<=b; a++)
        sum += a;
    cout<<"the sum is : "<<sum;

    return 0;
}