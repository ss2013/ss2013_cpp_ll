#include<stdio.h>

int main() {
    int i, a[10], j, k = 0;
    for(i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    scanf("%d", &j);

    j += 30;
    for(i = 0; i < 10; i++) {
        if (a[i] <= j)
            k++;
    }

    printf("%d\n", k);
    return 0;

}
