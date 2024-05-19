#include "Solution.h"
int Solution::climbStairs(int n) {
    if (n <= 2) return n;  

    int oneStepBack = 2; 
    int twoStepsBack = 1; 
    int current = 0;      

    for (int i = 3; i <= n; i++) {
        current = oneStepBack + twoStepsBack; 
        twoStepsBack = oneStepBack;         
        oneStepBack = current;
    }

    return current;
}