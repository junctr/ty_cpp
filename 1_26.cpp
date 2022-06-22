#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int value[] = {-20, 10, 5, -40, 0, 10, -30};

    for (int i = 0; i < 7; ++i)
    {
        cout << "value[" << i << "]:" << value[i];

        if (value[i] < 0)
        {
            cout << " continue" << endl;

            continue;
        }

        if (value[i] == 0)
        {
            cout << " break" << endl;

            break;
        }

        cout << " elem = " << value[i] << endl;
    }

    cout << "end of loop" << endl;
} 