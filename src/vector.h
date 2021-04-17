#ifndef VECTOR_H
#define VECTOR_H

#define VECTOR_MIN_CAPACITY 4

/**
 * Simple dynamic array/vector implementation
 * 1. Supports stack-style push and pop
 * 2. Dynamic reallocation on insert
 */

typedef struct vector {
    void **items;
    int capacity;
    int size;
} vector_t;

void vector_init (vector_t*);

void vector_init_with_capacity (vector_t*, int);

int vector_get_size (vector_t);

void vector_add (vector_t*, void*);

void* vector_get_element (vector_t, int);

void* vector_get_last_element (vector_t);

void vector_delete (vector_t*, int);

void vector_free (vector_t*);

static void vector_resize (vector_t*, int);

#endif
