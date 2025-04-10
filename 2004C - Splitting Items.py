R=lambda:map(int,input().split())
t,=R()
exec(t*'n,k=R();a=sorted(R());print(max(n%2*a[0],sum(a[::-2])-sum(a[-2::-2])-k));')
"""
Explanation of Code:
R = lambda: map(int, input().split())

This defines a lambda function R that reads a line of input, splits it by spaces, and converts each part to an integer. It essentially reads space-separated integers from input.

t, = R()

This line uses R() to read the number of test cases (t). The = R() is used to unpack the result from R(), assuming only one value is returned (hence the trailing comma).

exec(t * 'n,k=R();a=sorted(R());print(max(n%2*a[0],sum(a[::-2])-sum(a[-2::-2])-k));')

This is the core of the code, and it's a bit tricky due to the use of exec. The exec function is used to execute a string of Python code.

The string being executed is repeated t times, one for each test case:

n, k = R(): Reads two integers, n and k.
a = sorted(R()): Reads a list of integers, sorts it, and stores it in a.
print(max(n % 2 * a[0], sum(a[::-2]) - sum(a[-2::-2]) - k)):
The first part of the max compares n % 2 * a[0], which is either 0 or a[0] depending on whether n is even or odd.
The second part computes the sum of alternating elements of the sorted list, starting from the end (a[::-2]), subtracting alternating elements from the second last (a[-2::-2]), and subtracting k.
The max function selects the larger value between these two calculations.
What the Code Does:
It processes t test cases.
For each test case, it:
Reads two integers n and k.
Reads a list of integers, sorts them, and then performs two operations involving the first element of the sorted list and the alternating sums from the end of the list.
Prints the maximum result from the two calculated values.
"""