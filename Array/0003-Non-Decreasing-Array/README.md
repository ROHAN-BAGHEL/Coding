# 0003 Non Decreasing Array

> Moderate

**Problem statement**

You have been given an integer array/list 'ARR' of size 'N'. Write a solution to check if it could become non-decreasing by modifying at most 1 element.

We define an array as non-decreasing, if ARR[i] <= ARR[i + 1] holds for every i (0-based) such that (0 <= i <= N - 2).

Detailed explanation ( Input/output format, Notes, Images )

**Constraints** :

> 1 <= T <= 50 <br>
> 1 <= N <= 10 ^ 4 <br>
> - 10 ^ 9 <= ARR[i] <= 10 ^ 9 <br>

Where 'N' is the size of the given array/list.

And, ARR[i] denotes the i-th element in the array/list 'ARR'.

Time Limit: 1sec

**Sample Input 1** :

> 2 <br>
> 3 <br>
> 8 4 6 <br>
> 3 <br>
> 8 4 2 <br>

**Sample Output 1** :

> true <br>
> false

**Explanation to Sample Input 1** :

For Test Case 1 we can have a possible non-decreasing array : 2 4 6

Where only the element at index 0 has been modified.

For Test Case 2 there is no possible way to make the array non-decreasing by modifying at most 1 element.

**Sample Input 2** :

> 2 <br>
> 6 <br>
> -2 7 -1 0 1 2 <br>
> 5 <br>
> -10 10 0 10 3 <br>

**Sample Output 2** :

> true <br>
> false

**Explanation to Sample Input 2** :

For Test Case 1 we can have a possible non-decreasing array : -2 -2 -1 0 1 2

Where only the element at index 1 has been modified

For Test Case 2 there is no possible way to make the array non-decreasing by modifying at most 1 element.