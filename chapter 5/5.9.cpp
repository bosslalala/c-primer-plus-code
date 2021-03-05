//2021.3.5

#include<iostream>
#include<string>

int main(){
    using namespace std;
    string str;
    cout<<"Enter words (to stop, type the word done)"<<endl;
    cin >> str;
    int i=0;
    while(str != "done"){
        //cout<<str<<endl;
        i++;
        cin>>str;
    }
    cout<<"You enter a total of "<<i<<" words"<<endl;
    return 0;
}