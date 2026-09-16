#include <stdio.h>
#define SIZE 10

int hash_table[SIZE];

void initHashTable() {
    for (int i = 0; i < SIZE; i++) {
        hash_table[i] = -1;
    }
}

int hashFunction(int key) {
    return key % SIZE;
}

void insert(int key) {
    int index = hashFunction(key);
    
    while (hash_table[index] != -1) {
        index = (index + 1) % SIZE;
    }
    
    hash_table[index] = key;
    printf("Inserted %d at index %d\n", key, index);
}

int search(int key) {
    int index = hashFunction(key);
    
    while (hash_table[index] != -1) {
        if (hash_table[index] == key) {
            return index;
        }
        index = (index + 1) % SIZE;
    }
    
    return -1;
}

void display() {
    printf("\nHash Table:\n");
    for (int i = 0; i < SIZE; i++) {
        if (hash_table[i] == -1) {
            printf("Index %d: Empty\n", i);
        } else {
            printf("Index %d: %d\n", i, hash_table[i]);
        }
    }
}

int main() {
    initHashTable();
    
    insert(5);
    insert(15);
    insert(25);
    insert(35);
    insert(45);
    
    display();
    
    int key = 25;
    int result = search(key);
    if (result == -1) {
        printf("\n%d not found\n", key);
    } else {
        printf("\n%d found at index %d\n", key, result);
    }
    
    key = 40;
    result = search(key);
    if (result == -1) {
        printf("%d not found\n", key);
    } else {
        printf("%d found at index %d\n", key, result);
    }
    
    return 0;
}