Practice Problem: Create a function template named printArray that takes an array of any type and an integer representing the size of the array, and then prints every element of the array on a single line, separated by spaces.

Expected Output:

Int Array: [ 1 2 3 4 5 ]
Double Array: [ 1.1 2.2 3.3 ]
String Array: [ hello world template ]


+ Hint
The function template needs two parameters: the array (T* or T[]) and the size (int or size_t).
Use a simple for loop from index 0 up to size - 1 to iterate and print the elements.