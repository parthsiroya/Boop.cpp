#include <iostream>
using namespace std;
class StudentInfo
{
private:
    char name[50];
    double spi;

public:
    void setStudentInfo();
    void getStudentInfo();
    double getSPI()
    {
        return spi;
    }
};

void StudentInfo::setStudentInfo()
{
    cout << "Enter Student Name: ";
    cin >> name;
    cout << "Enter SPI: ";
    cin >> spi;
}

void StudentInfo::getStudentInfo()
{
    cout << name << " - "
         << spi << " spi" << endl;
}

int main()
{
    StudentInfo std[100];
    int n;
    int idx;
    double max;
    cout << "Enter no of Students: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        std[i].setStudentInfo();
    }
    max = std[0].getSPI();
    idx = 0;
    // cout << "------- Student Information ------" << endl;
    for (int i = 0; i < n; i++)
    {
        if (std[i].getSPI() > max)
        {
            max = std[i].getSPI();
            idx = i;
        }
    }

    std[idx].getStudentInfo();

    return 0;
}
