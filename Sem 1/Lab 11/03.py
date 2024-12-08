'''
Write a Python program to print a specified list after removing the 0th, 4th and 5th elements.
  Sample List : ['Red', 'Green', 'White', 'Black', 'Pink', 'Yellow’]

  Expected Output : ['Green', 'White', 'Black’]

ALGORITHM:

1. Create a list with the specified elements.
2. Remove the 0th, 4th, and 5th elements from the list.
3. Print the updated list.

'''

# Create a list with the specified elements
sample_list = ['Red', 'Green', 'White', 'Black', 'Pink', 'Yellow']

# Remove the 0th, 4th, and 5th elements from the list
del sample_list[5]
del sample_list[4]
del sample_list[0]

# Print the updated list
print("The updated list:", sample_list)
