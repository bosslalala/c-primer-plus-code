// 2021.2.28

#include<iostream>
#include<array>

int main(){
    using namespace std;

    array<double, 3> grades;
    cout<<"Enter you 1 grade: ";
    cin >> grades[0] ;
    cout<<"Enter you 2 grade: ";
    cin >> grades[1] ;
    cout<<"Enter you 3 grade: ";
    cin >> grades[2] ;

    double average = (grades[0]+grades[1]+grades[2])/3;
    cout<<"your average grades: "<< average<<endl;

    return 0;

}
