//2021.2.25

#include<iostream>

using namespace std;

int main(){
    double miles, gallons = {};
    cout<<"Enter the miles: ";
    cin>>miles;
    cout<<"Enter the gallons: ";
    cin>>gallons;
    double ration = {};
    ration = miles/gallons;
    cout<<"miles per gallon is :"<<ration<<endl;

    return 0;
}