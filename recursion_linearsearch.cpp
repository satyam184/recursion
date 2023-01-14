#include <iostream>
using namespace std;
bool linearsearch(int *arr, int n, int k)
{
    if (n == 0)
    {
        return false;
    }
    if (arr[0] == k)
    {
        return true;
    }
    else
    {
        bool reamaing = linearsearch(arr + 1, n-1, k);
        return reamaing;
    }
}
int main()
{
    int arr[5] = {2, 4, 5, 6, 7};
    int n = 5;
    int k;
    cin >> k;
    bool ans = linearsearch(arr, n, k);
    if (ans)
    {
        cout << "present";
    }
    else
    {
        cout << "absent";
    }
    return 0;
}