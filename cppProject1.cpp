#include <iostream>
using namespace std;
typedef struct {
    int a;
    int b;
    int total1 = a + b;
    int total2 = (a - b < 0) ? b - a : a - b;
    int total3 = a * b;
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
        cout << total[i].total1 << " " << total[i].total2 << " " << total[i].total3 << endl;
    }
    std::cout << "Hello from feature branch!" << std::endl;
    return 0;
}