## Problem 4A: Watermelon

**Link to Problem**: [Codeforces Problem 4A](http://codeforces.com/contest/4/problem/A)
222989274	Sep/11/2023 23:40UTC+6	eshat69	A - Watermelon	GNU C11	Accepted	30 ms	0 KB
### Problem Statement:
You are given a watermelon with a weight of `w` kilograms. You need to determine if it can be divided into two parts such that each part weighs an even number of kilograms.

### Solution Explanation:
We check if the weight is even and greater than 2. If both conditions are met, the answer is "YES". Otherwise, it's "NO".

### Code (C):

#include<stdio.h>
int main (){
    int w ;

    scanf("%d",&w);
    if(w%2==1){
        printf("NO");
    } else {
        if (w==2){
            printf("NO");
        } else {
            printf("YES");
        }
    }
    return 0 ;
}
