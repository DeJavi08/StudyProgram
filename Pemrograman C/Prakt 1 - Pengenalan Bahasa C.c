/*
    Program ini berdasarkan arahan Bu Umi pada poin C
    https://drive.google.com/file/d/1PRE0uC3tM9pS2LP2hvrW3bDcdR70Y0GP/view?usp=sharing

*/ 

#include <stdio.h>

int main(void)
{
    // Percobaan 1
    printf ("[Percobaan nomor 1]\n");

    // Program 3.1
    printf ("Programming is fun.\n");

    // Program 3.2
    printf ("Programming is fun.\n");
    printf ("And programming in C is even more fun.\n");

    // Program 3.3
    printf ("Testing...\n..1\n...2\n....3\n");

    // Program 3.4
    int sum4;

    sum4 = 50 + 25;
    printf ("The sum of 50 and 25 is %i\n", sum4);

    // Program 3.5
    int value1, value2, sum5;

    value1 = 50;
    value2 = 25;
    sum5 = value1 + value2;
    printf ("The sum of %i and %i is %i\n", value1, value2, sum5);

    // Program 3.6 

    // 3.6 (Declare Variables)
    // int value1, value2, sum;
    // value1 = 50;
    // value2 = 25;
    sum5 = value1 + value2;

    // 3.6 (Display the result)
    printf ("The sum of %i and %i is %i\n", value1, value2, sum5);

    // Percobaan 2

    printf ("\n");
    printf ("[Percobaan nomor 2]\n");
    printf (
        "1. In C, lowercase letters are significant.\n"
        "2. main is where program execution.\n"
        "3. Opening and closing braces enclose program statements in a routine.\n"
        "4. All program statements must be terminated by a semicolon.\n\n"
        );

    // Percobaan 3
    printf ("[Percobaan nomor 3]\n");
    printf ("Testing...");
    printf ("....1");
    printf ("...2");
    printf ("..3");
    printf ("\n\n");

    // Percobaan 4
    printf ("[Percobaan nomor 4]\n");
    int hasil4 = 87 - 15;
    printf("Hasil pengurangan 15 dari 87 adalah %d\n\n", hasil4);

    // Percobaan 5
    printf ("[Percobaan nomor 5]\n");

    int hasil5;
    hasil5 = 25 + 37 - 19;
    printf ("The answer is %i\n\n", hasil5);

    // Percobaan 6
    printf ("[Percobaan nomor 6]\n");
    int jawaban6, hasil6;
    jawaban6 = 100;
    hasil6 = jawaban6 - 10;
    printf ("The result is %i\n", hasil6 - 5);

    
    return 0;
}