/*MY name:Hala Siddig
Class:Level 2
Department:Computer Engineering
*/
#include <iostream>
#include<string>
#include <fstream>

using namespace std;

int main() {
    int total = 10;
    string names[total];
    string departments[total];
    string grades[total];
    for (int studentI = 0; studentI < 10; ++studentI) {
        char y;
        int _grade;
        string grade;
        string name;


        cout << "enter name: ";
        cin >> name;


        cout << "enter the _grade:";
        int avg = 0;
        for (int i = 0; i < 8; ++i) {
            cin >> _grade;
            avg += _grade;
        }

        avg = avg / 8;

        if ((avg >= 90) && (avg) <= 100)
            grade = "A";
        else if ((avg < 90) && (avg) >= 80)
            grade = "B";
        else if ((avg < 80) && (avg) >= 70)
            grade = "C";
        else if ((avg < 70) && (avg) >= 60)
            grade = "D";
        else if ((avg < 60) && (avg) >= 50)
            grade = "F";


        cout << "enter the Department: ";
        string department;
        cin >> y;
        if (y == 'A')
            department = "Control Department";
        else if (y == 'T')
            department = "Communication Department";
        else if (y == 'c')
            department = "computer Department";
        else
            department = "Error";
        names[studentI] = name;
        departments[studentI] = department;
        grades[studentI] = grade;
    }
    ofstream file("out.txt");
    for (int i = 0; i < total; ++i) {
        file << "name: " << names[i] << endl;
        file << "grade: " << grades[i] << endl;
        file << "department: " << departments[i] << endl;
    }

    return 0;
}
