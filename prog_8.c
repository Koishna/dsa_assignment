#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 1000

int comparisions = 0;
int swaps = 0;

void swap(int *a , int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    swaps++;
}

void bubbleSort(int arr[], int n){
    for (int i = 0; i<n-1; i++){
        for (int j = 0; j < n-i-1; j++){
            comparisions++;
            if(arr[j]>arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

void selectionSort(int arr[], int n){
    for(int i =0; i< n-1; i++){
        int minIndex = i;
        for(int j = i+1; j < n; j++){
            comparisions++;
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        if (minIndex !=i){
            swap(&arr[minIndex], &arr[i]);
        }
    }
}

void insertionSort(int arr[], int n){
    for(int i = 1; i< n; i++){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0){
            comparisions++;
            if(arr[j]>key){
                arr[j+1] =arr[j];
                swaps++;
                j--;
            }else break;
        }
        arr[j+1]=key;
    }
}

void merge(int arr[], int l, int m, int r){
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    
    for(int i=0; i<n1; i++){
        L[i] = arr[l+i];
    }
    for(int j = 0; j < n2; j++){
        R[j] = arr[m+1+j];
    }

    int i = 0, j = 0, k = l;
    while(i<n1 && j < n2){
        comparisions++;
        if(L[i] <= R[j]){
            arr[k++] = L[i++];
        }else {
            arr[k++] = R[j++];
            swaps++;
        }
    }
    while (i<n1) arr[k++] =L[i++];
    while (j<n2) arr[k++] =R[j++];
}

void mergeSort(int arr[], int l, int r){
    if (l<r){
        int m = (l+r)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

void display(int arr[], int n){
    for (int i =0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int N;
    printf("Enter number of elements (N): ");
    scanf("%d", &N);

    int arr[N];
    srand(time(0));
    for(int i =0; i<N; i++){
        arr[i] = (rand() % MAX) + 1;
    }

    printf("Original Array: \n");
    display(arr, N);

    printf("\nChoose Sorting Algorithm:\n");
    printf("1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort\n4. Merge Sort\n");
    int choice;
    scanf("%d", &choice);

    comparisions= swaps =0;

    switch(choice){
        case 1: bubbleSort(arr,N); 
        break;
        case 2: selectionSort(arr,N);
        break;
        case 3: insertionSort(arr, N);
        break;
        case 4: mergeSort(arr, 0, N-1);
        break;
        default: printf("Invalid choice!\n");
        return 0;        
    }

    printf("\nSorted Array:\n");
    display(arr, N);

    printf("\nTotal Comparisions: %d\n", comparisions);
    printf("Total Swaps(if applicable): %d\n",swaps);

    return 0;
}