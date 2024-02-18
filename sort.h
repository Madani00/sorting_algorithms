#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <time.h>


#include <stdlib.h>


/**
 * struct listint_s - dyalo
 * @n: li maah
 * @prev: bhalo
 * @next: tam nit
 */


typedef struct listint_s
{

	const int n;
	struct listint_s *prev;
	struct listint_s *next;

} listint_t;


/* functions provided*/
void check_list(const listint_t *list);
void check_array(const int *array, size_t size);
int *rand_array(int len, int max);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);


void bubble_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void counting_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void merge_sort(int *array, size_t size);

#endif
