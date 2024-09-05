//Name: Saanvi
//Prn: 23070123110
//Class: EnTC B-2

#include<iostream>
using namespace std;

class student
{
    int rollno;
    char name[50];
    double fee;
public:
    student()
    {
        cout << "Enter the RollNo: ";
        cin >> rollno;
        cin.ignore();
        cout << "Enter the Name: ";
        cin.getline(name, 50);
        cout << "Enter the Fee: "; 
        cin >> fee;
    }
    void display()
    {
        cout << endl << rollno << "\t" << name << "\t" << fee;
    }
};

int main()
{
    student s; 
    s.display();
    return 0;
}