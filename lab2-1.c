#include <stdio.h>
int main()
{
    char charType;
    int integerType;
    float floatType;
    double doubleType;

    printf("[----- [kangsu] [2017015040] -----]\n\n");

    printf("Size of char: %ld byte\n",sizeof(charType));//변수 charType의 메모리 크기
    printf("size of int: %ld bytes\n",sizeof(integerType));//변수 integerType의 메모리 크기
    printf("size of float: %ld bytes\n",sizeof(floatType));//변수 floatType의 메모리 크기
    printf("Size of double: %ld bytes\n",sizeof(doubleType));//변수 doubleType의 메모리 크기

    printf("-----------------------------------------\n");

    printf("Size of char: %ld byte\n",sizeof(char));//자료형 char의 메모리 크기
    printf("size of int: %ld bytes\n",sizeof(int));//자료형 int의 메모리 크기
    printf("size of float: %ld bytes\n",sizeof(float));//자료형 float의 메모리 크기
    printf("Size of double: %ld bytes\n",sizeof(double));//자료형 double의 메모리 크기

    printf("-----------------------------------------\n");

    printf("Size of char*: %ld byte\n",sizeof(char*));//char 주소 메모리 크기
    printf("size of int*: %ld bytes\n",sizeof(int*));//int 주소 메모리 크기
    printf("size of float*: %ld bytes\n",sizeof(float*));//float 주소 메모리 크기
    printf("Size of double*: %ld bytes\n",sizeof(double*));//double 주소 메모리 크기

    return 0;
}