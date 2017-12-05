#include <stdio.h>
#include <stdbool.h>

int arr[1000000],count[1000000],extra[10000];

int main ()
{
	int n,i,max,pos=1,p,j,cnt,l;

	while (scanf ("%d",&n) != EOF && n)
    {
        memset (count,0,sizeof(count));

        for (i=0; i<n; i++)
        {
            scanf ("%d",&arr[i]);
            ++count[arr[i]];
        }

        printf ("Case %d: ",pos++);

        if (n == 1)
            printf ("%d has appeared 1 time.\n",arr[0]);
        else
        {
            max = count[0],p = 0;

            for (i=1; i<1000000; i++)
            {
                if (count[i] > max)
                {
                    max = count[i];
                    p = i;
                }
            }

            bool k = false,m = false;

            for (i=0; i<100000; i++)
            {
                if (count[i] > 1)
                {
                    k = true;
                    break;
                }
            }

            j = cnt = 0;

            for (i=0; i<1000000; i++)
            {
                if (max == count[i])
                {
                    cnt++;
                    extra[j++] = i;
                }

                if (cnt > 1)
                    m = true;
            }

            if (k == false)
                printf ("Same appearance.\n");
            else
            {
                if (m == false)
                    printf ("%d has appeared %d times.\n",p,max);
                else
                {
                    if (cnt == 2)
                        printf ("%d and %d have appeared %d times each.\n",extra[0],extra[1],max);
                    else
                    {
                        for (l=0; l<cnt; l++)
                        {
                            if (l == cnt-1)
                                printf ("and %d",extra[l]);
                            else if (l == cnt-2)
                                printf ("%d ",extra[l]);
                            else
                                printf ("%d, ",extra[l]);
                        }

                        printf (" have appeared %d times each.\n",max);
                    }
                }
            }
        }
    }

    return 0;
}
