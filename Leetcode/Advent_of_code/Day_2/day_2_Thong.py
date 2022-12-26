import numpy as np

file = np.loadtxt('input.txt', delimiter = ' ', dtype = 'str')
file1 = []
file2 = []

for i in range(len(file)): 
  file1.append(file[i][0])
  file2.append(file[i][1])

def outputval(x)->int:
  if x == 'X':
    return 1
  elif x == 'Y':
    return 2
  else:
    return 3

def play(x,y) -> int:
  if x == 'A':
    if y == 'X':
      return 3
    if y == 'Y':
      return 6
    else:
      return 0
  if x == 'B':
    if y == 'Y':
      return 3
    if y == 'Z':
      return 6
    else:
      return 0
  if x == 'C':
    if y == 'Z':
      return 3
    if y == 'X':
      return 6
    else:
      return 0

sum = 0
for i in range(len(file)):
  a = outputval(file2[i])
  b = play(file1[i],file2[i])
  sum = sum + a + b

print(sum)