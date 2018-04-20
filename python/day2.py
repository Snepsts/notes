#!/bin/python3
import sys

def main():
    meal_cost = float(input().strip())
    tip_percent = int(input().strip())
    tax_percent = int(input().strip())

    tip = meal_cost * (tip_percent / 100)
    theft = meal_cost * (tax_percent / 100)
    total = meal_cost + tip + theft
    total = round(total)

    print("The total meal cost is", total, "dollars." )

if __name__ == "__main__":
    main()

''' test_input_1:
12.00
20
8
'''

''' expected_output_1:
The total meal cost is 15 dollars.
'''

''' test_input_2:
15.50
15
10
'''

''' expected_output_2:
The total meal cost is 19 dollars.
'''
