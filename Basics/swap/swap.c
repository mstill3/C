#include <stdio.h>
void main()
{
    float x, y;		/* x and y are of float type	     */
    float *fp, *fp2;		/* fp and fp2 are pointers to float  */

    x = 6.5;		/* x now contains the value 6.5	     */

/* print contents and address of x   */
    printf("Value of x is %f, address of x %8x\n", x, &x);
	
    fp = &x;				/* fp now points to location of x    */
		
   /* print the contents of fp	     */
    printf("Value in memory location fp (%8x) is %f\n",fp,  *fp);

					/* change content of memory location */
    *fp = 9.2;
    printf("New value of x is %f = %f \n", *fp, x);

					/* perform arithmetic 	             */
    *fp = *fp + 1.5;
    printf("Final value of x is %f = %f \n", *fp, x);

					/* transfer values                   */
    y = *fp;
    fp2 = fp;
    printf("Transfered value into y = %f and fp2 = %f \n", y, *fp2);
}