//2021.2.28

#include<iostream>
#include<string>

using namespace std;

int main(){
    char first_name[20], last_name[20];
    char letter;
    int age;
    cout<<"What is your first name?";
    cin.getline(first_name,20);
    cout<<"What is your last name?";
    cin.getline(last_name,20);
    cout<<"What letter grade do you deserve?";
    cin >> letter;
    cout<<"What is you age?";
    cin >> age;
    cout<<"Name: "<<last_name<<", "<<first_name<<endl;
    cout<<"Grade: "<<++letter<<endl;
    cout<<"Age: "<<age<<endl;

    return 0;
    
}