//? Summary: Huffman Coding
    //- Huffman coding is a greedy algorithm that constructs an optimal code for compressing a given string. The algorithm builds a 
    //- binary tree based on the frequencies of the characters in the string. 
    //? The move to the left of the binary tree represent the 0, while the move to the right side will represent the 1. 
    /* 
        The weight of the number is the times the character occurs in the string: At each step two nodes with minimum weights are combined by creating a new node whose weight is the
        sum of the weights of the original nodes. The process continues until all nodes have been combined. 
        *Example: 
        AABACDACA
        SO: A appears 5 times, let's write A(5)
        A(5) B(1) C(2) D(1)
        let's reorder the letters to their frequencies 
                     2       
                   0/ \1
        5   2      1   1 
        A   C      B   D
        Since the two is a bit hefty, let's use the new nodes as 2
                  4   
                0/ \1  
               2     2       
               /   0/ \1
        5   2      1   1 
        A   C      B   D
        Let's finish it with the last node:
              9            
            /  \      
    *     0/    \ 1
          /      \ 
        5         4   
    *           0/ \1  
               2     2       
    *         /    0/ \1
            2      1   1 
        A   C      B   D
    ! The * line is how you read the code For each letters, you read from the top to the bottom:    
        char    codeword
          A          0
          B        110
          C         10
          D        111
        
    */