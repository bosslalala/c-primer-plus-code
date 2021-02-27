// 2021.2.25

#include<iostream>

using namespace std;

int main(){
    const double factor1 = 62.14;
    const double factor2 = 3.875;
    double mpg = {};
    double ration = {};
    cout<<"Enter mpg: ";
    cin >> mpg;
    ration = factor1/(mpg/factor2);
    cout<<" miles per gallon is: "<<ration<<endl;

    return 0;

}