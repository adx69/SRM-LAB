'''
Write a Python program to remove duplicates from a list.

ALGORITHM:
1. Read the list of elements.
2. Create an empty list to store the unique elements.
3. Iterate through each element in the list:
    a. If the element is not in the unique list, add it to the unique list.
4. Print the unique list.

'''

# Read the list of elements
elements = input("Enter the list of elements separated by spaces: ").split()

# Create an empty list to store the unique elements
unique_elements = []

# Iterate through each element in the list
for element in elements:
    # If the element is not in the unique list, add it to the unique list
    if element not in unique_elements:
        unique_elements.append(element)

# Print the unique list
print("The list after removing duplicates:", unique_elements)