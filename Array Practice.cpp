#include <iostream>
using namespace std;

string allOdd(int a[][2], int x, int y) {
    for (int i = 0; i < x; i++)
      for (int j = 0; j < 2; j++)
        if (a[i][j] % 2 == 0) return "There is at Least One Even";

    return "All Odd";
}

int main() {
int x[2][2] = {{1,3}, {5,7}};
cout<< allOdd(x,2,2) << endl;

return 0;
}
