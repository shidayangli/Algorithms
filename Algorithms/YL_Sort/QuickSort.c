//
//  QuickSort.c
//  Algorithms
//
//  Created by yangli on 2017/5/25.
//  Copyright © 2017年 yangli. All rights reserved.
//
// 快速排序
#include <stdio.h>

void quickSort (int a[], int left, int right) {
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
    quickSort(a, left, i-1);
    quickSort(a, i+1, right);
}

int quickMain(int argc, const char * argv[]) {
    int i, a[101], n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    quickSort(a, 1, n);
    for (i = 1; i <= n; i++) {
        printf("%d", a[i]);
    }
    return 0;
}
