#include <iostream>

using namespace std;

bool isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int daysInMonth(int month, int year)
{
    switch (month)
    {
        case 2:
            return isLeapYear(year) ? 29 : 28;
        case 4: case 6: case 9: case 11:
            return 30;
        default:
            return 31;
    }
}

int calculateDifference(int d1, int m1, int y1, int d2, int m2, int y2)
{
    int days1 = d1;
    for (int i = 1; i < m1; i++)
        days1 += daysInMonth(i, y1);
    days1 += y1 * 365 + y1 / 4 - y1 / 100 + y1 / 400;

    int days2 = d2;
    for (int i = 1; i < m2; i++)
        days2 += daysInMonth(i, y2);
    days2 += y2 * 365 + y2 / 4 - y2 / 100 + y2 / 400;

    return abs(days2 - days1);
}

int main()
{
    int d1, m1, y1, d2, m2, y2;

    cout << "Enter first date (day month year): ";
    cin >> d1 >> m1 >> y1;

    cout << "Enter second date (day month year): ";
    cin >> d2 >> m2 >> y2;

    cout << "Difference in days: " << calculateDifference(d1, m1, y1, d2, m2, y2) << endl;

    return 0;
}
