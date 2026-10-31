#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){

setlocale(LC_ALL, "Russian");

float x, y;

cin >> x >> y;

float R = asin(y / x);
float S = exp(-3 * x) + cbrt(y);

cout << "R = " << R << endl;
cout << "S = " << S << endl;

float C = max(R, S);

cout << "C = " << C << endl;

system("pause");

return 0;

}


