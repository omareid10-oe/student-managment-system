#include <iostream>
#include <string>
using namespace std;

class student {
    string name;
    int id;
    double gpa;

public:
    student() {
        name = "";
        id = 0;
        gpa = 0.0;
    }

    void setStudent(string sName, int sId, double sGpa) {
        name = sName;
        id = sId;
        gpa = sGpa;
    }

    void getStudent() {
        cout << "ID: " << id << " | Name: " << name << " | GPA: " << gpa << "\n";
    }

    void updateGpa() {
        double newGpa;
        cout << "Enter new GPA (0.0 to 4.0):\n";
        cin >> newGpa;
        if (newGpa >= 0.0 && newGpa <= 4.0) {
            gpa = newGpa;
            cout << "GPA updated successfully!\n";
        } else {
            cout << "Error: Invalid GPA value!\n";
        }
    }

    void checkStatus() {
        if (gpa >= 3.7) {
            cout << "Grade: A+\n";
        } else if (gpa >= 3.3) {
            cout << "Grade: A\n";
        } else if (gpa >= 3.0) {
            cout << "Grade: B+\n";
        } else if (gpa >= 2.7) {
            cout << "Grade: B\n";
        } else if (gpa >= 2.3) {
            cout << "Grade: C+\n";
        } else if (gpa >= 2.0) {
            cout << "Grade: C\n";
        } else if (gpa >= 1.0) {
            cout << "Grade: D\n";
        } else {
            cout << "Grade: F\n";
        }
    }
};

void displayStudentMenu() {
    cout << "Choose an option:\n";
    cout << "1. Update GPA\n";
    cout << "2. View Student Info\n";
    cout << "3. Check Grade\n";
    cout << "4. Exit\n";
}

int main() {
    cout << "========== Welcome to Student Management System ============\n";
    string name;
    int id;
    double gpa;

    cout << "Enter Student Name, ID, and GPA:\n";
    cin >> name >> id >> gpa;

    student s1;
    s1.setStudent(name, id, gpa);
    s1.getStudent();

    while (true) {
        displayStudentMenu();
        int choice;
        cin >> choice;

        switch (choice) {
        case 1:
            s1.updateGpa();
            break;
        case 2:
            s1.getStudent();
            break;
        case 3:
            s1.checkStatus();
            break;
        case 4:
            cout << "Exiting Student System......\n";
            break;
        }

        if (choice == 4) break;
        cout << "=======================\n";
    }

    return 0;
}