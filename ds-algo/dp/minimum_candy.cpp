#include <cinttypes>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits>
using namespace std;

struct student_t {
    int candy;
    const int rating;
};

uint64_t minimum_candy(vector<student_t>& students) {  
    for (int i = 0; i < students.size() - 1; i++) {
        if (students[i + 1].rating > students[i].rating) {
            students[i + 1].candy = students[i].candy + 1;
        }
    }
    for (int i = students.size() - 1; i > 0; i--) {
        if (students[i - 1].rating > students[i].rating && students[i - 1].candy <= students[i].candy) {
            students[i - 1].candy = students[i].candy + 1;
        }
    }
    uint64_t minimum = 0;
    for (auto& student : students) {
        minimum += student.candy;
    }
    return minimum;
}

int main() {
    int N = 0;
    cin >> N;
    // students with higher ranking must have more candy than students to both
    // their left and right positions
    vector<student_t> students;
    students.reserve(N);
    for (int i = 0; i < N; i++) {
        int rating = 0;
        cin >> rating;
        students.push_back({1, rating});
    }
    cout << minimum_candy(students) << endl;
    return 0;
}
