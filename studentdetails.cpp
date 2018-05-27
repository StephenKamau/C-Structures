#include <iostream>
#include <cstring>
using namespace std;

/**structure to keep the
     * details of the students
     **/
struct Student
{
    string studentName;
    int rollNumber;
    int marksNetworking;
    int marksProgramming;
    int marksHTML;
};

int main()
{
    //constructing the array of the structure
    Student student[5];

    //loop to enter the details to the structure array
    int i;
    for (i = 0; i < 5; i++)
    {
        cout << "Enter the student name for student " << i + 1 << ": " << endl;
        cin >> student[i].studentName;
        cout << "Enter the roll number: " << endl;
        cin >> student[i].rollNumber;
        cout << "Enter the marks for networking: " << endl;
        cin >> student[i].marksNetworking;
        cout << "Enter the marks for programming: " << endl;
        cin >> student[i].marksProgramming;
        cout << "Enter the marks for HTML: " << endl;
        cin >> student[i].marksHTML;
    }

    //loop to output the data
    for (i = 0; i < 5; i++)
    {
        cout << "Student " << i + 1 << endl;
        cout << "Student Name: " << student[i].studentName << endl;
        cout << "Roll number: " << student[i].rollNumber << endl;
        cout << "Marks for networking: " << student[i].marksNetworking << endl;
        cout << "Marks for programming: " << student[i].marksProgramming << endl;
        cout << "Marks for HTML: " << student[i].marksHTML << endl;
    }
    return 0;
}