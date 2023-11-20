#include <iostream>
#include <cmath>
using namespace std;

string pot(int n1)
{
    string c;
    float b = sqrt(n1);
    int a = sqrt(n1);
    if (a<b or n1<0)
    {
        c = "nao e um quadrado perfeito";
    }
    else
    {
        c = "e um quadrado perfeito";
    }
    return c;
}
int main()
{
    int x;
    cin >> x;
    cout << pot(x);
    return 0;
}
