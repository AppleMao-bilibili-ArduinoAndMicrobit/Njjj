#include <iostream>
#include <cmath>
using namespace std;
typedef struct {
    int a;
    int b;
    int total1 = a + b;
    int total2 = (a - b < 0) ? b - a : a - b;
    int total3 = a * b;
    int total4 = ceil(a / b);
    int total5 = floor(a * b);
}Total;
int main() 
{ 
    Total total[10];
    for (int i = 0;i < 10;i++)
    {
        cin >> total[i].a >> total[i].b;
    }
    for (int i = 0;i < 10;i++)
    {
        cout << total[i].total1 << " " << total[i].total2 << " " << total[i].total3 << total[i].total4 << total[i].total5 << endl;
    }
    return 0;
}
// Updated on GitHub website
