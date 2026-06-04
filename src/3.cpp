#include <bits/stdc++.h>

using namespace std;

vector<int> gradingStudents(vector<int> grades) {
    for (int i = 0; i < grades.size(); i++) {
        if (grades[i] >= 38) {
            int nextMultiple = ((grades[i] / 5) + 1) * 5;

            if (nextMultiple - grades[i] < 3) {
                grades[i] = nextMultiple;
            }
        }
    }

    return grades;
}

int main() {
    int n;
    cin >> n;

    vector<int> grades(n);

    for (int i = 0; i < n; i++) {
        cin >> grades[i];
    }

    vector<int> result = gradingStudents(grades);

    for (int grade : result) {
        cout << grade << endl;
    }

    return 0;
}
