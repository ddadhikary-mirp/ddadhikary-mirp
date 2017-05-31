#include <iostream>
using namespace std;
int main() {
cout << "enter number";
int n;
cin >> n;
int a=n%1000;
int b=a/100;
int c=a-b*100;
int d=c/10;
int e=c%10;
cout << "sum= "<<b+d+e<<endl;
 return 0;
}

