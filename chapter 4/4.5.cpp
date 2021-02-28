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

    CandyBar snack = {"Mocha Munch", 2.3, 350};
    cout<<"snack's brand: "<<snack.brand<<endl;
    cout<<"snack's weight: "<<snack.weight<<endl;
    cout<<"snack's calorie: "<<snack.calorie<<endl;

    return 0;
    
}