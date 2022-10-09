#include <stdio.h>
#include <math.h>

void main()
{
    float a, b, c, real, img, disc, root1, root2;

    printf("Enter the values of a, b and c\n");
    scanf("%f%f%f",&a,&b,&c);

    if(a==0 && b==0)
    {
        printf("Roots cannot be determined\n");
    }

    else if(a==0)
    {
        printf("Linear equation\n");
        root1 = -c/b;
        printf("Root1 : %.3f\n",root1);
    }

    else 
    {
        disc = (b*b) - (4*a*c);
        if(disc==0)
        {
            printf("Roots are real and equal\n");
            root1 = root2 = -b/2*a;
            printf("Root1 : %.3f\nRoot2 : %.3f\n",root1, root2);
        }

        else if(disc > 0)
        {
            printf("Roots are real and distinct\n");
            root1 = (-b + sqrt(disc))/(2*a);
            root2 = (-b - sqrt(disc))/(2*a);
            printf("Root1 : %.3f\nRoot2 : %.3f\n",root1,root2);
        }

        else 
        {
            printf("Roots are imaginary\n");
            real = (-b/2*a);
            img = sqrt(disc)/(2*a);
            printf("Root1 : %.3f + i%.3f\nRoot2 : %.3f - i%.3f\n",real,img,real,img);
        }
    }
}
