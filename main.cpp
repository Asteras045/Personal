#include <iostream>
#include <ios>
#include <iomanip>

using namespace std;

int main() {
    // First semester
    cout << "Enter your first semester grades (Press enter for each new grade and write \"End\" to stop): ";

    streamsize prec = cout.precision();
    double grades1;
    double sum1 = 0;
    int count1 = 0;

    while (cin >> grades1) {
        count1++;
        sum1 += grades1;
    }

    cout << "Your first semester average is: " << setprecision(3) << sum1 / count1 << setprecision(prec) << endl << endl;

    // Clear 'cin' and ignore the invalid 'end-of-file' string input
    if (cin.fail()) {
        cin.clear();
        std::cin.ignore(1000, '\n');
    }

    // Second semester
    cout << "Enter your second semester grades (Press enter for each new grade and write \"End\" to stop): ";

    double grades2;
    double sum2 = 0;
    int count2 = 0;

    while (cin >> grades2) {
        count2++;
        sum2 += grades2;
    }

    cout << "Your second semester average is: " << setprecision(3) << sum2 / count2 << setprecision(prec) << endl;

    // Average of two semesters
    cout << "Your two semester average is: " << setprecision(3) << (sum1 / count1 + sum2 / count2) / 2 << setprecision(prec) << endl;

    return 0;
}
