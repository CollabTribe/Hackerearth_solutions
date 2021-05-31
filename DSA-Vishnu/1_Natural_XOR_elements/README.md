Natural XOR elements

Problem
You are given an integer . To solve the problem, you must find the minimum number of elements that must be removed from the set S = {1,2,........,N} such that the bitwise XOR of the remaining elements is 0.

Input format
The first line contains an integer t(1<=t<=10^5) representing the number of test cases.
The first and only line of each test case contains an integer N(1<=N<=10^9) representing the number presented to you.
Output format

For each test case, print a single line.

The first integer k represents the minimum number of elements and you must remove from S. Then, k space-separated integers a1,a2,......,ak follows representing the elements that you have to remove from S.

If there are multiple possible solutions, output the lexicographically largest one. A solution a1,a2,......,ak is lexicographically larger than solution b1,b2,.......,bk, if ai > bi where i is the smallest index where ai != Bi.

It can be proved that in an optimal solution k <= 31.


Sample Input:
4
1
2
3
4
Sample Output:
1 1
2 2 1
0
1 4


Time Limit: 1
Memory Limit: 256
Source Limit:


Explanation
After removing 1 there are no elements left. Therefore XOR of the remaining elements becomes 0.

After removing 1 and 2 there are no elements left. Therefore XOR of the remaining elements becomes 0.

We don't need to remove any element as XOR of 1, 2, and 3 is already 0.

After removing 4 we are left with 1,2 and 3 whose XOR is 0.





SOLUTION EXPLANATION:
This solution is based on the property of Bitwise XOR, XOR of (0,1,2,3) = 0, XOR of(4,5,6,7)=0, .......
Binary Representation of numbers:
0 - 0000
1 - 0001
2 - 0010
3 - 0011
4 - 0100
5 - 0101
6 - 0110
7 - 0111
8 - 1000

XOR Operations:
A   B       Q
---------------
0   0       0
0   1       1
1   0       1
1   1       0

for - number of elements | we print

1   - 1                  | 1            N%4=1
2   - 2                  | 2 1          N%4=2
3   - 0                  |              N%4=3
4   - 1                  | 4            N%4=0
Similarly, we can see that the output will be repeating itself if we make a series, so we will be taking N%4
5   - 1                  | 1            N%4=1
6   - 2                  | 6 1
7   - 0                  |
8   - 1                  | 8

9   - 1                  | 1            N%4=1
10  - 2                  | 10 1

Generalizing:
1   - 1 1       N%4=1
2   - 2 N 1     N%4=2
3   - 0         N%4=3
4   - 1 N       N%4=0

5   - 1 1
6   - 2 N 1
7   - 0
8   - 1 N

9   - 1 1
10  - 2 N 1

The output is repeating in the interval of 4!
