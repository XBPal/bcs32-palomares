#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char destination, char buffer,
  int& moveCount) {
  if (n == 1) {
    cout << "Move package 1 from " << source << " to " <<
      destination << endl;
    moveCount++;
    return;
  }

  towerOfHanoi(n-1, source, buffer, destination, moveCount);

  cout << "Move package " << n << " from " << source << " to " <<
    destination << endl;
  moveCount++;

  towerOfHanoi(n-1, buffer, destination, source, moveCount);
}

int main() {
  int N;
  cout << "Enter the number of packages: ";
  cin >> N;

  int moveCount = 0;
  towerOfHanoi(N, 'A', 'C', 'B', moveCount);

  cout << "Total number of moves required: " << moveCount << endl;

  return 0;
}
  
