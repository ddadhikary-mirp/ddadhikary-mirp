#include <iostream>
#include <string>
using namespace std ;
int main () {
int n,number;
int max = -10000, smax = -10001;
cout << "Enter numbers of input" <<endl ;
cin >> n;
for (int i = 0; i<n ; ++i) {
cout << "Enter next number" << endl ;
cin >> number;
if (number > smax && number <= max)
{
smax = number;
max = max ;
}
else if (number > max) {
smax = max ;
max = number ;
}
}
cout << "Max is:" << max << "Smax is :" << smax << endl ;
}

