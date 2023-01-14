#include <iostream>
using namespace std;
int sumarray(int *arr, int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return arr[0];
    }
    int remainpart = sumarray(arr + 1, n - 1);
    int sum = arr[0] + remainpart;
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = sumarray(arr, n);
    cout << "sum is " << sum;
}