
// Logic -1 o(n Logn)

int findSecondLargestWithSorting(int arr[], int n) {
    
    sort(arr, arr + n, greater<int>());
    
    int firstLargest = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] != firstLargest) {
            return arr[i];
        }
    }
    
    return -1; 
}

// Logic - 2 o(n) + o(n) = o(n)

int findSecondLargestWithTwoLoops(int arr[], int n) {
    
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    
    int secondLargest = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] != largest) {
            if (secondLargest == -1) {
                secondLargest = arr[i];
            } else if (arr[i] > secondLargest) {
                secondLargest = arr[i];
            }
        }
    }
    
    return secondLargest;
}


// Logic - 3 o(n)

int findSecondLargest(int arr[], int n) {
    
    int first = 0, second = -1;
    
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[first]) {
            second = first;
            first = i;
        } else if (arr[i] < arr[first]) {
            if (second == -1 || arr[i] > arr[second]) {
                second = i;
            }
        }
    }
    
    return (second != -1) ? arr[second] : -1;
}