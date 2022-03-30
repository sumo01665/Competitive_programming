//? Summary: Data compression
    //- A binary code assigns for each character of a string a codeword that consists of bits. 
    /* 
        So if the character is known to have a set length, then assuming: 
        char    codeword
          A         00
          B         01
          C         10
          D         11
    Therefore, the constant length code, which means that the length of each codeword is the same. Hence: 
    * Example:
        000001001011001000 = AABACDACA 
    ? This code, the length of the compressed string is 18 bits. We can compress the string better if we use a variable-length code where codewords may have different lengths.
    todo: However, this is not very convenient, since some words take too much space when it happens very rarely (like B and D the last case), this setting is more convenient: 
        char    codeword
          A          0
          B        110
          C         10
          D        111
    *Example: 
        001100101110100 = AABACDACA (This one is shorter, so it's more optimal with the code as we only use 15 bits instead of 18 bits) 
    ? This is still fine for four letters. There is no other interpretation for the code that being mention here. 
    ! However, if I write the following code, there will be a confusion on where I land a new codewords that can cause confusion to the previous code. 
    If char E =  1, then the code can be interpreted as: 
        001100101110100 = AAEEAAEAEEEAEAA 
    ? How to get through this problem: 
    !   The law for this is that nocodeword is a prefix of another codeword. So if 0 is chosen as A, then there will be no letters that can be represented as 0 as their first letter.
    
    */
    