#include <iostream>
#include <stdio.h>
using namespace std;
//Faça uma função que receba dois números e retorne qual deles é o maior.
int maior(int x, int y)
{
    int z;
      if (x>y)
      {
      z = x;
      }
      else
      {
      z = y;
      }
    return z;
}
int main()
{
      int a;
      int b;
      cin>>a>>b;
      cout<<maior(a,b);
return 0;
}
