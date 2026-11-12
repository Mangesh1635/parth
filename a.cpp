
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

// Function to calculate average
double calculateAverage(const vector<int>& marks) {
    int total = accumulate(marks.begin(), marks.end(), 0);
    return static_cast<double>(total) / marks.size();
}

int main() {
    string name;
    vector<int> marks(5);

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter marks for 5 subjects:\n";

    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
    }

    double average = calculateAverage(marks);

    cout << "\n===== STUDENT REPORT =====\n";
    cout << "Name: " << name << endl;
    cout << "Average: " << average << endl;

    if (average >= 90)
        cout << "Grade: A\n";
    else if (average >= 75)
        cout << "Grade: B\n";
    else if (average >= 60)
        cout << "Grade: C\n";
    else
        cout << "Grade: Needs Improvement\n";

    return 0;
}

