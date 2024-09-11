#include<iostream>
 using namespace std;
 struct fraction
 {
  int numerator ;
  int denominator;
 };
  int main()
  {
    cout << "Enter first fraction :";
   fraction first ;
   cin >> first.numerator ;
   cout << "/";
   cin >>first.denominator;
    cout << "Enter Second fraction : ";
    fraction second ;
   cin >> second.numerator ;
   cout << "/";
   cin >>second.denominator;
   fraction sum;
    sum.numerator = ((first.numerator * second.denominator ) + (first.denominator * second.numerator));
    sum.denominator = second.denominator * first.denominator ;
    cout << "Sum is = "  ;
    cout << sum.numerator << "/" << sum.denominator;
    return 0;
  }

