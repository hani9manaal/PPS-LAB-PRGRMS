#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    float discriminant, root1, root2,root3;
    float real,imaginary;
    printf("\nQuadratic Eqn is of the form ax^2+bx+c=0\n");
    printf("\nenter the coefficients a,b,c");
    scanf("%f%f",&a,&b,&c);
    discriminant=b*b-4*a*c;
    if(discriminant>0)
    {root1=(-b+sqrt(discriminant))/(2*a);
    root2=(-b-sqrt(discriminant))/(2*a);
    printf("\nRoot1=%.2f\n",root1);
    printf("\nRoot2=%.2f\n",root2);

    }
    else if(discriminant==0)
    {
        root1=-b/(2*a);
        printf("\nboth roots are equal.\n");
        printf("root=%.2f\n",root1);

    }
    else
    {
        real=-b/(2*a);
        imaginary=sqrt(-discriminant)/(2*a);
        printf("Root1=%.2f+%.2fi\n",real,imaginary);
        printf("root2=%.2f-%.2fi\n",real,imaginary);

    }
    return 0;
}
