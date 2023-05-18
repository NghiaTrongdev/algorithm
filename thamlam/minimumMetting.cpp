#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Task {
    int start, end;
};


void swap(Task& a, Task& b) {
    Task t = a;
    a = b;
    b = t;
}

void sort(Task arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i].end > arr[j].end) {
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main() {
    int n;
    cout << "So cong viec: ";
    cin >> n;

    Task *arr = new Task[n];

    for (int i = 0; i < n; i++) cin >> arr[i].start >> arr[i].end;
    
    sort(arr, n);
    
	Task curr = arr[0];
    int count = 1;
    for (int i = 1; i < n; i++) {
    	if (arr[i].start >= curr.end) {
    		count++;
    		curr = arr[i];
		}
	}
	
	cout << "Ans: " << count;

    return 0;
}