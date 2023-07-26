#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;
void Addition();
void Subtraction();
void Multiplication();
void Division();
void Factorial();
void Power();
void Square();
void Cube();
void SquareRoot();
void Sin();
void Cos();
void Tan();
void Log();
void Baselog();
int main()
{
    cout << "\t WELCOME TO THE SCIENTIFIC CALCULATOR ==> DEVELOPED BY  @"
            "Darshal Jaitwar....!!"
         << endl;
    cout << "\t                  **** "
            " Press 0 To Qut The Program "
            " ****            "
         << endl;
    cout << "Enter 1 for Addotion\n";
    cout << "Enter 2 for Subtraction\n";
    cout << "Enter 3 for Multiplication\n";
    cout << "Enter 4 for Division\n";
    cout << "Enter 5 for Factorial\n";
    cout << "Enter 6 for Power\n";
    cout << "Enter 7 for Square\n";
    cout << "Enter 8 for Cube\n";
    cout << "Enter 9 for Squareroot\n";
    cout << "Enter 10 for sin\n";
    cout << "Enter 11 for Cos\n";
    cout << "Enter 12 for Tan\n";
    cout << "Enter 13 for log\n";
    cout << "Enter 14 for Base Log\n";
    int usear_choice;
    while (1)
    {
        cout << "Enter your choice ";
        cin >> usear_choice;

        switch (usear_choice)
        {
        case 1:
            Addition();
            break;
        case 2:
            Subtraction();
            break;
        case 3:
            Multiplication();
            break;
        case 4:
            Division();
            break;
        case 5:
            Factorial();
            break;
        case 6:
            Power();
            break;
        case 7:
            Square();
            break;
        case 8:
            Cube();
            break;
        case 9:
            SquareRoot();
            break;
        case 10:
            Sin();
            break;
        case 11:
            Cos();
            break;
        case 12:
            Tan();
            break;
        case 13:
            Log();
            break;
        case 14:
            Baselog();
            break;
        case 0:
            exit(0);
            break;
        default:
            cout << "\tWRONG CHOICE, Enter viaild choice\t<";
            break;
        }
    }
    return 0;
}
void Addition()
{
    cout << "Enter the numbers you want to add: ";
    int a, b;
    cin >> a >> b;
    cout << "The addition of " << a << " and " << b << " is " << a + b << endl;
}

void Subtraction()
{
    cout << "Enter the numbers you want to subtract: ";
    int a, b;
    cin >> a >> b;
    cout << "The subtraction of " << a << " and " << b << " is " << a - b << endl;
}

void Multiplication()
{
    cout << "Enter the numbers you want to multiply: ";
    int a, b;
    cin >> a >> b;
    cout << "The multiplication of " << a << " and " << b << " is " << a * b << endl;
}

void Division()
{
    cout << "Enter the numbers you want to divide: ";
    int a, b;
    cin >> a >> b;

    if (b != 0)
    {
        cout << "The division of " << a << " and " << b << " is " << static_cast<float>(a) / b << endl;
    }
    else
    {
        cout << "Cannot divide by zero!" << endl;
    }
}

void Factorial()
{
    cout << "Enter the number you want to find the factorial of: ";
    int n;
    cin >> n;

    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    cout << "The factorial of " << n << " is " << fact << endl;
}

void Power()
{
    cout << "Enter the base number: ";
    double base;
    cin >> base;

    cout << "Enter the exponent: ";
    double exponent;
    cin >> exponent;

    double power = pow(base, exponent);

    cout << "The power of " << base << " raised to the power of " << exponent << " is " << power << endl;
}

void Square()
{
    cout << "Enter the number you want to square: ";
    double a;
    cin >> a;

    double square = pow(a, 2);

    cout << "The square of " << a << " is " << square << endl;
}

void Cube()
{
    cout << "Enter the number you want to cube: ";
    double a;
    cin >> a;

    double cube = pow(a, 3);

    cout << "The cube of " << a << " is " << cube << endl;
}

void SquareRoot()
{
    cout << "Enter the number you want to calculate the square root of: ";
    double a;
    cin >> a;

    if (a >= 0)
    {
        double squareRoot = sqrt(a);
        cout << "The square root of " << a << " is " << squareRoot << endl;
    }
    else
    {
        cout << "Cannot calculate the square root of a negative number!" << endl;
    }
}

void Sin()
{
    cout << "Enter the angle in degrees: ";
    double a;
    cin >> a;

    double angleInRadians = a * 3.141593 / 180;

    cout << "The sine value of " << a << " degrees is " << sin(angleInRadians) << endl;
}
void Cos()
{
    cout << "Enter the angle in degrees: ";
    double a;
    cin >> a;
    double angleInRadians = a * 3.141593 / 180;
    cout << "The cosine value of " << a << " degrees is " << cos(angleInRadians) << endl;
}

void Tan()
{
    cout << "Enter the angle in degrees: ";
    double a;
    cin >> a;
    double angleInRadians = a * 3.141593 / 180;
    cout << "The tangent value of " << a << " degrees is " << tan(angleInRadians) << endl;
}

void Log()
{
    cout << "Enter the number you want to calculate the natural logarithm of: ";
    double a;
    cin >> a;
    if (a > 0)
    {
        double logarithm = log(a);
        cout << "The natural logarithm of " << a << " is " << logarithm << endl;
    }
    else
    {
        cout << "Cannot calculate the logarithm of zero or a negative number!" << endl;
    }
}
void Baselog()
{
    cout << "Enter the number you want to calculate the base-10 logarithm of: ";
    double a;
    cin >> a;

    if (a > 0)
    {
        double B = log10(a);
        cout << "The base-10 logarithm of " << a << " is " << B << endl;
    }
    else if (a == 0)
    {
        cout << "The base-10 logarithm of 0 is undefined." << endl;
    }
    else
    {
        cout << "Cannot calculate the base-10 logarithm of a negative number." << endl;
    }
}
