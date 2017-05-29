//
//  QuickSort.c
//  Algorithms
//
//  Created by yangli on 2017/5/25.
//  Copyright © 2017年 yangli. All rights reserved.
//
// 快速排序
#include <stdio.h>

int a[101], n;

void quickSort (int left, int right) {
    if (left > right)
        return;
    int i, j, t, temp;
    i = left;
    j = right;
    temp = a[left];
    while (i != j) {
        while (a[j] >= temp && i < j) {
            j--;
        }
        while (a[i] <= temp && i < j) {
            i++;
        }
        if (i < j) {
            t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
    a[left] = a[i];
    a[i] = temp;
    quickSort(left, i-1);
    quickSort(i+1, right);
}

int quickMain(int argc, const char * argv[]) {
    int i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    quickSort(1, n);
    for (i = 1; i <= n; i++) {
        printf("%d", a[i]);
    }
    return 0;
}
