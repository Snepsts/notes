#!/bin/python3
import sys

def main():
    n = int(input().strip())

    for i in range(1,11):
        print(n, "x", i, "=", n*i)

if __name__ == '__main__':
    main()

''' test_input:
2
'''

''' expected_output:
2 x 1 = 2
2 x 2 = 4
2 x 3 = 6
2 x 4 = 8
2 x 5 = 10
2 x 6 = 12
2 x 7 = 14
2 x 8 = 16
2 x 9 = 18
2 x 10 = 20
'''
