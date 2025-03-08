#include <iostream>
using namespace std;

int main() {
    int units;  // Initialize units to avoid uninitialized variable issue
    float input , result;

    while (units != 5) {

        cout << "What do you want to convert:" << endl;
        cout << "1: Kilometers to miles" << endl;
        cout << "2: Celsius to Fahrenheit" << endl;
        cout << "3: Kilograms to pounds" << endl;
        cout << "4: Liters to gallons" << endl;
        cout << "5: Exit Program" << endl;
        cout<<"Enter your choice:";
        cin >> units;

        switch (units) {
            case 1:
                
                cout << "Enter Distance in kilometer:" << endl;
                cin >> input;
                result = input * 0.621371;
                cout << "After converting distance in miles will be = " << result << endl;
                cout << "__________________________________________________" << endl;
                break;

            case 2:
                
                cout << "Enter Celsius:" << endl;
                cin >> input;
                result = (input * 9.0 / 5.0) + 32;
                cout << "After converting Celsius, Fahrenheit will be = " <<result << endl;
                cout << "__________________________________________________" << endl; // <-- semicolon added here
                break;

            case 3:
                cout << "Enter weight in kilogram:" << endl;
                cin >> input;
                result = input * 2.20462;
                cout << "After converting weight in pounds will be = " << result << endl;
                cout << "__________________________________________________" << endl;
                break;

            case 4:

                cout << "Enter Liters:" << endl;
                cin >> input;
                result = input * 0.264172;
                cout << "After converting Gallons will be = " << result << endl;
               cout << "_____________________________________________________" << endl;
                break;

            case 5:
                cout << "Program is Closed...." << endl;
                break;

            default:
                cout << "You entered a wrong number..." << endl;
                break;
        }
    }

    return 0;
}
