#include <iostream>
using namespace std;

int main()
{
    int t, i;
    float temp[100], sum=0.0, average;

    cout << "Enter the temperatures of data: ";
    cin >> t;

    while (t > 100 || t <= 0)
    {
        cout << "Error! temp should in range of (1 to 100)." << endl;
        cout << "Enter the temp again: ";
        cin >> t;
    }

    for(i = 0; i < t; ++i)
    {
        cout << i + 1 << ". Enter temp: ";
        cin >> temp[i];
        sum += temp[i];
    }

    average = sum / t;
    cout << "Average = " << average;

    return 0;
}

