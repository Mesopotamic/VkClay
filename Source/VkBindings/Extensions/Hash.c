#include "VkClay/VkClay.h"

#include <stdbool.h>
#include <string.h>

// So here's how the hash table lookup works.
// We take a string in as a key, that is then hashed into a random looking number. The number is then taken
// modulo the length of the list. But what happens when you have a collision? Well we could have a linked list
// at each collision, but that's gonna be slow on the cache. So what we can do instead is insert on the next
// available spot. And luckily the CPU will load the surrounding entries. We'll use FNV-1a

// Numbers which control the hashing - Yoinked from wikipedia
#define FNV_OFFSET_BASIS (14695981039346656037)
#define FNV_PRIME (1099511628211)
#define HASH_TABLE_SIZE (10)

const char* hash_table[HASH_TABLE_SIZE] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

vkc_ExtensionProps vkc_LookupExtension(const char* extensionName)
{
    // Start by hashing the string one byte at a time
    uint64_t hash = FNV_OFFSET_BASIS;
    uint64_t byte;

    // We need to take a copy of the pointer or else we won't be able to use the key to ensure we've found it
    char* key = extensionName;

    while (byte = *key++) {
        hash ^= byte;       // hash = hash XOR byte
        hash *= FNV_PRIME;  // hash = hash x FNV_prime
    }

    // Now modulo the hash by the length of the array
    hash %= HASH_TABLE_SIZE;

    // Now we check each element of the table, starting at the hash value. If we get to the end of the array
    // without finding an element, then the user has entered in an incorrect key.
    bool found = false;
    for (uint32_t i = 0; i < HASH_TABLE_SIZE; i++) {
        // Is the key correct?
        if (!strcmp(extensionName, hash_table[hash])) {
            found = true;
            break;
        }
        hash = (hash + 1) % HASH_TABLE_SIZE;
    }

    // Where we able to find the hashed element?
    if (found) {
        vkc_ExtensionProps props = {.extensionName = hash_table[hash],
                                    .extensionProvidedFunctionNames = NULL};
        return props;
    } else {
        vkc_ExtensionProps props = {.extensionName = "Not found!!!!!",
                                    .extensionProvidedFunctionNames = NULL};
        return props;
    }
}
