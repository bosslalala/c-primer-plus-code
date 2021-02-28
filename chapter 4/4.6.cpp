//2021.2.28

#include<iostream>
#include<string>

int main(){
    using namespace std;

    struct CandyBar{
        string brand;
        double weight;
        int calorie;
    };

    CandyBar candys[3];
    candys[0] = {"Mocha Munch", 2.3, 350};
    candys[1] = {"big rabbit", 1.314, 10};
    candys[2] = {"wang wang", 5.20, 20};

    cout<<candys[0].brand<<" "<<candys[0].weight<<" "<<candys[0].calorie<<endl;
    cout<<candys[1].brand<<" "<<candys[1].weight<<" "<<candys[1].calorie<<endl;
    cout<<candys[2].brand<<" "<<candys[2].weight<<" "<<candys[2].calorie<<endl;
    return 0;
    
}