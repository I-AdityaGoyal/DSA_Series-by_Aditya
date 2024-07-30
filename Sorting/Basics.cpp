#include <iostream>
#include <vector>
using namespace std;

void input(vector<int> &v, int n)
{
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
}

void print(vector<int> &v, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}

// Selection Sort
void selectionSort(vector<int> &v, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[minIndex])
                minIndex = j;
        }
        swap(v[i], v[minIndex]);
    }
}

// Bubble Sort
void bubbleSort(vector<int> &v, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
                swap(v[j], v[j + 1]);
        }
    }
}

// Insertion Sort
void insertionSort(vector<int> &v, int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && v[j - 1] > v[j])
        {
            swap(v[j], v[j - 1]);
            j--;
        }
    }
}

// Quick Sort
int partition(vector<int> &v, int low, int high)
{
    int pivot = v[low];

    int cnt = 0;
    for (int i = low + 1; i <= high; i++)
    {
        if (v[i] <= pivot)
        {
            cnt++;
        }
    }

    int pivotIndex = low + cnt;
    swap(v[pivotIndex], v[low]);

    int i = low, j = high;

    while (i < pivotIndex && j > pivotIndex)
    {

        while (v[i] <= pivot)
        {
            i++;
        }

        while (v[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(v[i++], v[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(vector<int> &v, int low, int high)
{
    if (low < high)
    {
        int pi = partition(v, low, high);
        quickSort(v, low, pi - 1);
        quickSort(v, pi + 1, high);
    }
}

// Merge Sort
void merge(vector<int> &v, int low, int mid, int high)
{
    vector<int> ans;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (v[left] <= v[right])
        {
            ans.push_back(v[left]);
            left++;
        }
        else
        {
            ans.push_back(v[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        ans.push_back(v[left]);
        left++;
    }

    while (right <= high)
    {
        ans.push_back(v[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        v[i] = ans[i - low];
    }
}

void mergeSort(vector<int> &v, int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        mergeSort(v, left, mid);
        mergeSort(v, mid + 1, right);
        merge(v, left, mid, right);
    }
}

int main()
{
    vector<int> v;
    int n = 9;

    // Taking Input;
    cout << "Give Input: ";
    input(v, n);

    // Printing before sorting
    cout << "\nArray Before Sorting: ";
    print(v, n);

    // selectionSort(v, n);

    // bubbleSort(v, n);

    // insertionSort(v, n);

    // quickSort(v, 0, n - 1);

    mergeSort(v, 0, n - 1);

    // Printing after sorting
    cout << "\nArray After Sorting: ";
    print(v, n);

    return 0;
}
