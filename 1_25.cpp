#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int value[] = {-20, 10, 5, -40, 0, 10, -30};

    int i = 0;

    while (i < 7)
    {
        cout << "value[" << i << "]:" << value[i];

        if (value[i] < 0)
        {
            cout << " continue" << endl;

            ++i;

            continue;
        }

        if (value[i] == 0)
        {
            cout << " break" << endl;

            break;
        }

        cout << " elem = " << value[i] << endl;

        ++i;
    }

    cout << "end of loop" << endl;
} 