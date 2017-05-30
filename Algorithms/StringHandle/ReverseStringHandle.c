//
//  ReverseStringHandle.c
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
    for (int i = 0; i < n - 1; i++) {
        array[i] = array[i+1];
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

/*
 * 例如，字符串 abcdef ，若要让def翻转到abc的前头，只要按照下述3个步骤操作即可：
 *
 * 1、首先将原字符串分为两个部分，即X:abc，Y:def；
 * 2、将X反转，X->X^T，即得：abc->cba；将Y反转，Y->Y^T，即得：def->fed。
 * 3、反转上述步骤得到的结果字符串X^TY^T，即反转字符串cbafed的两部分（cba和fed）给予反转，cbafed得到defabc，形式化表示为(X^TY^T)^T=YX，这就实现了整个反转。
 */


// 1、反转字符串

void reverseString(char array[], int from, int to) {
    while (from < to) {
        char t = array[from];
        array[from++] = array[to];
        array[to--] = t;
    }
}

// 2、三次反转字符串

void LeftRotateString(char* s,int n,int m) {
    m %= n;               //若要左移动大于n位，那么和%n 是等价的
    reverseString(s, 0, m - 1);
    reverseString(s, m, n - 1);
    reverseString(s, 0, n - 1);
}
