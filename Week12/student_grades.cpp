#include <iostream>
#include "array2d_funcs.h"
#include <cfloat>

using namespace std;
#define STUDENTS 3
#define SUBJECTS 2

int main () {
    string student_names[STUDENTS];
    string subjects[SUBJECTS];
    int student_points[STUDENTS][SUBJECTS];
    cout << "Please enter the name of each student:" << endl;
    for (int i = 0; i < STUDENTS; i++)
    {
        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> student_names[i];
    }
    cout << "Please enter the name of each subject: " << endl;
    for (int i = 0; i < SUBJECTS; i++)
    {
        cout << "Enter the name of subject " << i+1 << ": ";
        cin >> subjects[i];
    }
    cout << "You will be asked to enter points for each student" << endl;
    for (int i = 0; i < STUDENTS; i++)
    {
        cout << "Enter points for student " << student_names[i] << endl;
        for (int j = 0; j < SUBJECTS; j++)
        {
            cout << subjects[j] << ": ";
            cin >> student_points[i][j];
        }
    }
    printMatrix((int*)student_points, STUDENTS, SUBJECTS);
    cout << "Average for each student:"<<endl;
    int student_total;
    float avg;
    float lowest_avg = FLT_MAX; // +infinity
    float highest_avg = FLT_MIN; // -infinity
    for (int i = 0; i < STUDENTS; i++)
    {
        student_total = 0;
        for (int j=0; j < SUBJECTS; j++) {
            student_total += student_points[i][j];
        }
        avg = (float)student_total/SUBJECTS;
        cout << "Average for "<<student_names[i] << ": " << avg << endl;
        if (avg < lowest_avg)
            lowest_avg = avg;
        if (avg > highest_avg)
            highest_avg = avg;
    }
    cout << "Highest average in the class: " << highest_avg << endl;
    cout << "Lowest average in the class: " << lowest_avg << endl;
    return 0;
}