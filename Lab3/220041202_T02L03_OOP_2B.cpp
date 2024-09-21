#include<iostream>
using namespace std;

class RationalNumber
{
private:
    int numerator;
    int denominator;
public:

        void assign(int n , int d)
        {

            if (d != 0){
            numerator = n ;
            denominator = d;
            }
            else
                cout << "You can not assign 0 as  denominator" << endl;
        }

        int convert()
        {
            float conversion;
            conversion = (float)numerator / denominator;
             cout << "The converted number is :" << conversion << endl;
            return conversion;

        }

        int invert()
        {
            int temp = 0 ;
            if(numerator != 0)
            {
                temp = numerator;
                numerator = denominator;
                denominator = temp;
                cout << "The inverted number is :" << numerator << "/" << denominator  << endl;

               return 1;
            }
            else
                cout << "You can not assign 0 as  denominator" << endl << "Inversion Failed" << endl;
                return 0;
        }

        void print()
        {

            cout << "The Rational Number is " << numerator<< "/" << denominator << endl;
        }

};

int main()
{
    RationalNumber number1;

    number1. assign(2, 3);

    number1. convert();
    number1.invert();
    number1.print();
}
