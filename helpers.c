/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>
#include <stdio.h>
#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // bool found=false;
    // for(int i=0;i<n;i++){
    //     if (values[i]==value){
    //         found=true;
    //         break;
    //     }
    // }

    int start=0;
    int end=n;
    //int mid=(end-start)/2;
    int mid=(end+start)/2;
    bool found=false;
    int counter=0;
    do{
        printf("%i,%i,%i\n",start,mid,end);
        if (value==values[mid]){
            found=true;
            break;
        }else if(value<values[mid]){
            end=mid;
            mid=(end+start)/2;
            //mid=start+(end-start)/2; // 0+(2-0)/2 = 1 i.e. middle=1
        }else{
            start=mid;
            mid=(end+start)/2;
            //mid=start+(end-start)/2;
        }
    counter++;
    }while(found==false && end-start!=0 && counter<20);

    if (found) return true;
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement a sorting algorithm
    for(int i=0;i<n;i++){
        printf("%i ",values[i]);
    }
    printf("\n");
    //--------------------------------------------------

    bool swap;
    do{
        swap=false;
        for(int i=0;i<n-1;i++){
            if (values[i]>values[i+1]){
                int temp;
                temp=values[i+1];
                values[i+1]=values[i];
                values[i]=temp;
                swap=true;
            }
        }
    }while(swap==true);

    //--------------------------------------------------
    for(int i=0;i<n;i++){
        printf("%i ",values[i]);
    }
    printf("\n");

    //return true;
}
