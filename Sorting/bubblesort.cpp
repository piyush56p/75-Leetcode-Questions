//Bubble sort have time complesity of O(n2)
//best case time complexity O(n).
//vergae case O(n2).
//space compexity  O(1)
void bubblesort(arr){
    int temp;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            /* code */
        }
        
        

            

        }
        /* code */
    }
