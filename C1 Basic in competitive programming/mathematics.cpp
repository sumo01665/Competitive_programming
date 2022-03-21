//? Summary: Mathematics in competitive programming
//! This page is not about code at all (well just a few). I am writing all of this here because I have setted my six commenting, so it is much easier for 
//! me to move back and forth with the coloring style, while if you have read this and decided not to change the color of the comments, will have absolute 
//! no affects in reading this. Here's the summary of the math knowledge that I believe a lot of you will get used with, and enjoy doing it in the long run.
//! I will also put them as text file, in case you want to use it. 


//feat: summation formula 
/* 
? A few points about the formula: 
? In summation, a few formulas are being used to calculate of x^p number from 1 to n => Faulhaber's formula

? Arithmetic progression: 
?  The difference between two numbers is constant.
*   Example of this is: 3,7,11,15
?    Formula for the sum of consecutive number: 
!    a + ... + b = (n(a + b))/2
*       Example: 3 + 7 + 11 + 15 = (4* (3 + 15))/2 = 36

? Geometric progression:   
?   The ratio between two numbers is a constant. 
*   Example of this is: 3,6,12,24
?    Formula for the sum of consecutive number: 
!       a + ak + ak^2 + ... + b = (bk - a)/(k - 1) 
            Where k is the ratio, a is the first number in the series, while b is the last number of the series
*           Example: 3 + 6 + 12 + 24 = (24 * 2 - 3)/(2 - 1) = 45 
? Proof: 
?   S = a + ak + ak^2 + ... + b (1)
?  kS = ak + ak^2 + ak^3 + ... + bk (2)
? Using the (2) - (1), we have: 
? kS - S = bk - a
todo: special case 
    1 + 2 + ... + 2^(n-1) = 2^n - 1
? Harmonic sum 
    Summation for 1 to n of 1/x = 1 + 1/2 + 1/3 + ... + 1/n
    ? What is its upperbound: 
    !    It is log2(n) + 1
    ?    A way to estimate this is to estimate the number that is closest to the power of 2 (floor)
    * Example: 1 + 1/2 + 1/3 + 1/4 + 1/5 + 1/6 <= 1 + 1/2 + 1/2 + 1/4 + 1/4 + 1/4 (changing the three to the two, while changing the ones after the four to four until it reaches the eight)
    * todo: it can't exceed the power of four 
*/


//feat: Set theory
/* 
? What is set? 
    A set is a collection of elements
*   example: 
        set of X = {2, 4, 7} contains elements 2, 4 and 7 
    The symbol Ø denotes an empty set
    abs(S) denotes the size of a set S
*   example: 
     4 ∈ X 
     5 ∉ X

? Intersection 
    A ∩ B consists of elements that are in both A and B 
*   example:
    A  = {2,3,34} | B = {3, 24, 32} | Then A ∩ B = {3}
? Union 
    A ∪ B consists of elements that are in A or B or both 
*   example:     
    A  = {2,3,34} | B = {3, 24, 32} | Then A ∪ B = {2,3,34,32,24}
? Complement
    Ā consist of element that are not in A
    ! universal set(here I denoted as US): it is what this is depended on, for example, if the universal set here is not comprised of: 
*   example    
    A = {1,2,5,7} | US = {x ∈ N, x < 10} | then Ā = {3,4,6,8,9}
? Difference 
    B \ A = B ∩ Ā consists of elements that are in A but not in B //! The example below swaps the two letters, but the idea is the same. 
*   example:
    A = {2,3,7,8} and B = {3,5,8}, then A \B = {2,7}. 
    ! Remember: It is not what is not in both set that negation happens (in this example we didn't use 5 in set B for the difference). It is only depends on the first set 
    
? What is a subset? 
    A is a subset of S, denotes by A ⊆ S
! A set S always has 2^|S|!
* example: 
    The set of S = {2,3} has a subset of: Ø, {2}, {3}, {2,3}, which is 2^2 = 4 subsets
    The set of S = {4,3,2} has a subset of: Ø, {2}, {3}, {4}, {2,3}, {3,4}, {2,4}, {2,3,4}, which is 2^3 = 8 subsets
todo: There are several sets that are used like N (natural numbers), Z (integers), Q (rational) and R (irrational (or real number))
todo: Fun facts: 
?    Natural number can be {0,1,2,...} or {1,2,3, ....}. Some places they are used whole numbers as {0,1,2,...} and natural numbers as {1,2,3,...}, but that sounds pretty wrong 
?    Naturals without zero: N^*
?    Naturals with zero: N(subscripts)0
The form of these sets are written as: 
    {f(n): n ∈ S}
*   example: 
    X = {2n: n ∈ Z} contains all of the even integer 
    
*/

