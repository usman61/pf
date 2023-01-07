#include <iostream>
using namespace std;
int main()
{
int x;
cout << "Enter the data to be encrypted (4 digits) : " << endl;
cin >> x;
if( (x > 9999) || (x < 1000 ) ) {

cout << "Enter the correct data" << endl;
return main() ;
}
int a, b, c, d;
d = x % 10;
c = ( x / 10 ) % 10;
b = ( x / 100 ) % 10;
a = ( x / 1000 ) % 10;
d = (d + 7) %10;
c = (c + 7) %10;
b = (b + 7) %10;
a = (a + 7) %10;
cout << "Encryption is completed: " << c << d << a << b << endl << endl;
return 0;
}