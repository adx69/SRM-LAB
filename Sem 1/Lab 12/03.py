'''
Write a Python program to check if a given value is present in a set or not.

ALGORITHM:

1. Create a set with the specified elements.
2. Print the set.
3. Check if the given value is present in the set or not.
4. Print the result.

'''

# Create a set with the specified elements
sample_set = input("Enter the elements of the set: ").split()

# Print the set
print("The set:", sample_set)


# Check if the given value is present in the set or not
value = input("Enter the value to check: ")
if value in sample_set:
    print(value, "is present in the set.")
else:
    print(value, "is not present in the set.")