//
//  BinarySearch.c
//  Algorithms
//
//  Created by 杨立 on 2017/5/29.
//  Copyright © 2017年 yangli. All rights reserved.
//
// 二分查找，前提是有序数组，假定从小到大排序
#include <stdio.h>

int binarySearch(int array[], int n, int value) {
    int left = 0;
    int right = n - 1;
    int middle;
    while (left <= right) {
        middle = left + ((right - left) >> 1);
        if (array[middle] < value) {
            left = middle + 1;
        } else if (array[middle] > value) {
            right = middle - 1;
        } else {
            return middle;
        }
    }
    return -1;
}

int main(int argc, const char * argv[]) {
    int a[10], value;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &value);
    printf("%d", binarySearch(a, 10, value));
    return 0;
}
