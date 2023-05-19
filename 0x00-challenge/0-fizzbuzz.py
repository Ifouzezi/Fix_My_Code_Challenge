#!/usr/bin/python3
""" FizzBuzz
    Change of logic if (num % 3) == 0 and (num % 5) == 0:
"""
import sys


def fizzbuzz(n):
    """
    FizzBuzz function prints numbers from 1 to n separated by a space.
    
    - For multiples of three, print "Fizz" instead of the number, and for
      multiples of five, print "Buzz".
    - For numbers that are multiples of both three and five, print "FizzBuzz".
    """
    if n < 1:
        return

    result = []
    for num in range(1, n + 1):
        if (num % 3) == 0 and (num % 5) == 0:
            result.append("FizzBuzz")
        elif (num % 3) == 0:
            result.append("Fizz")
        elif (num % 5) == 0:
            result.append("Buzz")
        else:
            result.append(str(num))
    print(" ".join(result))


if __name__ == '__main__':
    if len(sys.argv) <= 1:
        print("Missing number")
        print("Usage: ./0-fizzbuzz.py <number>")
        print("Example: ./0-fizzbuzz.py 89")
        sys.exit(1)

    number = int(sys.argv[1])
    fizzbuzz(number)
