#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    vector<long long> a(n);
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<long long, long long> remainder_count;
    remainder_count[0] = 1;  // Initial condition: a sum that is divisible by n from the start
    long long sum = 0;
    long long count = 0;

    for (long long i = 0; i < n; i++) {
        sum += a[i];

        // Calculate remainder, ensure it's non-negative
        long long remainder = ((sum % n) + n) % n;

        // If this remainder has been seen before, there are subarrays that are divisible by n
        if (remainder_count.find(remainder) != remainder_count.end()) {
            count += remainder_count[remainder];
        }

        // Increment the count for this remainder
        remainder_count[remainder]++;
    }

    cout << count << endl;

    return 0;
}