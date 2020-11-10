/*MY name:Hala Siddig
Class:Level 2
Department:Computer Engineering
*/
#include <iostream>
#include<string>

using namespace std;

int main() {
    char y;
    int grade;


   
for(int z=0;z<5;z=z+1){
 cout << "enter name: ";
    string name;
    cin >> name;


    cout << "enter the grade:";
    cin >> grade;
    if ((grade >= 90) && (grade) <= 100)
        cout << "A\n";
    else if ((grade < 90) && (grade) >= 80)
        cout << "B\n";
    else if ((grade < 80) && (grade) >= 70)
        cout << "C\n";
    else if ((grade < 70) && (grade) >= 60)
        cout << "D\n";
    else if ((grade < 60) && (grade) >= 50)
        cout << "F\n";


    cout << "enter the Department: ";
    cin >> y;
    if (y == 'A')
        cout << "Control Department" << endl;
    else if (y == 'T')
        cout << "Communication Department" << endl;
    else if (y=='c')
        cout << "computer Department" << endl;
    else
        cout << "Error";


}
    return 0;
}
