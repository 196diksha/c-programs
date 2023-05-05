#include<stdio.h>

void
insertion_sort (int arr[], int n)
{
  int i, j, temp;
  for (i = 1; i < n; i++)
    {
      temp = arr[i];
      j = i - 1;

      while (j >= 0 && temp <= arr[j])	/* Move the elements greater than temp to one position ahead from their current position */
	{
	  arr[j + 1] = arr[j];
	  j = j - 1;
	}
      arr[j + 1] = temp;
    }
  // printf("Before sorting an array\n ");

  for (i = 0; i < n; i++)
    printf ("%d ", arr[i]);
}

void main ()
{
  int temp, n=5, i;
  int arr[5] = { 23, 43, 13, 56, 28 };
  printf ("After sorting an array\n ");
  insertion_sort (arr, n);

}
