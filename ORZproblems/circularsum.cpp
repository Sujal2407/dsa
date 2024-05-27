#include <iostream>
#include <climits>
using namespace std;

int kadane(int arr[], int n) {
    int maxEndingHere = 0, maxSoFar = INT_MIN;

    for (int i = 0; i < n; i++) {
        maxEndingHere = max(arr[i], maxEndingHere + arr[i]);
        maxSoFar = max(maxSoFar, maxEndingHere);
    }

    return maxSoFar;
}

int maxCircularSum(int arr[], int n) {
    int nonCircularMax = kadane(arr, n);

    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
        arr[i] = -arr[i];  // Invert the sign for step 4
    }

    int circularMax = totalSum + kadane(arr, n); // Step 4

    return max(circularMax, nonCircularMax);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int result = maxCircularSum(arr, n);
        cout << result << endl;
    }

    return 0;
}