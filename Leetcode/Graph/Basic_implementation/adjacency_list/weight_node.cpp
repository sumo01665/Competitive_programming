#ifndef WEIGHT_NODE
#define WEIGHT_NODE

template <class data_type> 

/// @brief define the weight graph 
typedef struct{
    data_type info;
    int weight; 
    struct edgenode *next;


}edgenode; 



#endif