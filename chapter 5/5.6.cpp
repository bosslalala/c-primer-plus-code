// 2021.3.5

#include<iostream>

int main(){
    using namespace std;

    string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int sales[3][12] = {};
    int sum[3] = {};
    for(int j=0; j<3; j++){
        cout<<"Enter the "<< j+1<<" year's data"<<endl;
        for(int i=0;i<12;i++){
            cout<<"Enter "<<months[i]<<" sale number:"<<endl;
            cin >> sales[j][i];
            sum[j] += sales[j][i];
        }
    }
    for(int i=1; i<=3; i++){
        cout<<"the "<<i<<" year sales number is : "<< sum[i-1]<<endl;
    }
    

    return 0;

}