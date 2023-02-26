#include<stdio.h>

 int main()
 {
     int b[3][3];
     int a[3][3];
     int s[3][3];
     int d[3][3];
     
     int i,j,r,c,sum,k;
     printf("Enter order of matrix ");
     scanf("%d%d",&r,&c);
    if(r==c)
	{
	 
     printf("Enter first matrix:- \n");
     
     for(i=0;i<r;i++)
    {    printf("Enter a %d = ",i);
       for(j=0;j<c;j++)
         scanf("%d",&a[i][j]);
        printf("\n");
    }
    
    printf("\n");        
         
         printf("Enter second Matrix:- \n");
         
          for(i=0;i<r;i++)
    {    printf("Enter a %d = ",i);
       for(j=0;j<c;j++)//
         scanf("%d",&b[i][j]);
        printf("\n");
    }
         printf("\n");
         
         printf("Given matrix is A:-\n");
    
     for(i=0;i<r;i++)
    {   for(j=0;j<c;j++)
          printf("%d ",a[i][j]);
          
        printf("\n");
    }
        printf("\n");
         printf("Given Matrix b is:- \n");
         
      for(i=0;i<r;i++)
    {   for(j=0;j<c;j++)
          printf("%d ",b[i][j]);
          
        printf("\n");
    }   
         printf("\n");
         
      //addition of matrix 
     for(i=0;i<r;i++)
     {  for(j=0;j<c;j++)
            s[i][j]=a[i][j]+b[i][j];
     }   
     
     printf("Addition of Matrix A & B\n");
     
     for(i=0;i<r;i++)
     {  for(j=0;j<c;j++)
           printf("%d ",s[i][j]);
    printf("\n");
     }  
     
     printf("\n");
     
     
    
     
     //matrix multiplication
	 for(i=0;i<r;i++)
      { for(j=0;j<c;j++)
         { sum=0;
             for(k=0;k<r;k++)
                {   sum+=b[i][k] * a[k][j];
                }
         d[i][j] = sum;
             
         }
      }
      
       printf("Multiplication of matrix A & B \n");
	   //matrix print       
     for(i=0;i<r;i++)
      { for(j=0;j<c;j++)
            printf("%d ",d[i][j]);
            
        printf("\n");
      }
    }
    
    else
       printf("\nThis calculation is allowed when rows & coloum are equal");
    }
