    #include<stdio.h>
     
    int sum (int a,int b)
    {
       int sun = a + b;
     
        return sun;
     
    }
     
     
    int main ()
    {
        int num1,num2,sun;
     
        scanf("%d %d",&num1,&num2);
        int value = sum(num1,num2);
        printf("%d",value);
     
     
        return 0;
    }
