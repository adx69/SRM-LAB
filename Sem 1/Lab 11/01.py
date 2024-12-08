'''
Input:

Read the student's grade.
Read the student's attendance percentage.
Categorize based on grade and attendance:

If the grade is 90 or above:
If the attendance is 95% or above, categorize as "Excellent".
Otherwise, categorize as "Very Good".
Else if the grade is between 75 and 89:
If the attendance is 85% or above, categorize as "Good".
Otherwise, categorize as "Average".
Else if the grade is between 50 and 74, categorize as "Pass".
Else, categorize as "Fail".
Output:

Print the category of the student.


ALGORITHM:
1. Read the student's grade.
2. Read the student's attendance percentage.
3. Categorize based on grade and attendance:
    a. If the grade is 90 or above:
        i. If the attendance is 95% or above, categorize as "Excellent".
        ii. Otherwise, categorize as "Very Good".
    b. Else if the grade is between 75 and 89:
        i. If the attendance is 85% or above, categorize as "Good".
        ii. Otherwise, categorize as "Average".
    c. Else if the grade is between 50 and 74, categorize as "Pass".
    d. Else, categorize as "Fail".
'''

grade = float(input("Enter the student's grade: "))
attendance = float(input("Enter the attendance percentage: "))

# Categorize based on grade and attendance
if grade >= 90:
    if attendance >= 95:
        category = "Excellent"
    else:
        category = "Very Good"
elif 75 <= grade < 90:
    if attendance >= 85:
        category = "Good"
    else:
        category = "Average"
elif 50 <= grade < 75:
    category = "Pass"
else:
    category = "Fail"

print(f"The student is categorized as: {category}")