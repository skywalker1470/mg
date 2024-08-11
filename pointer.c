#include <stdio.h>
int main(int argc, char* argv[]) {
    int a = 10;
    int *ptr = &a;
    int **ptr_ptr = & ptr;
    printf("%d %d %d",ptr_ptr,*ptr_ptr,**ptr_ptr);
    return 0;
}
