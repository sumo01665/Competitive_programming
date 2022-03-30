//? Greedy algorithms
    //- Construct a solution to the problem by always making a choice that looks the best at the moment
    //- It never takes back its choices, but directly constructs the final solution. 
    //! Therefore, it is usually very efficient
    //? The locally optimal choices in a greedy algorithm should be globally optimal
    
/* 
* Example: Imagine you have a list of coin in your hand called set s, decide the minimum of the coins you must have to get to n (repetition allowed):
? Greedy algorithm: 
    1st: Select the largest possible coin, until the required sum of money has been constructed 
    ? Does it always work? If the coins are in CAD, then the greedy algorithm will always work (1,2,5,10)
    ! The problem with the set of these money is that, the sum of the two previous numbers are smaller than the next one. 
    
* Example: A general case: Having a set of {1,3,4}, if you follow the same algorithm before this, if the target sum is 6, then using the same algorithm will not work
    6 = 4 + 1 + 1 ( From the biggest number to the smallest number)
      = 3 + 3     ( This is the correct solution)
    

*/