#!/bin/python3
import sys

def main():
    n = int(input().strip())
    arr = [int(arr_temp) for arr_temp in input().strip().split(' ')]

    for i in range(n):
        print(arr[n-i-1], end=" ")

if __name__ == '__main__':
    main()

''' test_input:
4
1 4 3 2
'''

''' expected_output:
2 3 4 1
'''
