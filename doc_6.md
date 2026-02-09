Documentation

A. Data Structures Defined
    -Array representation of Heap.
        -the heap is implemented using an integer array.
        -the array represents a compete binary tree.
        -index relationships:
            -Left child: 2*i+1
            -Right child: 2*i+2
            -Parent: (i-1)/2
    -Two different heaps are created:
        -Max Heap: parent node is greater than its children.
        -Min Heap: parent node is smaller than its children.

B. Functions
    1. swap(int *a,int *b)
        -swaps the values of two integers i.e. a and b
        -used during heapification to maintain heap property.

    2. maxHeapify(int arr[], int n, int i)
        -ensures the max heap property for a subtree rooted at index i.
        -compares the parent with left and right children.
        -swaps with the largest if required.
        -recursively heapifies the affected subtree.
    
    3. minHeapify(int arr[], int n, int i)
        -ensures the min heap property for a subtree rooted at index i.
        -compares the parent with left and right children.
        -swaps with the smallest if required.
        -recursively heapifies the affected subtree.

    4. buildMaxheap(inr arr[], int n)
        -converts an unsorted array into Max Heap.
        -calls maxHeapify() starting from the last non-leaf node up to the root.

    5. buildMinheap(inr arr[], int n)
        -converts an unsorted array into Min Heap.
        -calls minHeapify() starting from the last non-leaf node up to the root.

    6. printArray(int arr[], int n)
        -prints the elements of the array.
        -used to display the original array, max heap and min heap.

C. The main() function
    -declares an unsorted array and prints it.
    -bilds a max heap and displays it.
    -creates a copy of original array.
    -builds a min heap and displays it.

D. Output
    Original Array: 12 3 17 8 34 25 1 
    Max Heap: 34 12 25 8 3 17 1 
    Min Heap: 1 3 12 8 34 25 17 
