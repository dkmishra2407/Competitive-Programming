#include <bits/stdc++.h>
using namespace std;

int solve() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    // Total amount of drink in milliliters
    int total_drink = k * l;
    // Total number of lime slices
    int total_slices = c * d;
    // Total number of toasts possible with drink
    int drink_toasts = total_drink / nl;
    // Total number of toasts possible with lime slices
    int lime_toasts = total_slices;
    // Total number of toasts possible with salt
    int salt_toasts = p / np;
    // Minimum of all toasts possible (drink, lime, salt)
    int max_toasts = min({drink_toasts, lime_toasts, salt_toasts});

    // Number of toasts each friend can make
    return max_toasts / n;
}

int main() {
    cout << solve() << endl;
    return 0;
}
