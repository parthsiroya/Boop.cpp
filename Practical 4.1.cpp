#include<iostream>
using namespace std;
int a,b;
void sort(int &a, int &b){
    if(a>=b){
        int temp = a;
        a=b;
        b = temp; 
    }
}

int main()
{
    cout << "Enter value of a:" << endl;
    cin >> a;
    cout << "Enter value of b:" << endl;
    cin >> b;
    sort (a,b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
}
