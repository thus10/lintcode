/*
描述
给出两个整数 aa 和 bb , 求他们的和。

你不需要从输入流读入数据，只需要根据aplusb的两个参数a和b，计算他们的和并返回就行。

说明
a和b都是 32位 整数么？

是的
我可以使用位运算符么？

当然可以
样例
如果 a=1 并且 b=2，返回3。

挑战
显然你可以直接 return a + b，但是你是否可以挑战一下不这样做？（不使用++等算数运算符）
*/
class Solution {
public:

    int aplusb(int a, int b) {
        int sum=a^b;
        int carry=(a&b)<<1;
        return carry==0?sum:aplusb(sum,carry);
    }
};
