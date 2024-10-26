#include <iostream>
#include <vector>

using namespace std;

// Function to calculate CGPA
float calculateCGPA(const vector<int>& grades, const vector<int>& credits) {
    float totalPoints = 0.0;
    int totalCredits = 0;

    for (size_t i = 0; i < grades.size(); ++i) {
        totalPoints += grades[i] * credits[i];
        totalCredits += credits[i];
    }

    return totalCredits > 0 ? totalPoints / totalCredits : 0.0;
}

int main() {
    int numSubjects;

    cout << "Enter the number of subjects: ";
    cin >> numSubjects;

    vector<int> grades(numSubjects);
    vector<int> credits(numSubjects);

    // Input grades and credits for each subject
    for (int i = 0; i < numSubjects; ++i) {
        cout << "Enter grade for subject " << (i + 1) << ": ";
        cin >> grades[i];
        cout << "Enter credits for subject " << (i + 1) << ": ";
        cin >> credits[i];
    }

    float cgpa = calculateCGPA(grades, credits);

    cout << "Your CGPA is: " << cgpa << endl;

    return 0;
}
