/**
 * This file is for Mini-Programming Assignment #4
 * This was written by Michael Piscione
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "mini-4.h"

/**
 * searchFor takes an integer id, the number of records in the given array, and an array of Records.
 * It looks through the array of Records to find the first Record with id equal-to the given id.
 * If one is found, the index of the array where that Record is stored is returned, otherwise -1 is returned.
 * -1 is returned if the array holds nothing.
 * Parameters: int id, the id to be looked for, int numRecords, the number of records in the array,
 * Record *records, the array of Records.
 * Return: -1 if id not found OR array is empty, index of first Record with matching id otherwise.
*/
int searchFor(int id, int numRecords, Record *records) {
    // Check that there is at least one Record to look at
    if (numRecords > 0) {
        // Find the first Record with id equal to id parameter
        for (int i = 0; i < numRecords; i++) {
            // If ids are the same
            if (records[i].id == id) {
                // Return the index of the array it was found at
                return i;
            }
        }
    }

    // Return -1 if no matching id found OR numRecords = 0
    return -1;
}

int main() {
    Record *record1 = malloc(sizeof(Record));
    Record *record2 = malloc(sizeof(Record));
    Record *record3 = malloc(sizeof(Record));
    Record *record4 = malloc(sizeof(Record));
    record1->id = 1;
    strcpy(record1->name, "Michael");
    record2->id = 1;
    strcpy(record2->name, "John");
    record3->id = 1;
    strcpy(record3->name, "Joe");
    record4->id = 1;
    strcpy(record4->name, "Poe");
    Record records[4];
    records[0] = *record1;
    records[1] = *record2;
    records[2] = *record3;
    records[3] = *record4;
    Record *rptr = records;

    printf("ID found at index %d\n", searchFor(2, 4, rptr));
}