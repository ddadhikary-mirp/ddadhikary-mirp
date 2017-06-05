#include <iostream>
#include <cmath>
using namespace std;
int main () {
int n, sum = 0, i=1;
cout << "Enter the times of number:" << endl;
cin >> n;
while (i < n) {
sum += 6/i^2;
i+=1;
}
cout << "The sum upto " << n << "is" << sum << endl;
return 0;
}
