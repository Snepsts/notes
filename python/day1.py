#!/bin/python3
import sys

def main():
    # Start code given by HackerRank
    i = 4
    d = 4.0
    s = 'HackerRank '
    # End code given by HackerRank

    # Declare second integer, double, and String variables.
    second_i = 0
    second_d = 0.0 # Lol its python so this isnt really useful
    second_s = ""

    # Read and save an integer, double, and String to your variables.
    second_i = int(input())
    second_d = float(input())
    second_s = input()

    # Print the sum of both integer variables on a new line.
    print(i+second_i)

    # Print the sum of the double variables on a new line.
    print(d+second_d)

    # Concatenate and print the String variables on a new line
    # The 's' variable above should be printed first.
    print(s+second_s)

if __name__ == '__main__':
    main()

''' test_input:
12
4.0
is the best place to learn and practice coding!
'''

''' expected_output:
16
8.0
HackerRank is the best place to learn and practice coding!
```
