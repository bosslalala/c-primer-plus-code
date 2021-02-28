//2021.2.28

#include<iostream>
#include<string>

int main(){
    using namespace std;

    struct pizza{
        string company_name;
        double diameter;
        double weight;
    };

    pizza a_pizza;
    cout << "Enter the pizz's company: ";
    getline(cin, a_pizza.company_name);
    cout <<"Enter ther pizza's diameter: ";
    cin >> a_pizza.diameter;
    cout <<"Enter the pizza's weight: ";
    cin >> a_pizza.weight;
    cout<<"pizza from "<<a_pizza.company_name<<endl;
    cout<<"pizza's diameter is: "<< a_pizza.diameter<<endl;
    cout<<"pizza's weight is: "<< a_pizza.weight<<endl;

    return 0;

}