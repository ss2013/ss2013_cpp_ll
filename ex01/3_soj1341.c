#include <stdio.h>

#define MAX_LEN 100

void buddleSort(int* arrays, int len) {
    int i, j;
    for(i = len - 1; i >= 1; i--) {
        for(j = 0; j < i; j++) {
            if(arrays[j] > arrays[j + 1]) {
                arrays[j] ^= arrays[j + 1];
                arrays[j + 1] ^= arrays[j];
                arrays[j] ^= arrays[j + 1];
            }
        }
    }
}

int main() {
    int n, i, j, counts;
    int nums[MAX_LEN];

    /*freopen("input.txt", "r", stdin);*/

    while(scanf("%d", &n) != EOF) {
        for(i = 0; i < n; i++) {
            scanf("%d", &nums[i]);
        }
        buddleSort(nums, n);

        j = -1;
        counts = 0;
        for(i = 0; i < n; i++) {
            if(j == -1) {
                j = 0;
                counts++;
            } else {
                if(nums[j] == nums[i])
                    nums[i] = -1;
                else {
                    j = i;
                    counts++;
                }
            }
        }

        printf("%d\n", counts);
        for(i = 0; i < n; i++) {
            if(nums[i] != -1) {
                if(i != 0)
                    printf(" ");
                printf("%d", nums[i]);
            }
        }
        printf("\n");
    }
    return 0;
}                                 