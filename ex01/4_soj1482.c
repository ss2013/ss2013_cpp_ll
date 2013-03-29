#include <stdio.h>

typedef struct {
    int num;
    int chn;
    int math;
    int eng;
    int total;
}Score;

Score scores[1000];

int isLess(Score score1, Score score2) {
    if(score1.total < score2.total) return 1;
    if(score1.total == score2.total) {
        if(score1.chn < score2.chn) return 1;

        if(score1.chn == score2.chn && score1.num > score2.num) return 1;
    }
    
    return 0;
}

void swap(Score* score1, Score* score2) {
    Score tmp = *score1;
    *score1 = *score2;
    *score2 = tmp;
}

void quickSort(Score* array, int beg, int end) {
    int beg_tmp = beg, end_tmp = end;
    while(beg_tmp < end_tmp) {
        while(beg_tmp < end_tmp && isLess(array[beg_tmp], array[end_tmp]))
            end_tmp--;
        if(beg_tmp < end_tmp && isLess(array[beg_tmp], array[end_tmp]) != 1) {
            swap(&array[beg_tmp], &array[end_tmp]);
            beg_tmp++;
        }

        while(beg_tmp < end_tmp && isLess(array[beg_tmp], array[end_tmp]))
            beg_tmp++;
        if(beg_tmp < end_tmp && isLess(array[beg_tmp], array[end_tmp]) != 1) {
            swap(&array[beg_tmp], &array[end_tmp]);
            end_tmp--;
        }
    }
    if(beg < beg_tmp - 1)
        quickSort(array, beg, beg_tmp - 1);
    if(end_tmp + 1 < end)
        quickSort(array, end_tmp + 1, end);
}

int main() {
    
    int n, i;
    int first = 1;

    /*freopen("input.txt", "r", stdin);*/

    while(scanf("%d", &n) != EOF) {
        if(first != 1)
            printf("\n");
        for(i = 0; i < n; i++) {
            scanf("%d%d%d", &scores[i].chn, &scores[i].math, &scores[i].eng);
            scores[i].num = i + 1;
            scores[i].total = scores[i].chn + scores[i].math + scores[i].eng;
        }
        quickSort(scores, 0, n - 1);
        for(i = 0; i < 5 && i < n; i++) {
            printf("%d %d\n", scores[n - i - 1].num, scores[n - i - 1].total);
        }
        first = 0;
    }

    return 0;
}                                 