//2020.2.23

#include<iostream>

using namespace std;

int main(){
    const int factor1 = 12;
    const double factor2 = 0.0254;
    const double factor3 = 2.2;
    int foot,inch = {};
    double pound,meter,kilogram = {};
    cout<<"input your height like 12 foot 3 inch"<<endl;
    cin >> foot >> inch;
    cout<<"input your weith like 8 pound"<<endl;
    cin >> pound;
    inch += foot * factor1;
    meter = inch*factor2;
    kilogram = pound*factor3;
    double bmi = (kilogram/meter)*(kilogram/meter);
    cout<<"your bmi is: "<<bmi<<endl;

    return 0;
}