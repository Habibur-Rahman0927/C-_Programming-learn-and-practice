
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
    float num1, num2, arithmatic;
    cout << "Enter Two Number = ";
    cin >> num1 >> num2;
    cout << showpoint;

    cout << fixed;
    cout << setprecision(1);
    arithmatic = num1 + num2;
    cout << setw(20) << "Sum is : " << arithmatic <<endl << endl;

    cout << noshowpoint;
    arithmatic = num1 - num2;
    cout << setw(20) << "Sub is : " << arithmatic <<endl << endl;

    arithmatic = num1 * num2;
    cout << setw(20) << "Multi is : " << arithmatic <<endl << endl;

    double arith = (float) num1 / num2; //type Casting
    cout << setw(20) << "division is : " << arith <<endl << endl;






    getch();
}
