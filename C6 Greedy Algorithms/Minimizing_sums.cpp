//? Summary: Minimizing sums
    // We have the following sum: |a1 − x|^c +|a2 − x|^c +··· +|an − x|^c, We want this sum to be the minimum 
    
/* 
    feat: Case c = 1
        |a1 − x| +|a2 − x| +··· +|an − x|, so for using the random set of numbers [1,2,9,2,6], the best solution for x here is 2
        |1 − 2| +|2 − 2| + |9 − 2| +|2 − 2| + |6 − 2| = 12 
        ? Generally, the best choice for x is the median of the numbers, ex. the middle number after sorting. 
        So for the list of the number here: {1,2,9,2,6}, after the sort => {1,2,2,6,9}. So that the median number here will be 2. It iss an optimal choice, because if x is smaller than the median
        , the sum becomes smaller by increasing x, and if x is larger than the median, the sum becomes smaller by decreasing x. If n is even and there are two medians, both medians and all 
        values between them are optimal choices. 
    
    feat: Case c = 2
        (a1 − x)^2 +(a2 − x)^2 +··· +(an − x)^2
        In here if x = 4, the sum will be 46. 
        ? Generally, the best choice for x here is the average of the numbers. This result derives from the facts that expanding of the first equation:
        nx^2 −2x(a1 + a2 +··· + an)+(a1^2 + a2^2 +··· + an^2)
    !    (1)     (2)                      (3)
    The (3) does not depend on x, so we can ignore it. Let's call this as a funciton nx^2 - 2xs (where s is the remaining parts of the 2nd parts)
    Since this is the parabola with the roots of x = 0 and x = 2s/n, so half of this (or saying that the vertex of the parabola will line up at x = s/n). This is the average of the numbers a1, a2,...,an
    

 
*/