for s in[*open(0)][2::2]:print('NYOE S'[s.count('U')%2::2])

'''
vvvvvvvvvvvvvv[*open(0)]:

This opens the standard input stream (typically, this is the console input or a file redirection).
open(0) reads the input, and [*open(0)] converts this into a list of strings (each line of the input will be an element in the list).
[2::2]:

This slices the list of lines obtained from open(0).
2::2 means:
Start at index 2 (the third element, since indices are zero-based).
Use a step of 2, meaning it picks every second element starting from index 2.
So, this is selecting every second line starting from the third line in the input.

for s in [...]:

This starts a for loop, iterating through the sliced list of lines (s will represent each line).
s.count('U'):

For each line s, the count('U') method counts how many times the character 'U' appears in the string.
s.count('U') % 2:

The result of s.count('U') is taken modulo 2 (% 2), which will give 0 if there is an even number of 'U' characters, and 1 if there is an odd number.
'NYOE S'[s.count('U') % 2::2]:

'NYOE S' is a string.
The s.count('U') % 2 gives either 0 or 1, which determines how the string 'NYOE S' is sliced.
If s.count('U') % 2 == 0, it slices starting from index 0 and uses a step of 2, effectively taking the characters at positions 0, 2, 4, ... from 'NYOE S' (which gives 'NO S').
If s.count('U') % 2 == 1, it slices starting from index 1 and uses a step of 2, effectively taking characters at positions 1, 3, 5, ... from 'NYOE S' (which gives 'YO').
print(...):

It prints the result of the sliced string 'NYOE S'.
'''