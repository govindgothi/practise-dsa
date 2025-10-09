// 18_printGlobleZeroAndOne.cpp
// print globle zero and one
#include <iostream>
using namespace std;

int main()
{
    int row = 4;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                if (j % 2 == 0)
                {
                    cout << 1 << " ";
                }
                else
                {
                    cout << 0 << " ";
                }
            }
            else
            {
                if (j % 2 != 0)
                {
                    cout << 1 << " ";
                }
                else
                {
                    cout << 0 << " ";
                }
            }
        }
        cout << endl;
    }
}