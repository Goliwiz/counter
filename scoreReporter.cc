#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

struct studentType{
    string firstName;
    string lastName;
    int testScore;
    char grade;
};

void readIn(studentType A[], int n);
char grade(int i);
int highestScore(studentType A[], int n);
string highestStudentName(studentType A[], int n);
void sort(studentType A[], int n);



int main(){
    int n;
    
    ofstream out;
    
    cout << "Enter size of array ";
    cin >> n;
    studentType A[n];
    readIn(A, n);

    for (int i = 0; i < n; i++)
    A[i].grade = grade(A[i].testScore);

    sort(A, n);

    out.open("classReport.txt");

    out << setw(20) << left << "First Name" << setw(20) << left << "Last Name" << setw(10) << "Score" << setw(2) << right << "Grade" << endl;
    for (int i = 0; i < n; i++)
    out << setw(20) << left << A[i].firstName << setw(20) << left << A[i].lastName << setw(10) << A[i].testScore << setw(2) << right << A[i].grade << endl;

    out << endl;
    out << "The student with the highest score is " << highestStudentName(A, n) << " with a score of " << highestScore(A, n);
    

    out.close();

    



    
    
    
    
    
    
    return 0;
}

void readIn(studentType A[], int n){
    
    ifstream in;
    in.open("studentData.txt");
    for (int i = 0; i < n; i++)
    in >> A[i].firstName >> A[i].lastName >> A[i].testScore;
    in.close();
}

char grade(int i){
    if (i >= 90)
    return 'A';
    else if (i >= 80)
    return 'B';
    else if (i >= 70)
    return 'C';
    else if (i >= 60)
    return 'D';
    else if (i >= 50)
    return 'E';
    else
    return 'F';
}

int highestScore(studentType A[], int n){
    int highest = A[0].testScore;
    for (int i = 0; i < n; i++)
    if (A[i].testScore > highest)
    highest = A[i].testScore;
    return highest;
}

string highestStudentName(studentType A[], int n){
    
    
    return A[0].firstName + " " + A[0].lastName;
}

void sort(studentType A[], int n){
    int largestIndex, position, i;
    studentType temp;
    for (i = 0; i < n-1; i++){
        largestIndex = i;
        for (position = i+1; position < n; position++)
        if (A[position].testScore > A[largestIndex].testScore)
        largestIndex = position;
        temp = A[largestIndex];
        A[largestIndex] = A[i];
        A[i] = temp;
    }
    

}