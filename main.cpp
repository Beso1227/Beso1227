#include <iostream>

using namespace std;

int main() {
  // declare variables
  int n, total_time, total_errors;
  int steps[100];

  // read production data
  cout << "Enter the number of steps: ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    cout << "Enter the time for step " << i + 1 << ": ";
    cin >> steps[i];
  }

  // calc how many errors in the process
  for (int i = 0; i < n; i++) {
    total_time += steps[i];
    if (steps[i] > 10) {
      total_errors++;
    }
  }

  // printing the results
  cout << "The total time is: " << total_time << endl;
  cout << "The total number of errors is: " << total_errors << endl;

  // declare the process that needs a lot of time to be done
  int long_steps[100], error_steps[100];
  int long_steps_count = 0, error_steps_count = 0;

  for (int i = 0; i < n; i++) {
    if (steps[i] > 10) {
      long_steps[long_steps_count++] = i;
    } else if (steps[i] > 5 && steps[i] <= 10) {
      error_steps[error_steps_count++] = i;
    }
  }

  // printing the process that needs a lot of time to be done
  cout << "The long steps are: ";
  for (int i = 0; i < long_steps_count; i++) {
    cout << long_steps[i] + 1 << " ";
  }
  cout << endl;

  // printing the process that has much errors
  cout << "The error steps are: ";
  for (int i = 0; i < error_steps_count; i++) {
    cout << error_steps[i] + 1 << " ";
  }
  cout << endl;

  return 0;
}
