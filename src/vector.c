#include <stdlib.h>
#include <stdio.h>

#include "vector.h"

void vector_init (vector_t* vec) {
    vec->size = 0;
    vec->capacity = VECTOR_MIN_CAPACITY;
    vec->items = malloc(sizeof(void*) * vec->capacity);
}

void vector_init_with_capacity (vector_t* vec, int capacity) {
   if (capacity <= 0) {
       vec = NULL;
       return;
   }
   vec->size = 0;
   vec->capacity = capacity;
   vec->items = malloc(sizeof(void*) * vec->capacity);
}

void* vector_get_last_element (vector_t vec) {
    if (vec.size > 0 && vec.capacity > 0) {
        return vec.items[vec.size - 1];
    }
    return NULL;
}

void* vector_get_element (vector_t vec, int index) {
    if (index >= 0 && index < vec.size) {
        printf ("INDEEEX%d\n", index);
        printf ("SIZZEE %d\n", vec.size);
        return vec.items[index];
    }
    return NULL;
}

void vector_free (vector_t* vec) {
    free(vec->items);
}

int vector_get_size (vector_t vec) {
    return vec.size;
}

void vector_add (vector_t* vec, void* new_elem) {
    if (vec->size < vec->capacity) {
        vec->items[vec->size++] = new_elem;
    }
}