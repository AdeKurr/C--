#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            // break;
            continue;
        }
        cout << i << endl;
    }
    cout << "End of the line" << endl;
    return 0;
}