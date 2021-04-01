#include <stdlib.h>
#include <stdio.h>

#include "vector.h"

void vector_init (vector* vec) {
    vec->size = 0;
    vec->capacity = VECTOR_MIN_CAPACITY;
    vec->items = malloc(sizeof(void*) * vec->capacity);
}

void vector_init_with_capacity (vector* vec, int capacity) {
   if (capacity <= 0) {
       vec = NULL;
       return;
   }
   vec->size = 0;
   vec->capacity = capacity;
   vec->items = malloc(sizeof(void*) * vec->capacity);
}

void* vector_get_element(vector* vec, int index) {
    if (index >= 0 && index < vec->size) {
        return vec->items[index];
    }
    return NULL;
}
