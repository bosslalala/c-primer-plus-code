//2021.3.5

#include<iostream>
#include<cstring>

int main(){
    using namespace std;
    char str[20];
    cout<<"Enter words (to stop, type the word done)"<<endl;
    cin >> str;
    int i=0;
    while(strcmp(str,"done") != 0){
        //cout<<str<<endl;
        i++;
        cin>>str;
    }
    cout<<"You enter a total of "<<i<<" words"<<endl;
    return 0;
}