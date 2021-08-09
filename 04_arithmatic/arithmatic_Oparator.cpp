#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num1, num2, arithmatic;
    cout << "Enter Two Number = ";
    cin >> num1 >> num2;

    arithmatic = num1 + num2;
    cout << "Sum is : " << arithmatic <<endl << endl;

    arithmatic = num1 - num2;
    cout << "Sub is : " << arithmatic <<endl << endl;

    arithmatic = num1 * num2;
    cout << "Multi is : " << arithmatic <<endl << endl;

    double arith = (float) num1 / num2; //type Casting
    cout << "division is : " << arith <<endl << endl;

    arithmatic = num1 % num2;
    cout << "Remainder is : " << arithmatic <<endl << endl;





    getch();
}
