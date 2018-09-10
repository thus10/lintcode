class Solution {
public:

    int aplusb(int a, int b) {
        int sum=a^b;
        int carry=(a&b)<<1;
        return carry==0?sum:aplusb(sum,carry);
    }
};


/*位运算https://www.jianshu.com/p/7bba031b11e7

a = 0011, b = 1001;
start;

first loop;
1.1 sum = 1010
1.2 carry = 0010
1.3 carry != 0 , go on;

second loop;
2.1 sum = 1000;
2.2 carry = 0100;
2.3 carry != 0, go on;

third loop;
3.1 sum = 1100;
3.2 carry = 0000;
3.3 carry == 0, stop; result = sum;

end
*/
