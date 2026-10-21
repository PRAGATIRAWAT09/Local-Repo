#include<iostream>
using namespace std;
double calculatesalary(double basesalary){
    double bonus=5000;
    double finalsalary=basesalary+bonus;
    return finalsalary;
}
int main(){
    double base=20000;
    double total=calculatesalary(base);
    cout<<"Enter the base salary:"<<endl;
    cin>>base;
    double total=calculatesalary(base);
    cout<<"Base Salary:"<<base<<endl;
    cout<<"Final Salary:"<<total<<endl;
    return 0;
}