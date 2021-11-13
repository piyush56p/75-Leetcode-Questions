//not the best sorting techinqque stil better then 
// bubble sort and selection sort.
//Time complexity = best case o(n)
//worst case = o(n2)

void insertionsort(int A[], int n){
    int value;
    int hole;
    for (int i = 1; i < n-1; i++) 
    
    {
        value = A[i];
        hole = i;
        while (hole>0 && A[hole - 1]> A[hole])
        {
            A[hole] = A[hole - 1];
            hole = hole - 1;
            /* code */
        }
        A[hole] = value;
        
        /* code */
    }
    
}
