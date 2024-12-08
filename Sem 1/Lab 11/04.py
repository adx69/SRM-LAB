'''
Write a Python program to find the list of words that are longer than length of the list.

ALGORITHM:
1. Read the list of words.
2. Find the length of the list.
3. Create an empty list to store the words longer than the length of the list.
4. Iterate through each word in the list:
    a. If the length of the word is greater than the length of the list, add it to the new list.
5. Print the list of words longer than the length of the list.

'''

# Read the list of words
words = input("Enter the list of words separated by spaces: ").split()

# Find the length of the list
list_length = len(words)

# Create an empty list to store the words longer than the length of the list
longer_words = []

# Iterate through each word in the list
for word in words:
    # If the length of the word is greater than the length of the list, add it to the new list
    if len(word) > list_length:
        longer_words.append(word)

# Print the list of words longer than the length of the list
print("The list of words longer than the length of the list:", longer_words)

