// //print this
//  	    * * * * *
//          *       *
//          *       *
//          *       *
//          *       *
//          * * * * *

#include <iostream>
using namespace std;
int main()
{
    // first row and last row
    for (int row = 0; row < 6; row++)
    {
        if (row == 0 || row == 5)
        {
            for (int col = 0; col < 5; col++)
            {
                cout << "*";
            }
        }
        else
        {
            cout << "*";
            for (int row = 0; row < 4; row++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
}