/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material.
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Implementation file for stats.c
 *
 * This file performs statistics on a given dataset (Array)
 * Following tasks are performed:
 * 1. Minimum, Maximum, mean, and Median of the dataset
 * 2. Sort the given array
 * 3. Print the above values and datasets
 *
 * @author Divesh Dodeja
 * @date 1st May, 2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  printf("Unsorted Array :\n{");
  print_array(test, SIZE);
  printf("}\n");
  sort_array(test,SIZE);
  printf("\n\n\n Sorted Array :\n{");
  print_array(test, SIZE);
  printf("}\n\n\n\n");
  
  print_statistics(test, SIZE);
  
  return 0;
}


/* Add other Implementation File Code Here */
void print_statistics(unsigned char *dataset, int length)
{
	int mean = find_mean(dataset, length);
  	int median = find_median(dataset, length);
  	int max = find_maximum(dataset, length);
  	int min = find_minimum(dataset, length);
  	
  	printf("Mean : %d\n", mean);
  	printf("Median : %d\n", median);
  	printf("Max : %d\n", max);
  	printf("Min : %d\n", min);

}	

void print_array(unsigned char *dataset, int length)
{
	for(int i = 0; i < length; i++)
	{
		printf(" %d ",dataset[i]);
	}
}	


int find_median(unsigned char *dataset, int length)
{
	sort_array(dataset, length);	
	
	if((length % 2) == 1)
	{
		return (dataset[length / 2]);
	}
	else
	{
		return ((dataset[length / 2] + dataset[(length / 2) - 1]) / 2);
	}
}


int find_mean(unsigned char *dataset, int length)
{
	float sum = 0;
	for(int i = 0; i < length; i++)
	{
		sum = sum + dataset[i];
	}
	return (sum / length);
}


int find_maximum(unsigned char *dataset, int length)
{
	int max = dataset[0];
	for(int i = 1; i < length; i++)
	{
		if(max < dataset[i])
		{
			max = dataset[i];	
		}
	}
	return (max);	
}

int find_minimum(unsigned char *dataset, int length)
{
	int max = dataset[0];
	for(int i = 1; i < length; i++)
	{
		if(max > dataset[i])
		{
			max = dataset[i];	
		}
	}
	return (max);
}


void sort_array(unsigned char *dataset, int length)
{
	for(int i = 0; i < length; i++)
	{
		for(int j = 0; j < i; j++)
		{
			if(dataset[i] > dataset[j])
			{
				unsigned char temp = dataset[i];
				dataset[i] = dataset[j];
				dataset[j] = temp;
			}	
		}
	}
}
