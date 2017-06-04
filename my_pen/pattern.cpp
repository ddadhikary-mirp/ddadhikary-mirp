#include <iostream>
using namespace std;
int main () {
int n,m;
cout << "Enter the number:" ;
cin >> n;
for (int i = 0; i<=n ;i++) {
for (int a = 1; a<= (n-i+1); a++) {
cout <<  "*" ;
}
for (int a = i; a>=1; a--) { ;
m = 1;
cout << "1" ;
}
m+=1;
cout<<endl;
}
return 0;
}
