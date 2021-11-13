 //Time complexity of Quick Sort algorithm is Average case o(nlogn)
 //worst case running time o(n2)
//inplace
 int Partition(int *A, int start, int end){
     int pivot = A[end];
     int partitionIndex = start;
     for (int i = start; i < end; i++)
     {
         if(A[i]<=pivot){
             swap(A[i], A[partitionIndex]);
             partitionIndex++;
         }
         /* code */
     }
     swap(A[partitionIndex], A[end]);
     return partitionIndex;
     
 }
 void QuickSort(int *A, int start, int end){
     if(start<end){
         int partitionIndex = Partition(A, start, end);
         QuickSort(A, start, partitionIndex-1);
         QuickSort(A, partitionIndex+1, end);
     }
 }
