#include<iostream>
using namespace std;
class EMPLOYEE
{
private:
char employeeName[60];
double employeeCode;

public:
void setemployeeInfo();
void getemployeeInfo();
};
void EMPLOYEE::setemployeeInfo(){
 cout << "Enter Employee Name : ";
 cin >> employeeName;
 cout << "Enter Employee Code: ";
 cin >> employeeCode;
}

void EMPLOYEE::getemployeeInfo(){
cout << "----- Employee information -----"<<endl;
cout << "Employee Name:" << employeeName<<endl;
cout << "Employee Code: " <<employeeCode<<endl;
}
int main()
{
    EMPLOYEE employee [100];
    int n;
    cout << "Enter a no of Employee : ";
    cin >> n;
    for(int p=0; p<n; p++)
    {
     employee [p].setemployeeInfo();
     }
    for(int p=0; p<n; p++)
    {
     employee [p].getemployeeInfo();
     }   
    return 0;
}
