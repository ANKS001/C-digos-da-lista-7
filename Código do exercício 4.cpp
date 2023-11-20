#include <iostream>
#include <cmath>
using namespace std;

int pot(int n1,int n2)
{
    int a = pow(n1,n2);
    return a;
}
int main()
{
    int x;
    int z;
    cin >> x >> z;
    cout << pot(x,z);
    return 0;
}
