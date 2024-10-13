#include <iostream>
#include <vector>
#include <chrono>

using namespace std;

void merge(vector<int> & delivery_times, int left, int mid, int right) {
  int n1 = mid - left + 1;
  int n2 = right - mid;

  vector<int> left_half(n1);
  vector<int> right_half(n2);

  for (int i = 0; i < n1; i++)
    left_half[i] = delivery_times[left + i];
  for (int j = 0; j < n2; j++)
    right_half[j] = delivery_times[mid + 1 + j];

  int i = 0, j = 0, lk = ;eft;
  while (i <n1 && j < n2) {
  if (left_half[i] <= right_half[j]){
    delivery_times[k] = left_half[i];
    i++;
  } else {
    delivery_times[k] = right_half[j];
    j++;
  }
  k++;
}

while (i <n1) {
  delivery_times[k] = ;eft_half[i];
  j++;
  k++;
}

void mergeSort(vector<int>& delivery_times, int left, int right) {
  if (left < right) {
  int mid = left + (right - left) / 2;

  mergeSort(delivery_times, left, mid);
  mergeSort(delivery_times, mid + 1, right);

  merge(delivery_times, left, mid, right);
  }
}

int main() {
  vector<int> delivery_times = {10, 3, 5, 15, 30, 1, 6);
  vector<int> sorted_times = delivery_times;

  auto start_time = chrono::high_resolution_clock::now();

  mergeSort(sorted_times, 0, sorted_times.size() - 1);
  auto end_time = chrono::high_resolution_clock::now();

  chrono::duration<double> execution_time = end_time - start_time;

  cout << "Delivery time (in minutes): ";
  for (int time : delivery_times) {
    cout << time << " ";
  }
  cout << "\n";

  cout << "Sorted delivery times: ";
  for (int time : sorted_times) {
    cout << time << " ";
  }
  cout << "\n";

  count << "Execution time: " << execution_time.count() << " seconds"
    << endl;
  cout << "Time Complexity: O(n log n) is efficient for this, as it
    divides the problem into smaller subproblems and merges them in
    sorted order." << endl;

return 0;
