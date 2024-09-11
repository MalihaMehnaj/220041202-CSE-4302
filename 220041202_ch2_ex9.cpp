#include<iostream>
 using namespace std;
  int main()
  {
    int a , b , c , d ,  sum1 = 0 , sum2 = 0 ;
    cout << "Enter first fraction :";
    cin >> a ;
    cout << "/";
    cin >> b ;
    cout << "Enter Second fraction : ";
    cin >> c ;
    cout << "/";
    cin >> d ;
    sum1 = ((a*d) + (b*c));
    sum2 = b*d ;
    cout << "Sum is = " << sum1 << "/" << sum2 ;
    return 0;
  }
