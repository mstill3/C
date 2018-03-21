#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

void *bubblesort(void *params);   
void *merge(void *params);

int list[10] = {7, 4, 94, 23, 2, 59, 14, 0, 3, 1};
int result[10];
int numbers = 10;

typedef struct
{
    int from_index;
    int to_index;
} parameters;


int main (int argc, const char *argv[])
{
    int i = 0;
    pthread_t workers[3];
    
    printf("Original array: ");
    print(list, 0, 10);
    printf("\n");
  
    parameters *data = (parameters *) malloc (sizeof(parameters));
    data->from_index = 0;
    data->to_index = (numbers / 2) - 1;
    pthread_create(&workers[0], 0, bubblesort, data);
    
    data = (parameters *) malloc (sizeof(parameters));
    data->from_index = (numbers / 2);
    data->to_index = numbers - 1;
    pthread_create(&workers[1], 0, bubblesort, data);

    for (i = 0; i < 3 - 1; i++)
        pthread_join(workers[i], NULL);

    data = (parameters *) malloc(sizeof(parameters));
    data->from_index = 0;
    data->to_index = (numbers/2);
    pthread_create(&workers[2], 0, merge, data);
    pthread_join(workers[2], NULL);
  
    return 0;
}

void *bubblesort(void *params)
{
    parameters* p = (parameters *)params;

    //SORT
    int begin = p->from_index;
    int end = p->to_index+1;
  
    printf("Unsorted array: ");
    print(list, begin, end);
  
    for(int a = begin; a < end; a++)
    {
        for(int b = begin; b < end - 1; b++)
        {
            if(list[b] > list[b + 1])
            {
                int temp = list[b];
                list[b] = list[b + 1];
                list[b + 1] = temp;
            }
        }
    }
    
    printf("Sorted array: ");
    print(list, begin, end);
  
    for(int x = begin; x < end; x++)
    {
            result[x]=list[x];
    }
  
    printf("\n");
    pthread_exit(0);
}

void print(int nums[], int start, int end)
{
    printf("{  ");
    for(int i = start; i < end; i++)
    {
        printf("%d  ", nums[i]);
    }
    printf("}\n");
}

void *merge(void *params)
{
   
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            if(result[j] > result[j+1])
            {
                int temp = result[j];
                result[j] = result[j+1];
                result[j+1] = temp;
            }
        }
    }
    
    printf("Final unsorted array: ");
    print(list, 0, 10);
    
    printf("Final sorted array: ");
    print(result, 0, 10);
    
    pthread_exit(0);
}