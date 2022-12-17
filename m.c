#include <stdio.h>

int main()
{
	int marks;
	char grade;
	scanf("%d", &marks);
	if(marks>76 && marks<100) grade = 'A';
    else if(marks>51 && marks<75) grade ='B';
    else if(marks>26 && marks <50) grade ='C';
    else grade = 'D';



	printf("%c", grade);
	return 0;
}
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int num;
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
            printf("%d ",i);
    }
    return 0;
}
