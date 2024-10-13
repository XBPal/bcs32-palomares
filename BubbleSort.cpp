#include <iostream>
#include <vector>
#include <chrono>

using namespace std;

void bubbleSort(vector<int<& delivery_times, double& 
  execution_time) {
  auto start_time = chrono::high_resolution_clock::now()

  int n = delivery_times.size();
  for (int i = 0; i < n; i++) {
    if (delivery_times[j] > delivery_times[j + 1]) {
      swap(delivery_times[j], deliverytimes[j + 1]
        );
      swapped = true
    }
  }
  if (!swapped) {
    break;
  }

  auto end_time = chrono::high_resolution_clock:now();
  chrono::duration<double> duration = end_time - start_time
    ;
  execution_time = duration.count();
}

int main() {
  vector<int> delivery_times = {10, 3, 5, 15, 30, 1, 6};
  vector<int> sorted_times = delivery_times;
  double execution_time;

  bubbleSort(sorted_times, execution_time);

  cout << "Delivery time (in mintues): ';
  for (int time : delivery_times) {
    cout << time << " ";
  }
  cout << "\n";

  cout << "Sorted delivery times: ";
  for (int time : sorted_times) {
    cout << time << " ";
  }
  cout << "\n";

  cout << "Execution time: " << execution_time << "
    second" << endl;
  cout << "Time Complexity: O(n^2) is inefficient for large 
    datasets as it compares and swaps elements repeatedly
    ." << endl;

  return 0;

  
