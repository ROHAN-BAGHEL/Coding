# Equilibrium Index

> Easy

**Problem statement**

You are given an array Arr consisting of N integers. You need to find the equilibrium index of the array.

An index is considered as an equilibrium index if the sum of elements of the array to the left of that index is equal to the sum of elements to the right of it.

**Note**:

> 1. The array follows 0-based indexing, so you need to return the 0-based index of the element. <br>
> 2. Note that the element at the equilibrium index won’t be considered for either left sum or right sum. <br>
> 3. If there are multiple indices which satisfy the given condition, then return the left-most index i.e if there are indices i,j,k…. which are equilibrium indices, return the minimum among them <br>
> 4. If no such index is present in the array, return -1. <br>
Detailed explanation ( Input/output format, Notes, Images )

**Constraints**:

> 1 <= T <= 50 <br>
> 1 <= N <= 10^5 <br>
> -10^4 <= Arr[i] <= 10^4 <br>
> Time Limit: 1 sec

**Sample Input 1**:

> 1 <br>
> 6 <br>
> 1 7 3 6 5 6

**Sample Output 1*:

> 3

**Explanation for Sample Input 1**:

The sum of elements to the left of arr[3] = 1 + 7 + 3 = 11. <br>
The sum of elements to the right of arr[3] = 5 + 6 = 11. <br>
Hence the answer is 3. <br>

**Sample Input 2**:

> 2 <br>
> 6 <br>
> 1 2 2 9 3 2 <br>
> 4 <br>
> 1 2 3 4

**Sample Output 2**:

> 3 <br>
> -1 <br>

**Explanation for Sample Input 2**:

In the first test case of sample input 2, the sum of elements on the left of index 3 (arr[3] = 9) is five which is equal to the sum of elements on the right of arr[3]. <br>
For the second test case, since no such index exists, we print -1.