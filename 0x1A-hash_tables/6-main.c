#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

int main(void)
{
	hash_table_t *ht;
	    char *value;
	    char *key;

	    ht = hash_table_create(1024);
	    hash_table_set(ht, "c", "fun");
	    hash_table_set(ht, "python", "awesome");
	    hash_table_set(ht, "Bob", "and Kris love asm");
	    hash_table_set(ht, "N", "queens");
	    hash_table_set(ht, "Asterix", "Obelix");
	    hash_table_set(ht, "Betty", "Cool");
	    hash_table_set(ht, "98", "Battery Street");
	    hash_table_set(ht, "c", "isfun");

	    key = strdup("Tim");
	    value = strdup("Britton");
	    hash_table_set(ht, key, value);
	    key[0] = '\0';
	    value[0] = '\0';
	    free(key);
	    free(value);
	    hash_table_set(ht, "98", "Battery Street");
	    hash_table_set(ht, "hetairas", "Bob");
	    hash_table_set(ht, "hetairas", "Bob Z");
	    hash_table_set(ht, "mentioner", "Bob");
	    hash_table_set(ht, "hetairas", "Bob Z Chu");
	    hash_table_print(ht);

	    return (EXIT_SUCCESS);
}
