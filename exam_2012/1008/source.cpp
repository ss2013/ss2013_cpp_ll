/*
 * =====================================================================================
 *
 *       Filename:  source.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2013年06月04日 22时45分16秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhujin Liang (LZJ), alfredtofu@gmail.com
 *   Organization:
 *
 * =====================================================================================
 */

const int MAX_COL = 1000;

bool check(int arr[][MAX_COL], int row, int target) {
    int x = 0, y = MAX_COL - 1;

    while (x < row && y >= 0) {
        if (arr[x][y] == target) return true;

        if (arr[x][y] > target) y--;

        if (arr[x][y] < target) x++;
    }
    return false;
}

