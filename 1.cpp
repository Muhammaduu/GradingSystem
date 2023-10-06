#include <iostream>
using namespace std;

int main() {
    int numSubjects = 5;
    int marks[numSubjects];
    
    // Input marks for each subject
    for (int i = 0; i < numSubjects; i++) {
        cout << "Enter marks for subject " << i + 1 <<;
        cin >> marks[i];
    }
    
    // Calculate mean percentage
    int totalMarks = 0;
    for (int i = 0; i < numSubjects; i++) {
        totalMarks += marks[i];
    }
    double meanPercentage = static_cast<double>(totalMarks) / (numSubjects * 100) * 100;
    
    // Determine division based on mean percentage
    string division;
    if (meanPercentage >= 70) {
        division = "First Class Honors";
    } else if (meanPercentage >= 60) {
        division = "Second Class Upper Division";
    } else if (meanPercentage >= 50) {
        division = "Second Class Lower Division";
    } else if (meanPercentage >= 40) {
        division = "Pass";
    } else {
        division = "Fail";
    }
    
    // Output the calculated division
    cout << "Division obtained by the student: " << division <<endl;
    
    return 0;
}
