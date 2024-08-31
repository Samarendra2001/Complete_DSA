// print Hollow rectangle

// *****
// *   *
// *****
#include <iostream>
using namespace std;

int main()
{
    
    for (int i = 0; i < 3; i++)
    {  //first row and last row print 4 *
        if (i == 0 || i == 2)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << "*";
            }
        }
        else
        {   //remaining middle rows
            cout << "*";
            //spaces
            for (int i = 0; i < 3; i++)
            {
              cout << " ";
             }
             //last *
             cout << "*";
        }
        //for next line
        cout << endl;
    }
    
}