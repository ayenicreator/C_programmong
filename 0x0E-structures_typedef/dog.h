#ifndef DOG_H
#define DOG_H
#define typedef 
#define STRUCT_DOG
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
typedef STRUCT_DOG;
#endif
