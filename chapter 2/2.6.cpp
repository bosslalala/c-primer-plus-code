#include<iostream>

using namespace std;

void light_years(double light);

int main(){
    double light;
    cout<<"Enter the number of light years: ";
    cin >> light;
    light_years(light);
    return 0;
}

void light_years(double light){
    cout<<light<<" light years = "<<63240*light<<" astronomical units."<<endl;      
}