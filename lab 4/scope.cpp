#include <iostream>
using namespace std;

// Global variable declaration
int c = 12;

void test();

int main()
{
	    cout << ::c <<endl;

    ++c;

    // Outputs 13
    cout << c <<endl;
    test();

    return 0;
}

void test()
{
    ++c;

    // Outputs 14
    cout << c;
}
