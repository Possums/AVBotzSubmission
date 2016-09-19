#include <iostream>
#include <cmath>
using namespace std;
 
double x;
double y;
bool equationTwo = false;
bool equationOne = false;
double bestX,bestY;
bool found = false;
double a, b, c, d;
 
int main() {
//assume c comes first
    cout << "Enter the time difference between C and B";
    cin >> a;
    cout << "Enter the time difference between C and A";
    cin >> b;
    c = 1481 * a;
    d = 1481 * b;

    while (equationOne == false && equationTwo == false) {

        for (x = -5; x <= 10; x += .01) {

            for (y = -5; y <= 10; y += .01) {

                double ldc = std::sqrt(pow(0 - x, 2) + pow(1 - y, 2));
                double ldb = std::sqrt(pow(-0.5 - x, 2) + pow(0 - y, 2));
                double lda = std::sqrt(pow(0.5 - x, 2) + pow(0 - y, 2));
                double dc = ldc+ c;
                double db = ldc + d;

                if (fabs(dc - ldb) < 0.0001 && fabs(db - lda) < 0.0001) {
                    equationOne = true;

                    if (found == false) {
                        cout << x << endl;
                        cout << y << endl;

                        found = true;
                        break;
                    }
                }
            }
        }
    }
}
