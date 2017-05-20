/**
 * recover.c
 *
 * Computer Science 50
 * Problem Set 4
 *
 * Recovers JPEGs from a forensic image.
 */
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{


    unsigned char k[512];

char x[8] ={0} ;
int a = 0 ;
FILE* outptr=NULL;

         FILE* inptr = fopen("card.raw", "r");
    if (inptr == NULL)
    {
        printf("Could not open %s.\n", "card.raw");
        return 1;
    }

while (fread(k,512,1,inptr)==1 )
{
  if(k[0]==0xff && k[1]==0xd8 && k[2]==0xff && (k[3]==0xe0 || k[3]==0xe1))
{
         sprintf(x,"%03d.jpg", a);
          outptr = fopen(x,"w");

         fwrite(k, 512, 1, outptr);

         a++;
}
else
        if (outptr!= NULL)
        fwrite(k, 512, 1, outptr);


}
    // close outfile
    if (outptr!= NULL)
    fclose(outptr);

if (inptr!= NULL)
// close infile
    fclose(inptr);



    // that's all folks
    return 0;
}
