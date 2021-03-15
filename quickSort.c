#include<stdio.h>
void swap(int* a, int* b) 
{
    
    int t = *a; 
	*a = *b; 
	*b = t; 
} 
void printArray(int arr[],int length){
    
    for (int i = 0; i < length; i++)
        printf("%d ,", arr[i]);
    
    
}
int partion(int arr[], int low , int high){
    int pivot = arr[high];
    int i = low - 1;
    int j ;
    for ( j = low; j <= high -1 ; j++)
        if(arr[j] < pivot)
            swap(&arr[++i], &arr[j]);
    
    swap(&arr[++i], &arr[high]);
    return i;
}
void quickSort(int arr[], int low, int high){
    if(low < high){
        int pivot = partion(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);

    }
}
int main(){
    int length ;
    printf("Please Enter length of array : ");
    scanf("%d", &length);
    int arr[length];
    printf("Please Enter Your Element : ");
    for (int i = 0; i < length; i++)
        scanf("%d", &arr[i]);
    printf("Your array : \n");
    printArray(arr, length);
    quickSort(arr, 0, length - 1);
    printf("\n Sorted array : \n");
    printArray(arr, length);
    return 0;
}