//feat: Logic
/* 
? Basic implication: true(1) and false(0)
    This holds true even when you perform any operations, for example, looking at the code below where I decide to find the element of the code, it shows you whether 0
    is false, that it uses the element 0 that it sees in the code. The same thing happen with true, where it accesses the second element of the array, which is 2 in this 
    case
TODO: Lets assume this is 4 cases of A and B
*            A         B
*   Case 1:  0         0
*   Case 2:  0         1
*   Case 3:  1         0
*   Case 4:  1         1
?   Negation 
    The expression ¬A will have the opposite value of A. 
*            ¬A         ¬B
*   Case 1:   1          1
*   Case 2:   1          0
*   Case 3:   0          1
*   Case 4:   0          0
? Conjunction
    The expression A ∧ B is true if both A and B is true 
*            A   ∧   B
*   Case 1:      0     
*   Case 2:      0       
*   Case 3:      0      
*   Case 4:      1       
? disjunction 
   The expression A ∨ B is true if A or B or both are true.
*            A   ∨    B
*   Case 1:      0      
*   Case 2:      1       
*   Case 3:      1        
*   Case 4:      1      
? implication
    The expression A ⇒ B is true if whenever A is true, B is true
?   I found this explanation is a bit confusing. My explanation is this: 
    The expression A ⇒ B is true if there is a possibility that whether A implies B to be true, even it could not happen. Think of this as two sets, which one of them is the subset of the others. 
*   example:
    You can think of this as 3 sets (A, B and Universal set). A is the subsets of B and B is the subset of Universal set (US). (So it's implied that A is a subset of US.)
    So  let's put an element in A, if A is true, then can B has that element? Yes (B is true(1)). It must be. So this statement must be true(1)
        let's put an element in B, if B is true, so if A is false (or in other words, can the element be in the middle of A and B). Yes. It must be. So this statement is also true (1)
        Let's put an element in A, but this time, can B has that element? Yes, like the first statement, it must be. So this statement can't be possible. Then A => B is false (0)
        Last one is a bit confusing one. If there is no elements in A, then it must not be in B? No, it could be in B as well. But it could lie somewhere outside of B but inside 
            of the universal set. Because the statement that I state is possible, then as a consequence, the output will be true (1). 
!   The important thing here is that if A (is true or false here) implies the scenarios that B can happens, then its true. 
    
*            A    ⇒   B
*   Case 1:       1     
*   Case 2:       1     
*   Case 3:       0     
*   Case 4:       1      
? equivalence
    The expression A ⇔ B is both true or both false. 
*            A   ⇔   B
*   Case 1:      1
*   Case 2:      0
*   Case 3:      0
*   Case 4:      1

? Summary of the true table 
*            A         B | ¬A         ¬B |  A   ∧   B |  A   ∨    B | A   ⇒   B   | A   ⇔   B
*   Case 1:  0         0 |  1          1 |      0     |      0      |     1       |      1   
*   Case 2:  0         1 |  1          0 |      0     |      1      |     1       |      0       
*   Case 3:  1         0 |  0          1 |      0     |      1      |     0       |      0 
*   Case 4:  1         1 |  0          0 |      1     |      1      |     1       |      1 
*                             negation     conjunction  disjunction     implication   equivalence

? predicate: 
    An expression that is true or false depending on its parameters. Predicates are usually denoted by capital letters
* example: 
    P(x) is true exactly when x is a prime number
    so P(7) is true, while P(8) is not. 

? Quantifier: 
    Connects a logical expression to the elements of a set. 
?       ∀ (for all) and ∃ (there is)
*   example: 
1.        ∀x(∃y(y < x))
todo: explanation: for all of the element x in the set, there is an element of y such that y is less than x. 
    
2. ∀x((x > 1 ∧ ¬P(x)) ⇒ (∃a(∃b(a > 1 ∧ b > 1 ∧ x = ab))))
todo: explanation: For all of the element x in the set which is bigger than 1 and is not a prime number, it implies that there is such an a and such an b where a and b is larger
todo:               than 1 and x is a product of a and b 
*/

//feat: Function
/* 
?  Floor function and ceil function 
        ⌊x⌋ (or floor(x)) rounds the number x down  
        ⌈x⌉ (or ceil(x))rounds the number x up 
?  Min and max function 
*   example:                
        min(1,2,3) = 1; 
        max(1,2,3) = 3; 
?  Factorial
        The product from 1 to n of x = 1 * 2 * 3 * ... * n = n! 
*   example:
        6! = 6 * 5 * 4 * 3 * 2 * 1 = 720 
? Fibonacci numbers 
    f(0) = 0 
    f(1) = 1
    f(n) = f(n - 1) + f(n - 2)
    ? Binet's formula can be used to calculate that 
    f(n) = (1 + sqrt(5))^n - (1 - sqrt(5))^n/2^n*sqrt(5)
? Logarithm 
    Denotes as logk(x) where k is the base of the logarithm. 
    logk(x) = a => k^a = x
!   It is the time it takes to divide the x by the k to reach 1 
    ? It is useful for the analysis of algorithms, because it helps with efficient algorithms have something at each step. 
    ? Properties: 
        logk(ab) = logk(a) + logk(b)
        logk(x^n) = nlogk(x)
        logk(a/b) = logk(a) - logk(b)
        logu(x) = logk(x)/logk(u)
    ? Natural logarithm: of a number x is a logarithm whose base where e is approximately 2.71828. 
    ! Properties: it is useful to know the number of digits in the different bases of the number 
        floor(logb(x) + 1), where b is the base where the number is written in, and x is the number 
                

 
*/
#include <bits/stdc++.h> 
using namespace std; 
int main(){
    int arr[4] = {1,2,3,4};
    cout << arr[false] << "\n"; //*Output: 1
    cout << arr[true] << "\n" ; //*Output: 2
}