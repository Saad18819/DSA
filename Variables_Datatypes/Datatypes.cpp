#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int age=21;
    char grade='A';
    bool isAdult = true;
    float cgpa = 6.71;
    double pi=3.14159265358979323846;
    float pi2=3.14159265358979323846;

    cout<<"The size of age variable is:"<<sizeof(age)<<endl;
    cout<<"The size of grade variable is:"<<sizeof(grade)<<endl;
    cout<<"The size of isAdult variable is:"<<sizeof(isAdult)<<endl;
    cout<<"The size of cgpa variable is:"<<sizeof(cgpa)<<endl;
    cout<<"The size of pi variable is:"<<sizeof(pi)<<endl;
    cout<<setprecision(10)<<pi<<endl;
    cout<<setprecision(10)<<pi2<<endl;
    return 0;
}