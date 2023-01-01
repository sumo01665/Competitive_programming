#include<bits/stdc++.h>
using namespace std;

// Define the number of runs for the test data
// generated
#define RUN 5
#define NUMBER_OF_ARRAYS 10

// Define the range of the test data generated
#define MAX 10

int main()
{
    // Uncomment the below line to store
    // the test data in a file
    freopen("Array_Test_Cases.in", "w", stdout);

    // For random values every time
    srand(time(NULL));

    //Random weird test cases
    printf("[ %d, %d]\\n", 0,0);
    printf("[ %d, %d]\\n", INT_FAST16_MAX,INT16_MAX);


    for (int i = 0; i < NUMBER_OF_ARRAYS; i++)
    {
        printf("[");
        for (int i=1; i<=RUN; i++){
            printf("%d", rand() % MAX);
            if (i != RUN) printf(", ");
        }
        printf("]");
        printf("\\n");

    }

    // Uncomment the below line to store
    // the test data in a file
    fclose(stdout);
    return(0);
}