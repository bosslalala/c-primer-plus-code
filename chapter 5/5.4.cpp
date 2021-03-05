//2021.3.5

#include<iostream>

int main(){
    using namespace std;

    double Daphne_value = 100;
    double Cleo_value = 100;
    int i ;
    for(i=1;Daphne_value>= Cleo_value; i++){
        Daphne_value += 10;
        Cleo_value *= 1.05;
    }
    cout<<"at "<<i<<" year, Cleo's value bigger then Daphne"<<endl;
    cout<<"Daphne: "<<Daphne_value<<endl;
    cout<<"Cleo_value: "<<Cleo_value<<endl;

    return 0;
}