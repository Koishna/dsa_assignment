A. Data Structures Defined
    -Array (arr[])
        -used to store the elements to be stored.
        -dynamically sized based on user imput N.
        -elements are randomly generated.
    -Global Variables
        -comparisions : counts the number of key comparisions performed.
        -swaps: counts the number of swaps performed.
    -constants
        -MAX: defines the maximum possible value (1000)

B. Functions
    1. swap(a, b)
        -swaps the values of two integers.
        -increments the swap counter.
        -used by bubble sort and selection sort.

    2.  bubbleSort(arr, n)
        -implements bubble sort algorithm.
        -repeatedly compares adjacent elemenet sna dswaps them if needed.
        -increments comparision count for each comparision.
    
    3. selectionSort(arr, n)
        -implements selection sort algorithm.
        -selects the smallest element and places it at the correct position.
        -counts comparisions and swaps.
    
    4. insertionSort
        -implements insertion sort algorith.
        -inserts each element into its correct position in the sorted part.
        -counts comparisions and shifts.

    5. merge(arr, l, m, r)
        -Merges two sorted subarrays into one sorted array.
        -Used as a helper function for merge sort.
        -counts comparisons and data movements.

    6. mergeSort(arr, l, r)
        -implements merge sort using divide and conquer technique.
        -recursively divides the array and merge sorted subarrays.

    7. display(arr, n)
        -displays the elements of the array.
        -used to print both original and sorted arrays.


C. The main() function
    -accepts the number of elements (N) from the user.
    -generates N random numbers.
    -displays the original array.
    -allows the user to choose a sorting algorithm:
        -Bubble sort
        -Selection sort
        -Insertion sort
        -Merge sort
    -executes the selected sorting algorithm.
    -displays the sorted array.
    -prints total number of comparisons and swaps performed.

D. Output
    Enter number of elements (N): 7
    Original Array: 
    598 133 728 117 948 57 766 

    Choose Sorting Algorithm:
    1. Bubble Sort
    2. Selection Sort
    3. Insertion Sort
    4. Merge Sort
    1

    Sorted Array:
    57 117 133 598 728 766 948

    Total Comparisions: 21
    Total Swaps(if applicable): 10









