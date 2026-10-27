
// Mason Ayala
// Homework 9 - Menu

#include <iostream>
using namespace std;

double average(const int a[], int n)
{
    if (n == 0)
    {
        return 0;
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    return (double)sum / n;
}

int high(const int a[], int n)
{
    if (n == 0)
    {
        return 0;
    }

    int max = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    return max;
}

void printSummary(double avg)
{
    cout << "Average: " << avg << "\n";
}

void printMenu()
{
    cout << "1) Average  2) High  3) Quit\n";
    cout << "Choice: ";
}

int main()
{
    const int N = 4;
    int scores[N] = { 80, 90, 70, 100 };
    int choice = 0;

    do
    {
        printMenu();
        cin >> choice;

        if (choice == 1)
        {
            double avg = average(scores, N);
            printSummary(avg);
        }
        else if (choice == 2)
        {
            cout << "High: " << high(scores, N) << "\n";
        }

    } while (choice != 3);

    return 0;
}
