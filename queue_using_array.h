/*
Ankit Das
queue class in c++
30 July 2020
*/

#include<iostream>

class queue{
     int *array;     // pointer to the array
     int size;       // size of the queue
     int end = 0;    // element count

public:
     queue(int n){                                    // constructs a queue of size n
      size = n;
      array = (int*)malloc(sizeof(int)*n);
     }

     bool isEmpty(){
       if(end > 0){
           return false;
       }
       else{
           return true;
       }
     }

     void display(){                                  // display the queue
         unsigned int i = 0;
         for(i = 0; i < size; i++){
             printf(" %d",*(array + i));
         }

         printf("\n");
     }

     void enqueue(int n){                            // takes a value n and adds it to the end of the queue
         if(end == size){                                     // check if end of array is reached
             std::cout<<"Overflow Error: Cannot add more elements!"<<std::endl;
         }
         else{
         *(array + end) = n;                                  // add element to end
         end++;                                               // increment element count when added
        }
     }

     int dequeue(){                                 // return the value at the beginning and shifts the queue forward
        if(!isEmpty()){                                          // check if elements are left
            int value = *(array);
            for(int i = 0; i < (end - 1); i++)
                *(array + i) = *(array + (i + 1));
            *(array + end - 1) = 0;                           // set vacant position to 0
            end--;                                            // decrement element count
            return value;
            }
        else{
            std::cout<<"UnderflowError: No more elements left!"<<std::endl;
            return 0;
        }
     }
};