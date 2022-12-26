# import fileinput
import os
import sys

op, our = "", ""


#?  RPS
ROCK = 1 
PAPER = 2 
SCISSORS  = 3 


#? SCORE
LOSE = 0 
DRAW = 3 
WIN = 6

#? 
SHAPE =      {'A': ROCK, 'B': PAPER, 'C': SCISSORS,
             'X': ROCK, 'Y': PAPER, 'Z': SCISSORS}

score  = 0

with open(os.path.join(sys.path[0], "input.txt"), "r") as f:
    fileIn = f.readlines(); 
    for i in fileIn: 
        op, our = i[0], i[2]
         
        op_shape, our_shape = SHAPE[op], SHAPE[our] 
        score +=  our_shape 
        if op_shape == our_shape: score+= DRAW 
        elif (op_shape == ROCK and our_shape == PAPER) or (op_shape == PAPER and our_shape == SCISSORS) or (op_shape == SCISSORS and our_shape == ROCK): 
            score += WIN
            
        
        
print(score) 

def input_file()

    # print(a)
    # feat: https://www.tutorialspoint.com/How-to-open-a-file-in-the-same-directory-as-a-Python-script


# print(our) 

fileIn = ""; 
file1 = []
file2 = []


#* input[0] = computer, input[2] = user 

# print("aaaa")

# ? Dictionary 


def input_(file):
    for i in file: 
        print(i)
        


def part1(input):
    for op, you in input: 
        op_shape, our_shape = SHAPE[op], SHAPE[you] 
        score +=  our_shape 
        if op_shape == our_shape: score+= DRAW 
        elif (op_shape == ROCK and our_shape == PAPER) or (op_shape == PAPER and our_shape == SCISSORS) or (op_shape == SCISSORS and our_shape == ROCK): 
            score += WIN
            
    return score
        
        

# ? input(fileIn); 


def return_score_input(x): 
      return x
      
      
