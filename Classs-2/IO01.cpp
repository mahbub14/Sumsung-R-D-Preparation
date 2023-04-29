#ifdef __cplusplus
#include<iostream>
using namespace std;
#else
#include<stdio.h>
#endif // __cplusplus

int main() {
#ifdef __cplusplus
    cout<<"C++"<<endl;
#else
    printf("C\n");
#endif // __cplusplus
    return 0;
}
