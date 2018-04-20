#!/bin/python3
import sys

def main():
    num_of_tests = int(input())

    for t in range(num_of_tests):
        str_input = input()
        even_indexes = ""
        odd_indexes = ""

        for i in range(0, len(str_input)):
            if i % 2 == 0: #even
                even_indexes += str_input[i]
            else: #odd
                odd_indexes += str_input[i]

        print(even_indexes, odd_indexes)

if __name__ == '__main__':
    main()

''' test_input:
2
Hacker
Rank
'''

''' expected_output:
Hce akr
Rn ak
'''
