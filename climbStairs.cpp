#include "Solution.h"
int Solution::climbStairs(int n) {
    if (n <= 2) return n;  // 如果只有1或2個階梯，則可以分別以1或2種方式爬上去。

    int oneStepBack = 2;  // 爬到倒數第二個階梯的方式數。
    int twoStepsBack = 1; // 爬到倒數第三個階梯的方式數。
    int current = 0;      // 爬到當前階梯的方式數。

    for (int i = 3; i <= n; i++) {
        current = oneStepBack + twoStepsBack; // 通過將前兩個階梯的方式數相加來計算到當前階梯的方式數。
        twoStepsBack = oneStepBack;           // 更新下一次迭代的階梯數。
        oneStepBack = current;
    }

    return current; // 這將是爬到第n個階梯的不同方式數。
}