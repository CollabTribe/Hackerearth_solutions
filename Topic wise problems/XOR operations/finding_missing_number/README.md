#**Find the Missing Number**
######Difficulty Level : Easy

###Problem:
You are given a list of n-1 integers and these integers are in the range of 1 to n. There are no duplicates in the list.
One of the integers is missing in the list. Write an efficient code to find the missing integer.

Example:

Input: arr[] = {1, 2, 4, 6, 3, 7, 8}
Output: 5
Explanation: The missing number from 1 to 8 is 5

Input: arr[] = {1, 2, 3, 5}
Output: 4
Explanation: The missing number from 1 to 5 is 4

##SOLUTIONS:

###THIS PROBLEM CAN BE SOLVED IN 3 WAYS:

####AS THIS FOLDER FOCUSES ON XOR OPERATIONS WE ARE GOING TO FIRST USE THE METHOD WHICH IS REAPING THE BENEFIT OF XOR OPS.

##**METHOD 1**:

This method uses the technique of XOR to solve the problem.

Approach:

-XOR has certain properties
    -Assume a1 ^ a2 ^ a3 ^ …^ an = a and a1 ^ a2 ^ a3 ^ …^ an-1 = b
    -Then a ^ b = an

####Algorithm:
1. Create two variables a = 0 and b = 0
2. Run a loop from 1 to n with i as counter.
3. For every index update a as a = a ^ i
4. Now traverse the array from start to end.
5. For every index update b as b = b ^ array[i]
6. Print the missing number as a ^ b.

### -Complexity Analysis:

    -Time Complexity: O(n).
     Only one traversal of the array is needed.
    -Space Complexity: O(1).
     No extra space is needed.



## Method 2:
This method uses the technique of the ***summation formula.***

Approach:
The length of the array is n-1. So the sum of all n elements, i.e sum of numbers from 1 to n can be calculated using the formula n*(n+1)/2. Now find the sum of all the elements in the array and subtract it from the sum of first n natural numbers, it will be the value of the missing element.

Algorithm:
1.Calculate the sum of first n natural numbers as sumtotal= n*(n+1)/2
2.Create a variable sum to store the sum of array elements.
3.Traverse the array from start to end.
4.Update the value of sum as sum = sum + array[i]
5.Print the missing number as sumtotal – sum

- Complexity Analysis:
    -Time Complexity: O(n).
     Only one traversal of the array is needed.
    -Space Complexity: O(1).
     No extra space is needed




### Modification for Overflow

##### Approach:
The approach remains the same but there can be overflow if n is large. In order to avoid integer overflow, pick one number from known numbers and subtract one number from given numbers. This way there won’t have Integer Overflow ever.

##### Algorithm:
1. Create a variable sum = 1 to which will store the missing number and a counter c = 2.
2. Traverse the array from start to end.
3. Update the value of sum as sum = sum – array[i] + c and update c as c++.
4. Print the missing number as a sum.

-Complexity Analysis:
    -Time Complexity: O(n).
     Only one traversal of the array is needed.
    -Space Complexity:O(1).
     No extra space is needed







## Method 3:
This method will work only in python.
Approach:
Take the sum of all elements in the array and subtract that from the sum of n+1 elements. For Eg:
If my elements are li=[1,2,4,5] then take the sum of all elements in li and subtract that from the sum of len(li)+1 elements. The following code shows the demonstration.

-Time Complexity: O(n)

-Auxiliary Space: O(1)


