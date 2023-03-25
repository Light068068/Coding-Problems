#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter no.of soldier:";
    cin >> n;
    int arr[n];
    cout << "Enter weapon for " << n << " soldiers:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count_lucky = 0, count_unlucky = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count_lucky++;
        }
        else
        {
            count_unlucky++;
        }
    }
    if (count_lucky > count_unlucky)
    {
        cout << "Ready for Battle!" << endl;
    }
    else
    {
        cout << "Not Ready" << endl;
    }
}
