#!/bin/python3
import sys

def main():
    N = int(input().strip())

    if N % 2 == 1: #n is odd
        print("Weird")
    else: #n is even
        if N >= 2 and N <= 5:
            print("Not Weird")
        elif N >= 6 and N <= 20:
            print("Weird")
        elif N > 20:
            print("Not Weird")

if __name__ == '__main__':
    main()

''' test_input_1:
3
'''

''' expected_output_1:
Weird
'''

''' test_input_2:
24
'''

''' expected_output_2:
Not Weird
'''
