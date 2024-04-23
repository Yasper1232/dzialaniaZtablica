#include <iostream>

#include "array.h"

void displayMenu(){

        printf("1.Wprowadz dane\n");
    printf("2.Wyswietl dane\n");
    printf("3.Oblicz srednia\n");
    printf("4.Oblicz maksimum\n");
    printf("5.Oblicz minimum\n");
    printf("6.Sortuj\n");
    printf("7.Wyznaczanie mediany\n");
    printf("8.Zapisywanie tablicy\n");
    printf("9.Odczyt tablicy\n");
    printf("10.EXIT\n");

}

int main() {

int array[SIZE]= {1, 5, 7, 8, 9,235, 522 ,34 ,35};
int input;


    do {
                displayMenu();
        printf("twoj wybor to:");
        scanf_s("%d",&input);

        switch (input) {

            case 1:

                    dataenter();

                break;

        }


}        while(input);


    return 0;

}
