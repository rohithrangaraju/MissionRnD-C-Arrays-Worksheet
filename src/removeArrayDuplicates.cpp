/*
OVERVIEW:  given an array that has duplicate values remove all duplicate values.
E.g.: input: [1, 1, 2, 2, 3, 3], output [1, 2, 3]

Ex 2: [4,4,2,2,1,5] output : [4,2,1,5]

INPUTS: Integer array and length of the array .

OUTPUT: Update input array by removing duplicate values and return the final array length

ERROR CASES: Return -1 for invalid inputs.

NOTES: Don't create new array, try to change the input array.
*/

#include <stdio.h>

int removeArrayDuplicates(int *Arr, int len)
{
	if (Arr == NULL) return -1;
	else if (len < 0) return -1;
	else{
		int i, j,temp;
		for (i = 0; i<len; i++){
			temp = Arr[i];
			j = i;
			while (temp<Arr[j - 1] && j>0){
				Arr[j] = Arr[j - 1];
				j--;
			}
			Arr[j] = temp;
		}
		j = 0;
		//int x = len;
		for (i = 1; i<len; i++){
			if (Arr[i] == Arr[i - 1])
				continue;
			else {
				//j++;
				Arr[++j] = Arr[i];
			}
		}
		return j+1;
	}
}