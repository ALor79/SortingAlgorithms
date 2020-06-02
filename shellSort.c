//
// Created by ali raz on 6/2/20.
//

//add a gaps function which returns all the numbers up to infinity
void shellSort(int arr[], int length) {
    int gaps[] = {701, 301, 132, 57, 23, 10, 4, 1, 0};
    int k = 0;
    //Start with the largest gap and work down to a gap of 1
    while (gaps[k] != 0) {
        /* Do a gapped insertion sort for this gap size.
         The first gap elements arr[0..gap-1] are already in gapped order
         keep adding one more element until the entire array is gap sorted*/
        for (int i = gaps[k]; i < length; ++i) {
            int temp = arr[i];
            int j;
            //shift earlier gap-sorted elements up until the correct location for arr[i] is found
            for (j = i; j >= gaps[k] && arr[j - gaps[k]] > temp; j -= gaps[k]) {
                arr[j] = arr[j - gaps[k]];
            }
            //put temp (the original arr[i]) in its correct location
            arr[j] = temp;
        }
        k++;
    }

}

