// Chapter 5, Programming Challenge 17: Sales Bar Chart
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    const int NUM_STORES = 5;
    int sales[NUM_STORES];

    for (int i = 0; i < NUM_STORES; i++)
    {
        cout << "Enter sales for store " << i + 1 << ": ";
        cin >> sales[i];
    }

    cout << "\nSALES BAR CHART\n";
    cout << "(Each * = $100)" << endl;

    for (int i = 0; i < NUM_STORES; i++)
    {
        cout << "Store " << i + 1 << ": ";
        
        int stars = sales[i] / 100;

        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
        
    return 0;
}
