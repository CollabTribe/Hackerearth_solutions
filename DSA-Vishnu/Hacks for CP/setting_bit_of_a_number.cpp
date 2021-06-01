#include <iostream>

using namespace std;

void set(int &num, int pos)
{
    cout<< &num << " and " << num << '\n';
    num |= (1<<pos);
    cout<< &num << " and " << num << '\n';
}

int main()
{
    int num = 4, pos = 1;
    set(num,pos);
    cout << "the value is: " << (int)(num) << endl;
    return 0;
}
