#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct Point {
    double x, y;
};

double calculateTotalDistance(const vector<Point>& coordinates) {
    double total_distance = 0.0;
    for (size_t i = 0; i < coordinates.size() - 1; ++i) {
        double x1 = coordinates[i].x;
        double y1 = coordinates[i].y;
        double x2 = coordinates[i + 1].x;
        double y2 = coordinates[i + 1].y;
        double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        total_distance += distance;
    }
    return total_distance;
}

int sumOfNaturalNumbers(int n) {
    return n * (n + 1) / 2; // Summation formula
}

int main() {
    int N = 2;
    vector<Point> coordinates;
    
    for (int i = 0; i < N; ++i) {
        Point point;
        cout << "Enter x-coordinate for point " << (i + 1) << ": ";
        cin >> point.x;
        cout << "Enter y-coordinate for point " << (i + 1) << ": ";
        cin >> point.y;
        coordinates.push_back(point);
    }

    cout << "\nEntered Coordinates:\n";
    for (size_t i = 0; i < coordinates.size(); ++i) {
        cout << "Point " << (i + 1) << ": (" << coordinates[i].x << ", " << coordinates[i].y << ")\n";
    }

    double total_distance = calculateTotalDistance(coordinates);
    cout << "\nTotal distance traveled: " << total_distance << endl;

    int sum_of_numbers = sumOfNaturalNumbers(N);
    cout << "Sum of the first " << N << " natural numbers: " << sum_of_numbers << endl;

    return 0;
}