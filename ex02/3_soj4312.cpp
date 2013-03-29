/*
 * =====================================================================================
 *
 *       Filename:  3_soj4312.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/20/2013 08:58:26 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhujin Liang (LZJ), alfredtofu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char a[10], b[10];
    char a_r[10], b_r[10];
    int t;
    int i, j;
    int int_a, int_b;

    /*freopen("data.in", "r", stdin);*/

    scanf("%d", &t);
    while(t--) {
        scanf("%s%s", a, b);
        for(i = strlen(a) - 1, j = 0; i >= 0; i--, j++)
            a_r[j] = a[i];
        a_r[j] = '\0';

        for(i = strlen(b) - 1, j = 0; i >= 0; i--, j++)
            b_r[j] = b[i];
        b_r[j] = '\0';

        sscanf(a_r, "%d", &int_a);
        sscanf(b_r, "%d", &int_b);
        printf("%d\n", int_a + int_b);
    }
    return 0;
}                                 
