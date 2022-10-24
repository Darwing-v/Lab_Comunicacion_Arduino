#include "lib_gr6.h"

unsigned int def_tam(char *dir_buffer, unsigned int len)
{
	unsigned int j, cont = 0;

		for(j = 0 ; j < len ; j++)
		{
			if (dir_buffer[j] == '\n')
			{
				cont++;
			}
		}
	return (cont);
}

void llenar_arr(char *dir_buffer, unsigned int len_str, double *arr)
{
	char *next_num;
	char *temp;

	unsigned int j;

	temp = dir_buffer;

	double val_str;

	for(j = 0; j < len_str; j++)
	{
		next_num = strchr(temp, '\n');

		val_str = atof(temp);

		arr[j] = val_str;
	
		temp = next_num+1;
	}
}


void insertion_sort(double *arr, unsigned int len)
{
	int key, j, i;

	for(j = 1; j < len; j++)
	{
		key = arr[j];
		i = j - 1;
		while((i > -1) && (arr[i] > key))
		{
			arr[i + 1] = arr[i];
			i = i - 1;
		}
		arr[i + 1] = key;
	}
}

void bubble_sort(double *arr, unsigned int len)
{
	int i, j;
	
	for(i = 0; i < len-1; i++)
	{
		for(j = len-1; j > i; j--)
		{
			if(arr[j] < arr[j-1])
			{
				swap(&arr[j], &arr[j-1]);
			}
		}
	}
}

void swap(double *a, double *b)
{
	double temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
