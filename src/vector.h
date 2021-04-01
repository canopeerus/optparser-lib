#ifndef VECTOR_H
#define VECTOR_H

#define VECTOR_MIN_CAPACITY 4

typedef struct vector {
    void **items;
    int capacity;
    int size;
} vector;

void vector_init (vector*);

void vector_init_with_capacity (vector*, int);

int vector_get_size (vector*);

void vector_add(vector*, void*);

void* vector_get_element(vector*, int);

void vector_delete(vector*, int);

void vector_free(vector*);

#endif
