#ifndef LIBRE_H
#define LIBRE_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void insertion_sort(double *arr, unsigned int len);
void bubble_sort(double *arr, unsigned int len);
void swap(double *a, double *b);
void llenar_arr(char *dir_buffer, unsigned int len_str, double *arr);
unsigned int def_tam(char *dir_buffer, unsigned int len);

#endif
