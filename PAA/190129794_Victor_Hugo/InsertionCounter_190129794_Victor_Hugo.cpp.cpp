#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int _merge(int mergeArray[], int ArrayTemp[], int begin, int end);

int mergesort(int array[], int arrayTemp[], int arrayStart, int middle, int arrayFinish)
{
    int swaps = 0;

    int i = arrayStart;
    int j = middle;
    int k = arrayStart;

    while ((i <= middle - 1) && j <= arrayFinish)
    {
        if (array[i] <= array[j])
        {
            arrayTemp[k++] = array[i++];
        }
        else
        {
            arrayTemp[k++] = array[j++];
            swaps += (middle - i);
        }
    }

    while (i <= middle - 1)
    {
        arrayTemp[k++] = array[i++];
    }

    while (j <= arrayFinish)
    {
        arrayTemp[k++] = array[j++];
        k++;
        j++;
    }

    while (arrayStart <= arrayFinish)
    {
        array[arrayStart] = arrayTemp[arrayStart];
        arrayStart++;
    }

    return swaps;
}

int merge(int mergeArray[], int tamanho)
{
    int ArrayTemp[tamanho];
    return _merge(mergeArray, ArrayTemp, 0, tamanho - 1);
}

int _merge(int mergeArray[], int ArrayTemp[], int begin, int end)
{
    int middle, swaps = 0;
    if (begin < end)
    {
        middle = (end + begin) / 2;
        swaps += _merge(mergeArray, ArrayTemp, begin, middle);
        swaps += _merge(mergeArray, ArrayTemp, middle + 1, end);
        swaps += mergesort(mergeArray, ArrayTemp, begin, middle + 1, end);
    }
    return swaps;
}

int main()
{
    int testes, tamanhoArray = 0;
    scanf("%d", &testes);

    vector<int> result;

    for (int i = 0; i < testes; i++)
    {
        scanf("%d", &tamanhoArray);
        int valueArray[tamanhoArray];
        for (int i = 0; i < tamanhoArray; i++)
        {
            scanf("%d", &valueArray[i]);
        }
        int tamanho = sizeof(valueArray) / sizeof(valueArray[0]);
        result.push_back(merge(valueArray, tamanho));
    }
    for (int i = 0; i < result.size(); i++) {
        printf("%d\n", result[i]);
    }
    return 0;
}

// // C++ Program to implement
// // the above approach

// #include <bits/stdc++.h>
// using namespace std;

// // Stores the sorted
// // array elements
// int temp[100000];

// // Function to count the number of
// // swaps required to merge two sorted
// // subarray in a sorted form
// long int merge(int A[], int left,
// 			int mid, int right)
// {

// 	// Stores the count of swaps
// 	long int swaps = 0;

// 	int i = left, j = mid, k = left;

// 	while (i < mid && j <= right) {

// 		if (A[i] <= A[j]) {
// 			temp[k] = A[i];
// 			k++, i++;
// 		}
// 		else {
// 			temp[k] = A[j];
// 			k++, j++;
// 			swaps += mid - i;
// 		}
// 	}
// 	while (i < mid) {
// 		temp[k] = A[i];
// 		k++, i++;
// 	}

// 	while (j <= right) {
// 		temp[k] = A[j];
// 		k++, j++;
// 	}

// 	while (left <= right) {
// 		A[left] = temp[left];
// 		left++;
// 	}

// 	return swaps;
// }

// // Function to count the total number
// // of swaps required to sort the array
// long int mergeInsertionSwap(int A[],
// 							int left, int right)
// {
// 	// Stores the total count
// 	// of swaps required
// 	long int swaps = 0;
// 	if (left < right) {

// 		// Find the middle index
// 		// splitting the two halves
// 		int mid = left + (right - left) / 2;

// 		// Count the number of swaps
// 		// required to sort the left subarray
// 		swaps += mergeInsertionSwap(A, left, mid);

// 		// Count the number of swaps
// 		// required to sort the right subarray
// 		swaps += mergeInsertionSwap(A, mid + 1, right);

// 		// Count the number of swaps required
// 		// to sort the two sorted subarrays
// 		swaps += merge(A, left, mid + 1, right);
// 	}
// 	return swaps;
// }

// // Driver Code
// int main()
// {
// 	int A[] = { 2, 1, 3, 1, 2 };
// 	int N = sizeof(A) / sizeof(A[0]);
// 	cout << mergeInsertionSwap(A, 0, N - 1);
// 	return 0;
// }
