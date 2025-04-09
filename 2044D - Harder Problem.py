for s in[*open(0)][2::2]:  # Iterate over every second line starting from the third line
    a=s.split()            # Split the current line into words
    d={x:1 for x in a}     # Create a dictionary with each word as key (ensures uniqueness)
    print(*d,              # Print the keys of the dictionary
          *{*map(str,range(1,len(a)+1))}-{*d})  # Print numbers that are not keys in the dictionary
