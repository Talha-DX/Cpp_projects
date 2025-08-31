#include <iostream>
using namespace std;


double calculateBill(int units)
{
    double energyCharge, meterCharge, netBill, vat, totalBill;

    if (units <= 300)
    {
        energyCharge = 27.14;
        meterCharge = 15;
    }
    else if (units <= 400)
    {
        energyCharge = 32.03;
        meterCharge = 20;
    }
    else if (units <= 500)
    {
        energyCharge = 35.25;
        meterCharge = 25;
    }
    else if (units <= 600)
    {
        energyCharge = 36.66;
        meterCharge = 30;
    }
    else
    {
        energyCharge = 37.8;
        meterCharge = 35;
    }

    netBill = units * energyCharge + meterCharge;
    vat = 0.05 * netBill;
    totalBill = netBill + vat;
    return totalBill;
}

int main()
{
    int units;
    cout << "Enter the units consumed in a month: ";
    cin >> units;
    cout << "The total electricity bill for the month is: " << calculateBill(units) << " rupees" << endl;
    return 0;
}

