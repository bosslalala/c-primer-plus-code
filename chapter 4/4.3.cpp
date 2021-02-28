//2021.2.28 

#include<iostream>
#include<cstring>

using namespace std;

int main(){
    char first_name[20];
    char last_name[20];
    char mid[] = ", ";
    char name[40] = {};
    cout<<"Enter you first name: ";
    cin.getline(first_name,20);
    cout<<"Enter your last name: ";
    cin.getline(last_name, 20);
    strcat(name,last_name);
    strcat(name,mid);
    strcat(name,first_name);
    cout << "Here's the information in a single string: "<<name<<endl;

    return 0;
}