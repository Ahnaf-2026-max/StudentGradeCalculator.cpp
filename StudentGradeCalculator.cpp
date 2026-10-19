//Student Grade Calculator
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string name;
    float mark1, mark2, mark3, average;
    string grade;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter marks for 3 subjects: ";
    cin >> mark1 >> mark2 >> mark3;

    average = (mark1 + mark2 + mark3) / 3.0f;

    if (average >= 80) {
        grade = "A+";
    } else if (average >= 70) {
        grade = "A";
    } else if (average >= 60) {
        grade = "B";
    } else if (average >= 50) {
        grade = "C";
    } else if (average > 40) {
        grade = "D";
    } else {
        grade = "F";
    }

    cout << "\n--- Student Result ---\n";
    cout << "Name: " << name << '\n';
    cout << "Average: " << fixed << setprecision(2)
         << average << '\n';
    cout << "Grade: " << grade << '\n';

    if (average <= 40) {
        cout << "Status: Fail\n";
    } else {
        cout << "Status: Pass\n";
    }

    return 0;
}
