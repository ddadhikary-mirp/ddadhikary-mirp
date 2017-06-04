
#include <iostream>
using namespace std;
int main () {
int i,j,n;
cout << "Enter numbers of rows:" ;
cin >> n;
cout << "The pattern is : \n" ;
for (i=1; i<=n;i++)
{
for (j=1;j<=n;j++)
{
cout << j*i;
}
cout << " " << endl;
}
return 0;
}
