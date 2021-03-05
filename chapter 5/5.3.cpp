// 2021.3.5

#include<iostream>

int main(){
    using namespace std;

    cout<<"Enter intergers, 0 quit"<<endl;
    int input;
    int sum = 0;
    cout<<"Enter new integer:";
    cin >> input;
    while(input != 0){
        sum += input;
        cout<<"current sums is:"<<sum<<endl;
        cout<<"Enter new integer:";
        cin >> input;
    }

    return 0;
}