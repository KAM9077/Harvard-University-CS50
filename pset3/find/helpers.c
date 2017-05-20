/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
int i;

for (i=0; i<=n;i++)
{
{
if (values[i] == value  )
return true;
}


}
return false;

}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
int i,j;
int l[1];
for(j=0; j<n; j++)
        {
 for(i=0; i<n; i++)
  {
    if( values[i] > values[i+1])
      {
      l[0] = values[i];
      values[i] = values[i+1];
      values[i+1] = l[0];
      }
  }

        }




}
