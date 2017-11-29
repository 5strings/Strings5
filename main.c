//
//  main.c
//  strncpy()
//
//  Created by Eun Jae Lee on 29/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//
//  strncpy(target,source,size);

#include <stdio.h>

int main(int argc, const char * argv[]) {

    char str1[10], str2[10];
    int n;
    
    printf("Enter one string: \n");
    scanf("%s", str1);
    
    printf("Enter number of characters to copy: \n");
    scanf("%d",&n);
    
    strncpy(str2,str1,n);
    
    printf("String 1 is %s\n",str1);
    printf("String 2 is %s\n",str2);
    
    getchar();
}
