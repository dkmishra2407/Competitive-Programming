#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    int points[3] = {x1, x2, x3};

    sort(points, points + 3);

    int min_total_distance = points[2] - points[0];
    cout << min_total_distance << endl;
    
    return 0;
}
