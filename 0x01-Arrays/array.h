#ifndef ARRAY_H
#define ARRAY_H
#define size_of_array 3

#include <stdio.h>
#include <stdlib.h>

int findelement(int arr[], int elem, int n);
void insertend(int arr[], int n, int elem);
/*void insertany(int arr[], int n, int pos, int elem);*/
void deleteany(int arr[], int n, int pos);
void reversearr(int arr[], int start, int end);
int insertany(int arr[], int n, int pos, int elem);

#endif
