#!/bin/python3
import sys

class Person:
    def __init__(self, initialAge):
        # Add some more code to run some checks on initialAge
        if initialAge < 0:
            initialAge = 0
            print("Age is not valid, setting age to 0.")
        self.age = initialAge
    def amIOld(self):
        # Do some computations in here and print out the correct statement to the console
        if (self.age < 13):
            print("You are young.")
        elif (self.age < 18):
            print("You are a teenager.")
        else:
            print("You are old.")
    def yearPasses(self):
        # Increment the age of the person in here
        self.age += 1

def main():
    runs = int(input())

    for i in range(runs):
        init_age = int(input())
        p = Person(init_age)
        p.amIOld()
        p.yearPasses()
        p.yearPasses()
        p.yearPasses()
        p.yearPasses()
        p.amIOld()

''' test_input:
4
-1
10
16
18
'''

''' expected_output:
Age is not valid, setting age to 0.
You are young.
You are young.

You are young.
You are a teenager.

You are a teenager.
You are old.

You are old.
You are old.
```
