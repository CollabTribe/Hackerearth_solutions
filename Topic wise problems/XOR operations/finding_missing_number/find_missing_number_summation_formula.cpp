#include <bits/stdc++.h>
using namespace std;

// Function to get the missing number
int getMissingNo(int a[], int n)
{

    int total = (n + 1) * (n + 2) / 2;
    for (int i = 0; i < n; i++)
        total -= a[i];
    return total;
}

// Driver Code
int main()
{
    int arr[] = { 1, 2, 4, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int miss = getMissingNo(arr, n);
    cout << miss;
}




// BELOW IS THE CODE WITH THE OVERFLOW OPTIMIZATION




#include <bits/stdc++.h>
using namespace std;

// a represents the array
// n : Number of elements in array a
int getMissingNo(int a[], int n)
{
    int i, total=1;

    for ( i = 2; i<= (n+1); i++)
    {
        total+=i;
        total -= a[i-2];
    }
    return total;
}

//Driver Program
int main() {
    int arr[] = {1, 2, 3, 5};
    cout<<getMissingNo(arr,sizeof(arr)/sizeof(arr[0]));
    return 0;
}
