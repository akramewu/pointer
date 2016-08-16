/* 
 * File:   main.c
 * Author: isl
 *
 * Created on July 25, 2016, 4:41 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
   /*
    int a;
    int *p;
    p = &a;
    *p=5;
     printf("%d\n",a,*p);
     *p=6;
     printf("%d\n",a,*p);
    */
    /*
    int x;
    int y;
    int *p;
    int *q;
    
     p =&x;
     q=&y;
    
     x=5;
     y=7;
    
    printf("%d %d %d %d\n",*p,x,*q,y);
    //y=8;
    p=q;
    printf("%d %d %d %d\n",*p,x,*q,y);
    x=12; y=15;
    printf("%d %d %d %d",*p,x,*q,y);  
    */
    /*
    int a=5; int *pa; pa=&a;
    char c; char *pc; pc=&c;
    
    
    printf("%d %d %d\n",a,*pa,pa);
    (*pa)++;
    printf("%d %d %d",a,*pa,pa); 
     
     */
    
    /*
    char *str="Helloworld";
    str = &str[9];
    
    printf("%s",str); 
     
     */
    
    
    
    int x=100;
    int *p;
    int **p1;
    int ***p2;
    
    p=&x;
    p1=&p;
    p2=&p1;
    
    printf("%d\n",*p);
    printf("%d\n",**p1);
    printf("%d",***p2);
    
    return (EXIT_SUCCESS);
}

