//2021.2.25

#include<iostream>

using namespace std;

int main(){
    long long world_population, us_population = {};
    cout << "Enter the world's population: ";
    cin >> world_population;
    cout << "Enter the popultaion of the US:";
    cin >> us_population;
    double share = {};
    
    share = (us_population*100.0)/world_population;
    //cout<<world_population;
    //cout<<us_population<<endl;
    cout << "The population of the US is "<<share<<"% of ther world population."<<endl;

    return 0;
}