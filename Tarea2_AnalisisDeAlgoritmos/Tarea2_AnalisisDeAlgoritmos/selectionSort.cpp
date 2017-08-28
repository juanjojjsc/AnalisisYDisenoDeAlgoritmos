//
//  selectionSort.cpp
//  Tarea2_AnalisisDeAlgoritmos
//
//  Created by JJ Santos on 8/28/17.
//  Copyright © 2017 JJ Santos. All rights reserved.
//

#include "selectionSort.hpp"


void selectionSort(int arr[], int n)
{
    //pos_min is short for position of min
    int pos_min,temp;
    
    for (int i=0; i < n-1; i++)
    {
        pos_min = i;//set pos_min to the current index of array
        
        for (int j=i+1; j < n; j++)
        {
            
            if (arr[j] < arr[pos_min])
                pos_min=j;
            //pos_min will keep track of the index that min is in, this is needed when a swap happens
        }
        
        //if pos_min no longer equals i than a smaller value must have been found, so a swap must occur
        if (pos_min != i)
        {
            temp = arr[i];
            arr[i] = arr[pos_min];
            arr[pos_min] = temp;
        }
    }
}
