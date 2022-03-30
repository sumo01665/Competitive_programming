//? Summary: Tasks and deadlines problems 
    //- given n tasks with durations and deadlines and our task is to choose an order to perform the tasks. 
    //? What is the largest possible total score we can obtain? 
    /* 
    task duration deadline
     A      4        2
     B      3        5
     C      2        7
     D      4        5
    * Explanation if you don't read the book: 
    Assuming you are given a day starting from 0hr, then 4 indicates how long it takes (assuming in hours here) to finish the task. The deadline is when the clock comes. 
    Here is some penalty and reward for finishing early/late tho:
        - If you start C jobs at 0 pm, you finish the task at 2a.m. Since the deadline is at 7, you will score a (7 - 2(the time you finish the task)), hence your score here is 5
        - Then you start at B (which is at 2a.m.), the duration of the tasks is 3 hours. So if you can finish that in 3 hours, then 2 + 3 = 5 a.m. Since the deadline is 5, you get 0 score. 
        - Assume you do A next. Since the deadline is 2a.m. you start the job at 5 and finish it at 9. So your penalty is 2 - 9 = -7. 
        - The same thing apply to D. Now the time is 9 a.m. You finish it at 13. The penalty you will get is 5 - 13 = -8. 
        So the total score that you will get is -10 (5 + 0 + -7 + -8)
        
    ? How to solve this: 
    It is to simply perform the task sorted by their durations in increasing order. If we perform two tasks such t hat the first task takes longer than the second task, then
    The tasks must be performed sorted by their durations 
    
    */