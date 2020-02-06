#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int space = 10;
    int asterisk = 1;
    
    while (space)
    {
        int innerSpace = space;
        int innerAsterisk = asterisk;
        
        for (innerSpace; innerSpace != 0; innerSpace--)
        {
            cout << " ";
        }
        
        cout << space << endl;
        
        for (innerAsterisk; innerAsterisk != 0; innerAsterisk--)
        {
            cout << "*";
        }
        
        cout << endl;
        
        space -= 1;
        asterisk += 2;
    }
    
    return 0;
}
