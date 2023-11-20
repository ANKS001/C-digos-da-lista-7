#include <iostream>
using namespace std;
int verificarN(int n) {
if (n > 0) {
return 1;
}
if (n < 0) {
return -1;
}
if (n == 0) {
return 0;
}
}
int main() {
int h;
cin >> h;
cout << verificarN(h);
return 0;
}
