#include <stdio.h>
int  main()

{
    int math, kisw, chem, Bio, Geo, Total, Average;
    printf("Enter marks for math\n ");
    scanf("%d", &math);
    printf("Enter marks for Kiswahili\n ");
    scanf("%d", &kisw);
    printf("Enter marks for Chemistry\n ");
    scanf("%d", &chem);
    printf("Enter marks for Biology\n ");
    scanf("%d", &Bio);
    printf("Enter marks for Geography\n ");
    scanf("%d", &Geo);
    Total = math + kisw + chem + Bio + Geo;
    Average = Total/5;
    printf("The Total marks is %d\n", Total);
    printf("The Average mark is %d\n", Average);
    return 0;    
}