#include <iostream>
using namespace std;
int main()
{
int x, y, z;
cin >> x;
cin >> y;
if (x>0)
    {
    if (y>0) z=1;
    else z=4;
    }
else if (x<0)
    {
    if (y>0) z=2;
    else z=3;
    }
cout << z;
return 0;
}
