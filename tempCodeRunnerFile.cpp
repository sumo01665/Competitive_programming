#include <iostream>
using namespace std;
void WhatIsHappening( int );
int main()
{
    WhatIsHappening (54321);
    cout << endl;
    system("PAUSE");
    return 1;
}
void WhatIsHappening ( int a )
{
    if ( a/10 )
        WhatIsHappening (a/10);
    cout << ( a%10 ) << "*";
}