#include <stdio.h>

int main()
{
    int i;
    int *ptr;
    int **dptr;

    i= 1234;//i 초기화

    printf("[----- [kangsu] [2017015040] -----]\n\n");

    printf("[checking values before ptr = &i]\n");//ptr값 변경 전
    printf("value of i == %d\n", i);//i의 값 : (1234)
    printf("address of i == %p\n", &i);//i의 주소
    printf("value of ptr == %p\n", ptr);//ptr의 값 : (가비지 값)
    printf("address of ptr == %p\n", &ptr);//ptr의 주소

    ptr=&i;  //ptr(포인터)의 값에 i의 주소를 저장한다.

    printf("\n[checking values after ptr = &i]\n");//ptr값 변경 후
    printf("value of i == %d\n", i);//i의 값 : (1234)
    printf("address of i == %p\n", &i);//i의 주소
    printf("value of ptr == %p\n", ptr);//ptr의 값 : (i의 주소)
    printf("address of ptr == %p\n", &ptr);//ptr의 주소
    printf("value of *ptr == %d\n", *ptr);//ptr의 값에 해당하는 주소(i)의 값 : (1234)

    dptr =&ptr;// dptr(이중 포인터)의 값에 ptr(포인터)의 주소를 저장한다.

    printf("\n[checking values after dptr = &ptr]\n");//dptr값 변경후
    printf("value of i == %d\n", i);//i의 값 : (1234)
    printf("address of i == %p\n", &i);//i의 주소
    printf("value of ptr == %d\n", ptr);//ptr의 값 : (i의 주소)
    printf("address of ptr == %p\n", &ptr);//ptr의 주소
    printf("value of *ptr == %d\n", *ptr);//ptr의 값에 해당하는 주소(i)의 값 : (1234)
    printf("value of dptr == %p\n", dptr);//dptr의 값 : (ptr의 주소)
    printf("address of dptr == %p\n", &dptr);//dptr의 주소
    printf("value of *dptr == %p\n", *dptr);//dptr의 값에 해당하는 주소(ptr)의 값 : (i의 주소)
    printf("value of **dptr == %d\n", **dptr);//dptr의 값에 해당하는 주소(ptr)의 값에 해당하는 주소(i)의 값 :(1234)

    *ptr=7777;  //ptr(포인터)의 값에 해당하는 주소(i)의 값을 7777로 변경한다.

    printf("\n[after *ptr = 7777]\n");//*ptr값 변경이후
    printf("value of i == %d\n", i);//i의 값 : (7777)
    printf("value of *ptr == %d\n", *ptr);//ptr의 값에 해당하는 주소(i)의 값 : (7777)
    printf("value of **dptr == %d\n", **dptr);//dpte의 값에 해당하는 주소(ptr)의 값에 해당하는 주소(i)의 값 : (7777)

    **dptr = 8888; //dptr(이중 포인터)의 값에 해당하는 주소(ptr)의 값에 해당하는 주소(i)의 값을 8888로 변경한다.

    printf("\n[after **dptr = 8888]\n"); //**dptr값 변경이후
    printf("value of i == %d\n", i);//i의 값 : (8888)
    printf("value of *ptr == %d\n", *ptr);//ptr의 값에 해당하는 주소(i)의 값 : (8888)
    printf("value of **dptr == %d\n", **dptr);//dpte의 값에 해당하는 주소(ptr)의 값에 해당하는 주소(i)의 값 : (8888)
    
    return 0;


}