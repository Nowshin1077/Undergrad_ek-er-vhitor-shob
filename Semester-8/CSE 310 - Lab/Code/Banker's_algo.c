Bankers Algorithm for Deadlock Detection

#include &lt;stdio.h&gt;
 
int current[5][5], maximum_claim[5][5], available[5];
int allocation[5] = {0, 0, 0, 0, 0};
int maxres[5], running[5], safe = 0;
int counter = 0, i, j, exec, resources, processes, k = 1;
 
int main()
{
printf(&quot;\nEnter number of processes: &quot;);
     scanf(&quot;%d&quot;, &amp;processes);
 
     for (i = 0; i &lt; processes; i++)
{
         running[i] = 1;
         counter++;
     }
 
     printf(&quot;\nEnter number of resources: &quot;);
     scanf(&quot;%d&quot;, &amp;resources);
 
     printf(&quot;\nEnter Claim Vector:&quot;);
     for (i = 0; i &lt; resources; i++)
{
        scanf(&quot;%d&quot;, &amp;maxres[i]);
     }
 
   printf(&quot;\nEnter Allocated Resource Table:\n&quot;);
     for (i = 0; i &lt; processes; i++)
{
        for(j = 0; j &lt; resources; j++)
{

   scanf(&quot;%d&quot;, &amp;current[i][j]);
         }
     }
 
     printf(&quot;\nEnter Maximum Claim Table:\n&quot;);
     for (i = 0; i &lt; processes; i++)
{
         for(j = 0; j &lt; resources; j++)

{

             scanf(&quot;%d&quot;, &amp;maximum_claim[i][j]);
         }
     }
 
printf(&quot;\nThe Claim Vector is: &quot;);
     for (i = 0; i &lt; resources; i++)
{
        printf(&quot;\t%d&quot;, maxres[i]);
}
 
     printf(&quot;\nThe Allocated Resource Table:\n&quot;);
     for (i = 0; i &lt; processes; i++)
{
        for (j = 0; j &lt; resources; j++)
{

             printf(&quot;\t%d&quot;, current[i][j]);
         }

printf(&quot;\n&quot;);

     }
 
     printf(&quot;\nThe Maximum Claim Table:\n&quot;);

     for (i = 0; i &lt; processes; i++)
{
         for (j = 0; j &lt; resources; j++)

{
        printf(&quot;\t%d&quot;, maximum_claim[i][j]);

         }
         printf(&quot;\n&quot;);
     }
 
     for (i = 0; i &lt; processes; i++)
{
         for (j = 0; j &lt; resources; j++)

{

             allocation[j] += current[i][j];
         }
     }
 
     printf(&quot;\nAllocated resources:&quot;);
     for (i = 0; i &lt; resources; i++)
{
         printf(&quot;\t%d&quot;, allocation[i]);
     }
 
     for (i = 0; i &lt; resources; i++)
{
        available[i] = maxres[i] - allocation[i];
}
 
     printf(&quot;\nAvailable resources:&quot;);
     for (i = 0; i &lt; resources; i++)
{
         printf(&quot;\t%d&quot;, available[i]);
     }
     printf(&quot;\n&quot;);
 
     while (counter != 0)
{
         safe = 0;
         for (i = 0; i &lt; processes; i++)

{

             if (running[i])
{
                 exec = 1;
                 for (j = 0; j &lt; resources; j++)

{

                     if (maximum_claim[i][j] - current[i][j] &gt; available[j])

{
                         exec = 0;
                         break;
                     }
                 }
                 if (exec)
{

                     printf(&quot;\nProcess%d is executing\n&quot;, i + 1);
                     running[i] = 0;
                     counter--;
                     safe = 1;
 
                     for (j = 0; j &lt; resources; j++)

{

                         available[j] += current[i][j];
                     }
                break;

                 }
             }
         }
         if (!safe)

{

             printf(&quot;\nThe processes are in unsafe state.\n&quot;);
             break;
         }
else
{

             printf(&quot;\nThe process is in safe state&quot;);
             printf(&quot;\nAvailable vector:&quot;);
 
             for (i = 0; i &lt; resources; i++)

{

                 printf(&quot;\t%d&quot;, available[i]);

