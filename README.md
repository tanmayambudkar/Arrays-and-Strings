# Aim: To study and implement C++ Arrays and Strings

# Apparatus Required:
Visual Studio

# Theory:

Arrays:

An array in C or C++ is a collection of items stored at contiguous memory locations and elements can be accessed randomly using indices of an array. They are used to store similar types of elements as in the data type must be the same for all elements. They can be used to store the collection of primitive data types such as int, float, double, char, etc of any particular type. To add to it, an array in C or C++ can store derived data types such as the structures, pointers, etc. There are two types of arrays:

+ One Dimensional Array
  
+ Multi Dimensional Array

2. <ins>One Dimensional Array</ins>: A one dimensional array is a collection of same data.

<img width="800" height="400" alt="Screenshot 2025-08-06 083128" src="https://github.com/user-attachments/assets/66e5d96f-f8d1-41a0-be93-f260f123d047" />

1. <ins>Multi-Dimensional Array</ins>: A multi-dimensional array is also known as array of arrays. Generally, we use a two-dimensional array. It is also known as the matrix. We use two indices to traverse the rows and columns of the 2D array

Strings:

C++ string class internally uses character array to store character but all memory management, allocation, and null termination are handled by string class itself that is why it is easy to use.

The string data_type in C++ provides various functionality of string manipulation. They are:

+ strcpy(): It is used to copy characters from one string to another string.
+ strcat(): It is used to add the two given strings.
+ strlen(): It is used to find the length of the given string.
+ strcmp(): It is used to compare the two given string.

# Implementation:
The following cases demonstrate the usage of arrays and strings in C++
+ Basic array decleration and printing
+ Array element Search
+ Min and Max Values in Arrays
+ Reverse Array

# 1. Algorithm for "Reverse Number Using Arrays"
Purpose: To input numbers into an array and display them in reverse order.

Algorithm:

Start

Declare an integer a to store the size of the array.

Prompt the user to enter the array size.

Read the value of a.

Declare an integer array Num[10].

Prompt the user to enter a number of values.

Loop from i = 0 to i < a:

Input Num[i]

Print "Reversed Array is:"

Loop from j = a - 1 to j >= 0:

Print Num[j]

End

# 2. Algorithm for "Print Subject marks using Array"
Purpose: To input marks of subjects and display them.

Algorithm:

Start

Declare an integer array marks[100], and variables n and i

Prompt the user to enter the number of subjects

Read value into n

Prompt the user to enter the marks

Loop from i = 0 to i < n:

Input marks[i]

Print "The Marks Are:"

Loop from i = 0 to i < n:

Print marks[i]

End



# Conclusion:
The Implentation of Strings and Array was done through various codes in C++
