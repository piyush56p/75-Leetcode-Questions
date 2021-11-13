//selection sort  Inplace sorting algorithm takes constant space
//Swapping minimum
//Time complexity = O(n2)
 void selectionsort(int A[], int n){
     for (int i = 0; i < n-1; i++)
     {
         int iMin = i;
         for (int j = i+1; j < n; j++)
         {
             if(A[j]< A[iMin]){
                 iMin = j;
             }
             /* code */
         }
         int temp = A[i];
         A[i] = A[iMin];
         A[iMin] = temp;
         
         /* code */
     }
     
 }
