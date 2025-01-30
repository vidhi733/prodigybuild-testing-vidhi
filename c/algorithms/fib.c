#include <stdio.h>
#include <stdlib.h>

int main()
{
    long a;
    long b;
    
    for(a = 0, b = 1; b > a; b++)
    {
        a++;
        printf("%ld \n %ld", a, b);
    }
    
    if(b == sizeof(long))
    {
        exit(1);
    }
    
    return 0;
}

/* SonarCloud Analysis: Issues Detected in c/algorithms/fib.c. Below are the detected issues with details.
   - Line 9: Refactor this loop so that it is less error-prone. (Severity: MINOR) Location: offsets 4 to 7 */

/* Resolve SonarCloud issues in c by validating inputs, implementing secure authentication, preventing injection vulnerabilities, conducting regular security audits, and ensuring continuous improvement of the code's security posture. Additionally, conduct regular security audits to identify and resolve potential vulnerabilities, address hotspots, and ensure continuous improvement of the code's security posture. */