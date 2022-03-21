//? Summary: different common types of time complexities
//! This page is not about code at all (well just a few). I am writing all of this here because I have setted my six commenting, so it is much easier for 
//! me to move back and forth with the coloring style, while if you have read this and decided not to change the color of the comments, will have absolute 
//! no affects in reading this. Here's the summary of the math knowledge that I believe a lot of you will get used with, and enjoy doing it in the long run.
//! I will also put them as text file, in case you want to use it.

//? If you need visualization, the following stackOverflow answer is definitely the one you are looking for: 
// https://stackoverflow.com/questions/1592649/examples-of-algorithms-which-has-o1-on-log-n-and-olog-n-complexities
/* 
feat: constant-time algorithm 
? O(1): constant-time algorithm
    - A typical constant-time algo. that does not depend on the input. It is usually a direct formula that calculates the answer like: What is the area of a circle with the radius of 5?

feat: logarithmic algorithm 
? O(log n): logarithmic algorithm
    - A typical algorithm often halves the input size at each step. The running time of such an algorithm is logarithmic, because log2(n) equals the number of times n must be divided by 2 to get 1
    
feat: linear algorithm     
? O(n): linear algorithm 
    - An algorithm goes through the input a constant number of times. This is usually the best possible time complexity for almost all of the problem where finding the logarithm is not possible. 
       It is usually necessary to access each input element at least once before reporting the answer. 
    * examples: 
        addition or subtraction algorithm, algorithm that needs to search for a value without having an ordered set, or the 
            * BRUTE-FORCE one. 

feat: square root algorithm 
? O(sqrt(n)): square root algorithm 
    - An algorithm that can be summed up as somewhere between O(n) and O(log n).
    ? Properties: 
    - Since the sqrt(n) = n/sqrt(n) (which is the an obvious way to find sqrt(n) lol), so generally, as it's the sqrt(n) of n, the input is usually in the middle of the answer
    
feat: Divide and Conquer algorithm 
? O(n log n): N log n algorithm 
    - An algorithm that indicates the algorithm sorts the input, because the time complexit of efficient sorting algorithms is O(n log n)
    *example: 
        - It is useful for the data structure where each operation takes O(log n) time

feat: Quadratic algorithm 
? O(n^2): Quadratic algorithm
    - An algorithm that often contains two nested loops.

feat: Cubic algorithm 
? O(n^3): Cubic algorithm
    - An algorithm that often contains three nested loops. 
    
feat: Exponential algorithm 
? O(2^n): Exponential algorithm
    - An algorihtm that ususally indicate that it gets iterated through all of the subsets of the input elements. 
    * example: 
        - The subset of {1,2,3} is {1}, {2}, {3}, {1,2}, {2,3}, {1,3}, {1,2,3} and null subsets. 

feat: Factorial algorithm 
? O(n!): Factorial algorithm
    - The time complexity that indicates that the algorithm iterates through all permutations of the input elements. 
    * example: 
        - the permutations of {1,2,3} are (1,2,3), (1,3,2), (2,1,3), (2,3,1), (3,1,2) and (3,2,1). 

feat: Polynomial algorithm 
? O(n^k): Polynomial algorithm
    - Time complexity is !(at most) O(n^k) where k is a constant. The above time complexities except O(2^n) and O(n!) is polynomial. 
    ! Except for the factorial and exponential, they are polynomial run-time
? Why? What about n log n? 
    Because by definition, the polynomial-time algorithm is an algorithm whose execution time is either given by a polynomial on the size of the input, or 
    can be bounded by such a polynomial (If it is solved by a polynomial-time algo., then they are the tractable problems). 
    ! So usually, the algorithm that can be written in polynomial time complexity roughly means that the algor. is efficient. 

feat: NP-hard problems
? They are just simply that those problems where nobody know how to solve them efficiently. 
*/