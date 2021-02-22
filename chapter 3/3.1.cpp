//2021.2.23

#include<iostream>

using namespace std;

int main(){
    const int factor = 12;
    int height = 0;
    cout<<"please input you height:__";
    cin>>height;
    cout<<"foot: "<<height/factor<<",inch: "<<height%factor<<endl;

    return 0;
}
