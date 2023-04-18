# C - Pointers, arrays and strings

##### This contains all the tasks for C pointers, arrays and strings 18/04/23

#### operations with the pointer data use 
```
int the_space;
int *n = &the_space;
```
modifying pointer address use no star prefix

```
int the_space = 2;
/**
 *  point to the_space & notice the **difference** 
 *  when initializing and addressing in one go versus
 *  doing it separately.
*/
int *n = &the_space;
```
***Be mindful of the differences*** 
this is now the same as 
pointer = &the_space;

```
*pointer;
pointer = n;
```
##### ***WARNING*** increments p itself
```
*n++;
```

##### make a null pointer
```
n = 0;
```
##### this sets pointer reference to 4;
```
*p = *p + *p;
```
##### increments the value pointed to by p
```
(*p)++;
```
##### printing pointers address
```
int a;
printf("&a   = %p\n", (void *) &a);
```
##### swapping two integers - helpful pointer example

```
void swap_int(int *a, int *b)
{
	int tmp;
	
	tmp = *a;
	*a = *b;
	*b = tmp;
	
}
```