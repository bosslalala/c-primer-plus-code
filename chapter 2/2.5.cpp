#include<iostream>

using namespace std;

void el_to_fah(int celsius);

int main(){
    cout<<"Please enter a Celsius value: ";
    int celsius;
    cin >> celsius;
    el_to_fah(celsius);
    return 0;
}
void el_to_fah(int celsius){
    cout<<celsius<<" degree Celsius is "<<1.8*celsius+32<<" degree Fahrenheit"<<endl;
}