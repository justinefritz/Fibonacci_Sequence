nth = int(input("Enter the nth term: "))
i = -1
j = 0
for k in range(nth-1):
    next_num = i + j
    i = j
    j = abs(next_num)
    
print(j)