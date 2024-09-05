//Name: Saanvi
//Prn: 23070123110
//Class: EnTC B-2

#include<iostream>
#include<string>
using namespace std;

class Data {
    string name;
    int roll_no;
    char dept[50];
    int batch;

public:
    Data() {
        cout << "Name: ";
        cin >> name;
        cout << "Roll Number: ";
        cin >> roll_no;
        cout << "Department: ";
        cin >> dept;
        cout << "Batch: ";
        cin >> batch;
    }
    void display() {
        cout << endl << "DETAILS:" << endl << name << " " << roll_no << " " << dept << " " << batch << endl;
    }
};

int main() {
    Data d1;
    d1.display();
}