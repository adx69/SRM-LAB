'''
Write a Python program to get the smallest number from a list.

ALGORITHM:
1. Read the list of numbers.
2. Initialize the smallest number as the first element of the list.
3. Iterate through each number in the list:
    a. If the number is smaller than the current smallest number, update the smallest number.
4. Print the smallest number.

'''

# Read the list of numbers
numbers = list(map(int, input("Enter the list of numbers separated by spaces: ").split()))

# Initialize the smallest number as the first element of the list
smallest_number = numbers[0]

# Iterate through each number in the list
for number in numbers:
    # If the number is smaller than the current smallest number, update the smallest number
    if number < smallest_number:
        smallest_number = number

# Print the smallest number
print("The smallest number in the list is:", smallest_number)
