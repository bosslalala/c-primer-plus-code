//2020.2.23

#include<iostream>

using namespace std;

int main(){
    int degrees, minutes, seconds = {};
    double degree = {};
    const double factor = 60.0;
    cout<<"Enter a latitude in degrees, minutes, seconds: "<<endl;
    cout<<"First, enter the degrees: ";
    cin>>degrees;
    cout<<"Next, enter the minutes of arc: ";
    cin>>minutes;
    cout<<"Finally, enter the seconds of arc: ";
    cin>>seconds;
    degree += degrees + minutes/factor + seconds/factor/factor;
    cout<<degrees<<" degrees, "<<minutes<<" minutes, "<<seconds<<" seconds = "<<degree<<" degrees."<<endl;

    return 0;
}