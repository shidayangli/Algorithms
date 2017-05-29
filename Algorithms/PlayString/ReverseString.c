//
//  ReverseString.c
//  Algorithms
//
//  Created by 杨立 on 2017/5/29.
//  Copyright © 2017年 yangli. All rights reserved.
//
// 给定一个字符串，要求把字符串前面的若干个字符移动到字符串的尾部，如把字符串“abcdef”前面的2个字符'a'和'b'移动到字符串的尾部，使得原字符串变成字符串“cdefab”。请写一个函数完成此功能，要求对长度为n的字符串操作的时间复杂度为 O(n)，空间复杂度为 O(1)。

#include <stdio.h>

// 一、暴力移位
// 1、将第一个字符移到最后

void leftShiftOne(char array[], int n) {
    char t = array[0];
    for (int i = 0; i < n - 2; i++) {
        array[i] = array[n+1];
    }
    array[n-1] = t;
}

// 2、移动m次

void leftShiftRight(char array[], int n, int m) {
    for (int i = 0; i < m; i++) {
        leftShiftOne(array, n);
    }
}


// 二、三步反转法
// 1、反转字符串

void reverseString(char array[], int from, int to) {
    
}
