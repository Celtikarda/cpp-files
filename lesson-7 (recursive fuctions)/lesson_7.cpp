#include <iostream>
using namespace std;

int f(int a){
if (a>1) {
    return a * f(a-1);
}
return 1;
}

int main()
{
cout << f(7);

    return 0;
}
