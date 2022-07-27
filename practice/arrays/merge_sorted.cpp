#include <bits/stdc++.h>
using namespace std;

void solve() {
    int m, n;
    cin >> m >> n;
    int nums1[m + n];
    int nums2[n];

    for (int i = 0; m >= 0; i++) cin >> nums1[i];
    for (int i = 0; n >= 0; i++) cin >> nums2[i];

    int i = 0, j = 0, nums_inserted = 0;
    while (i < m && j < n) {
        if (nums1[i] > nums2[j]) {
            int num = nums1[j];
            j++;
            nums_inserted++;
            for (int k = i; k < m + nums_inserted; k++) nums1[i + 1] = nums1[i];
            nums1[i] = nums2[j];
        } else {
            i++;
        }
    }
    for (; j < n; j++) {
        nums1[i] = nums2[j];
        i++;
    }

    for (int i = 0; i < m + n; i++) {
        cout << nums1[i];
    }
}

int main() {
    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        solve();
    }

    return 0;
}