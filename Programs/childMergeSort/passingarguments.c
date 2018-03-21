#include <pthread.h>
#include <stdio.h>
 
struct char_print_parms
{ 
char character;
int count;
};
 
void* char_print (void* params)
{
 
	struct char_print_parms* p = (struct char_print_parms*) params;
	int i;
	for (i = 0; i < p->count; i++)
		printf("%c", p->character);
	printf("\n");
	return NULL;
}
/* The main program. */
int main ()
{
	pthread_t thread1_id;
	pthread_t thread2_id;
	struct char_print_parms thread1_args;
	struct char_print_parms thread2_args;

	/* Create a new thread to print 300 â€™xâ€™s. */
	thread1_args.character = 'x';
	thread1_args.count = 300;
	pthread_create (&thread1_id, NULL, &char_print, &thread1_args);

	/* Create a new thread to print 200 oâ€™s. */
	thread2_args.character = 'o';
	thread2_args.count = 200;
	pthread_create (&thread2_id, NULL, &char_print, &thread2_args);

	pthread_join(thread1_id, NULL);
	pthread_join(thread2_id, NULL);

return 0;
}