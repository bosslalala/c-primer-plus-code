//2021.2.28

#include<iostream>
#include<string>

int main(){
    using namespace std;
    string first_name;
    string last_name;
    string name;

    cout<<"Enter your first name: ";
    getline(cin, first_name);
    cout<<"Enter your last name: ";
    getline(cin, last_name);
    name = last_name+", "+first_name;
    cout<<"Here's the information in a single string: "<<name;

    return 0;
}