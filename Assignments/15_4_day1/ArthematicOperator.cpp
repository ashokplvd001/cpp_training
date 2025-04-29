
/*
Description : Arthmetic operation program using
Author : Ashok G
DOC : 15-4-25
version : 0.1v
*/

#include <iostream>

using namespace std;

class ArthmeticCal
{
private:
    int a;
    int b;

public:
    ArthmeticCal(int a, int b)
    {
        cout << "Constructor called\n";
        this->a = a;
        this->b = b;
    }

    void add()
    {
        cout << "The addition of " << a << " and " << b << " (a+b) : " << a + b << endl;
    }

    void sub()
    {
        cout << "The subtraction of " << a << " and " << b << " (a-b) : " << a - b << endl;
    }

    void mul()
    {
        cout << "The multiplication of " << a << " and " << b << " (a*b) : " << a * b << endl;
    }

    void div()
    {
        try
        {
            if (b != 0)
                cout << "The division of " << a << " and " << b << " (a/b) : " << a / b << endl;
            else
                throw(b);
        }
        catch (int num)
        {
            cout << "Divisor cant be " << num << endl;
        }
    }

    void mod()
    {
        cout << "The modulo division of " << a << " and " << b << " (a%b) : " << a % b << endl;
    }
};

int main()
{
    while (1)
    {
        cout << "\n\n--------\nEnter the option 1)Add 2)Sub 3)Mul 4)Div 5)Mod 6)Quit\n\n";
        int opt;
        cin >> opt;

        if (opt == 6)
            break;

        int x, y;
        cout << "Enter a : ";
        cin >> x;
        cout << "Enter b : ";
        cin >> y;
        ArthmeticCal aobj(x, y);

        switch (opt)
        {
        case 1:
            aobj.add();
            break;
        case 2:
            aobj.sub();
            break;
        case 3:
            aobj.mul();
            break;
        case 4:
            aobj.div();
            break;
        case 5:
            aobj.mod();
            break;
        default:
            cout << "Invalid option";

            // sleep(1);
        }
    }
    return 0;
}