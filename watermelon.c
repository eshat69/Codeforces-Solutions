## Problem 4A: Watermelon

**Link to Problem**: [Codeforces Problem 4A](http://codeforces.com/contest/4/problem/A)

### Problem Statement:
You are given a watermelon with a weight of `w` kilograms. You need to determine if it can be divided into two parts such that each part weighs an even number of kilograms.

### Approach:
- If the weight is odd, it's impossible to divide it into two even parts.
- If the weight is 2, it's also impossible to divide it as each part would weigh 1 kg.
- Any other even weight greater than 2 can be divided into two even parts.

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
