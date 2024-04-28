//
// Created by PC-R5-3600 on 23.04.2024.
//
#include "array.h"
#include <cstdio>


void dataenter(int *array){

    for(int i=0;i<SIZE;i++){

        printf("*(array+ %d) = ",i);
        scanf_s("%d",(array+i));

    }

}

void showdata(int *array){

        for(int i=0;i<SIZE;i++){

            printf("*(array + %d) = %d\n",i, *(array+i));

        }

}