/*
 Problem link: https://zerojudge.tw/ShowProblem?problemid=a148
 Status: AC
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(void) {
    int n;

    while (cin >> n) {
        double sum = 0;
        int temp;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            sum += temp;
        }

        if (sum / n > 59.0) {
            cout << "no" << endl;
        } else {
            cout << "yes" << endl;
        }
    }

    return 0;
}