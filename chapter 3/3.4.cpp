//2020.2.23

#include<iostream>

using namespace std;

int main(){
    long seconds = {};
    int days, hours, minutes, second = {};
    const int factor1 = 60;
    const int factor2 = 24;
    cout<<"Enter the number of seconds: ";
    cin >> seconds;
    second = seconds % factor1;
    minutes = seconds / factor1;
    hours = minutes /factor1;
    minutes %= factor1;
    days = hours/factor2;
    hours %= factor2;
    cout<<seconds<<" seconds = "<<days<<" days "<<hours<<" hours "<<minutes<<" minutes "<<second<<" seconds "<<endl;

    return 0;
}