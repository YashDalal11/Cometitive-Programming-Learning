#include <iostream>
using namespace std;
void test();
int main()
{
    test();
    test();

    return 0;
}
void test()
{
    static int var = 0;
    var++;
    cout << var << endl;
}