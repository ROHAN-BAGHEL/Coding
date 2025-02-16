# 0002 Rotate an Array by K

> Easy

**Problem statement**

Given an array 'arr' with 'n' elements, the task is to rotate the array to the left by 'k' steps, where 'k' is non-negative.

**Example:**

'arr '= [1,2,3,4,5]

'k' = 1  rotated array = [2,3,4,5,1] <br>
'k' = 2  rotated array = [3,4,5,1,2] <br>
'k' = 3  rotated array = [4,5,1,2,3] and so on. <br>

Detailed explanation ( Input/output format, Notes, Images )

**Sample Input 1:**

> 8 <br>
> 7 5 2 11 2 43 1 1 <br>
> 2 <br>

**Sample Output 1:**

> 2 11 2 43 1 1 7 5

**Explanation of Sample Input 1**:

Rotate 1 steps to the left: 5 2 11 2 43 1 1 7 <br>
Rotate 2 steps to the left: 2 11 2 43 1 1 7 5 <br>

**Sample Input 2**:

> 4 <br>
> 5 6 7 8 <br>
> 3 <br>

**Sample Output 2**:

> 8 5 6 7

**Explanation of Sample Input 2**:

Rotate 1 steps to the left: 6 7 8 5 <br>
Rotate 2 steps to the left: 7 8 5 6 <br>
Rotate 2 steps to the left: 8 5 6 7 <br>

**Expected Time Complexity**: 

**O(n)**, where ‘n’ is the size of the array ‘arr’ and ‘k’ is the number of rotations.

**Constraints**:

> 1 <= 'n' <= 10^3 <br>
> 1 <= 'arr'[i] <= 10^9 <br>
>1 <= 'k' < 'n' <br>
