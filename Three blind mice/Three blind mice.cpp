#include <iostream>
using namespace std;

void mice();
void see();

int main()
{
    mice();
    mice();
        see();
        see();
}

void mice()
{
    cout << "Three blind mice" << endl;
}

void see()
{
    cout << "See how they run" << endl;
}