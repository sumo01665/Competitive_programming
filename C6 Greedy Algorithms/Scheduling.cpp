//? Summary: Scheduling Problems
    // - These problems can be solved using greedy algorithms
    //? Given n events with their starting and ending times, find a schedule that includes as many events as possible
    /* 
    EVENT       STARTING TIME   ENDING TIME
    A                   1           3                     
    B                   2           5
    C                   3           9
    D                   6           8
    
    //? In this example, the maximum events that nothing can be overlapped is 2 (A and D or A and B)
    
    */
    
    /* 
    ? Here're a few algorithm that can tackle the problems
    ! The starred one is the one gets picked
    feat: Algorithm 1: The first idea is to select as short events as possible. In the example case this algorithm selects the following events:
    The line represent the time lines
    *A-------
        B------------------
            C------------------------
    *               D----
    ? In this case, the A and D events are the shortest. However, this is not always true.
    
    *Example: 
    *A---------------------------
                            B--------
    *                            D-----------------------
    ? In this case, even B is the shortest event, you can put both A and D events in the schedule without overlapping. However, if you choose B, it is the only schedule you are allowed to be a part of. 
    ! -> So this algorithm is not a good one.
    
    feat: Algorithm 2 : Select the next possible event that begins as early as possible 
    * A-------
        B------------------
    *         C------------------------
                   D----
    ? A is the one that begins as early as possible, hence it takes the first slot. C will be the next one that uses the same algorithm. However, this will not be always true. 
    
    *Example: 
    A---------------------------
    *    B----
    *            C----
    ? If I pick A event, then there's noway I can attend the event B and C even though they are the better choices to fill up the schedule.
    
    feat: Algorithm 3: Select the next possible event that ends as early as possible
    *A-------
        B------------------
            C------------------------
    *               D----
    ? This will always works. Event A and D ends quickly, hence, they guarantee a solution, as if you pick the latest ending one, then you will pick the next one that is possible. Then you can fit in as many as you can
    ! Here, the question is not taking the schedule with the less amount of time. It only asks about if the algorithm allows to return the most solution as posssible. 
    
    
    */