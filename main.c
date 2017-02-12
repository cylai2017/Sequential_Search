
#include <stdio.h>

int sequential_search(int* array, int array_length, int key){
    for(int i = 0; i < array_length; i++){
        if(array[i] == key){
            return (i+1); // Return the index of where the key is
        }
    }
    return (-1); // If the key can not be found in array
}
