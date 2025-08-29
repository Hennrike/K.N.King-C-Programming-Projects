### Chapter 07 | Project 01
The square2.c program of Section 6.3 will fail (usually by printing strange answers) if
i * i exceeds the maximum int value. Run the program and determine the smallest value
of n that causes failure. Try changing the type of i to short and running the program
again. (Don’t forget to update the conversion specifications in the call of printf!) Then
try long. From these experiments, what can you conclude about the number of bits used to
store integer types on your machine?

Smallest value of `n` that causes failure while `i` is of type

`short`: 32767

`int`: 46341

`long`: 65536
