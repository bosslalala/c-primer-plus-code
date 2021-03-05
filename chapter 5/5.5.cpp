// 2021.3.5

#include<iostream>

int main(){
    using namespace std;

    string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int sales[12] = {};
    int sum = {};
    for(int i=0;i<12;i++){

        cout<<"Enter "<<months[i]<<" sale number:"<<endl;
        cin >> sales[i];
        sum += sales[i];
    }
    cout<<"the all year sales number is : "<< sum<<endl;

    return 0;

}