//2021.3.5

#include<iostream>

int main(){
    using namespace std;

    struct car{
        string manufacturer;
        int production_year;

    };

    car   *cars;
    int number;
    cout<<"How many cars dou you wish to catalog ?";
    cin >> number;
    cars = new car[number];
    for(int i=0; i< number; i++){
        cout<<"Car #"<<i+1<<":"<<endl;
        cout<<"Please enter the make:";
        cin>>cars[i].manufacturer;
        cout<<"Please enter the year make:";
        cin>>cars[i].production_year;
    }
    cout<<"Here is your collection:"<<endl;
    for(int i=0; i< number; i++){
        cout<<cars[i].production_year<<" "<<cars[i].manufacturer<<endl;
    }

    return 0;
}