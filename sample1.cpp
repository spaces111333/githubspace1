#include <iostream>
#include <conio.h>
#include <vector>
#include <cstring>
using namespace std;
int main()
{
 string a,b;
 getline(cin,a);
 getline(cin,b);
 int len1 = a.size();
 int len2 = b.size();
char x[len1 +1];
char y[len2 + 1];
 strcpy(x,a.c_str());
 strcpy(y,b.c_str());
 cout << len1 << " " <<len2 << endl;
 cout << a+b << endl;
 x[0] = b[0] ;
 y[0] = a[0] ;
 cout << x << " " << y ;
}