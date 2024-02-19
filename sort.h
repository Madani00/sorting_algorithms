#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>


/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
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

listint_t *tail_traverse(listint_t *head, listint_t *tail, listint_t *list);
void swp(listint_t *a, listint_t *b);
void recursive_quick(int *array, int low, int high, size_t size);
int partition(int *array, int low, int high, size_t size);
void swap(int *a, int *b);
int integer_count(int *array, size_t size, int range);
void merge_compare(int *array, size_t start, size_t stop, int *new);
void merge_sort_top_down(int *array, size_t start, size_t stop, int *new);
void siftdown(int *array, size_t start, size_t end, size_t size);
void heapify(int *array, size_t size);
void ssswap(int *array, size_t size, int *a, int *b);
int radix_pass(int *array, ssize_t size, int digit, int *new_array);
int get_digit(long number, int digit);
void _bitonic_sort(int up, int *array, size_t size, size_t start, size_t end);
void bitonic_merge(int up, int *array, size_t start, size_t end);
void bitonic_compare(int up, int *array, size_t start, size_t end);

#endif
