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
 * @file stats.h
 * @brief This is the header file for stats.c
 *
 * stats.h include all the declarations and documentaion 
 * for the functions from the stats.c file.
 *
 * @author Divesh Dodeja
 * @date 1st May, 2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 


/**
 * @brief Prints the statistics of an array
 *
 * This function takes an array of dataset and the length of
 * that datasset and prints the statistics of that dataset
 * including the minimum, maximum, mean, and median.
 *
 * @param dataset Array of dataset whose statistics needs to be calculated 
 * @param length  Length of the dataset
 *
 * @return void
 */
void print_statistics(unsigned char *dataset, int length);



/**
 * @brief Prints array
 *
 * This function takes as an input an array and its length
 * and prints it to the console.
 *
 * @param dataset The array to be printed
 * @param length Length of the dataset
 *
 * @return void
 */
void print_array(unsigned char *dataset, int length);



/**
 * @brief Returns the median of the given dataset
 *
 * This function takes as an input an array of dataset
 * and its length and calculates the median of the values
 * in the dataset. This value is then returned as a int
 * value.
 *
 * @param dataset The array to be printed
 * @param length Length of the dataset
 *
 * @return The calculated median value
 */
int find_median(unsigned char *dataset, int length);


/**
 * @brief Returns the mean of the given dataset
 *
 * This function takes as an input an array of dataset
 * and its length and calculates the mean of the values
 * in the dataset. This value is then returned as an int
 * value.
 *
 * @param dataset The array to be printed
 * @param length Length of the dataset
 *
 * @return The calculated mean value
 */
int find_mean(unsigned char *dataset, int length);


/**
 * @brief Returns the maximum value from the given dataset
 *
 * This function takes as an input an array of dataset
 * and its length and finds the maximum value from the values
 * in the dataset. This value is then returned as an int
 * value.
 *
 * @param dataset The array to be printed
 * @param length Length of the dataset
 *
 * @return The maximum value from the given dataset
 */
int find_maximum(unsigned char *dataset, int length);


/**
 * @brief Returns the minimum value from the given dataset
 *
 * This function takes as an input an array of dataset
 * and its length and finds the minimum value from the values
 * in the dataset. This value is then returned as a int
 * value.
 *
 * @param dataset The array to be printed
 * @param length Length of the dataset
 *
 * @return The minimum value from the given dataset
 */
int find_minimum(unsigned char *dataset, int length);

/**
 * @brief Sorts the given dataset in descending order.
 *
 * This function takes an an input an array of dataset
 * and its length and then sorts the given dataset in
 * descending order.
 *
 * @param dataset The array to be printed
 * @param length Length of the dataset
 *
 * @return void
 */
void sort_array(unsigned char *dataset, int length);


#endif /* __STATS_H__ */
