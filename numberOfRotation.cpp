#include <iostream>
using namespace std;
int rotation(int arr[], int n)
{
    int st = 0;
    int en = n - 1;
    while (st <= en)
    {
        int mid = st + (en - st) / 2;
        int next = (mid + 1) % n;
        int prev = (mid - 1 + n) % n;
        if ((arr[mid] <= arr[next]) && (arr[mid] <= arr[prev]))
            return mid;
        if (arr[mid] <= arr[st])
        {
            st = mid + 1;
        }
        if (arr[mid] <= arr[en])
        {
            en = mid - 1;
        }
    }
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
    cout << rotation(arr, n);
    return 0;
}