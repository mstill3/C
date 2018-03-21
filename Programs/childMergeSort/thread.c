#include <stdio.h>
#include <pthread.h>

void *thread(void *vargp);
char **ptr;  
int main()
{
        int i;
		const int N = 2;
        pthread_t tid[N];
        char *msgs[N] = {
        "Hello from foo",
        "Hello from bar"
        };
	
	     printf("Parent thread started with PID= %d and parent PID %d\n", getpid(), getppid());

        ptr = msgs;
        for (i = 0; i < N; i++)
                pthread_create(&tid[i], NULL, thread, (void *)i);

		for (i = 0; i < N; i++)
			pthread_join(tid[i], NULL);
		 
}

void *thread(void *vargp)
{
        int myid = (int)vargp;
        static int cnt = 0;
        printf("[%d]: %s (cnt=%d) with PID= %d and parent PID %d\n",  myid,  ptr[myid],  ++cnt, getpid(), getppid());
	    int i=cnt;
	    for (;;i=i+1)
	    {
	       printf("[%d]  %d\n",myid, i);
	       sleep(cnt);
	    }
	
        return NULL;
 }

