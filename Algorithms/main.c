//
//  main.c
//  Algorithms
//
//  Created by 杨立 on 2017/5/29.
//  Copyright © 2017年 yangli. All rights reserved.
//

#include "YL_StringHandle/ContainStringHandle.c"

int main(int argc, const char * argv[]) {
    char *s = "asdfghjkl";
    char *m = "djfhg";
    printf("%d\n", containString1(s, m));
    return 0;
}
