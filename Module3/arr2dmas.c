#include<stdio.h>
int main(){
    int m,n,p,q,k,ar1[2][2],ar2[2][2],i,j,add[2][2],sub[2][2],mul[2][2];
    printf("enter values for first array:");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
       scanf("%d %d",&ar1[i][j]);
    }
}
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
     printf("%d %d",ar1[i][j]);
    }
    }
     printf("enter values for second array:");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
       scanf("%d %d",&ar2[i][j]);
    }
}
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
     printf("%d %d",ar2[i][j]);
    }
    }
    // adding two array
    printf("the addition of two mattrix are:");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
          add[i][j]=ar1[i][j]+ar2[i][j];
          
        }
        printf("the summation is:%d",add[i][j]);
}
// subtraction of two matrix
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
          sub[i][j]=ar1[i][j]-ar2[i][j];
          
        }
}
printf("the subtraction is:%d",sub[i][j]);
// multiplication of matrix
   for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
          mul[i][j]=ar1[i][j]*ar2[i][j];
    }
  }
  for(i=0;i<m;i++){
   for(j=0;j<q;j++){
    for(k=0;k<p;k++){
      mul[i][j]+=ar1[i][k]*ar2[i][k];
      printf("The multiplication is:");
      for(i=0;i<m;i++)
   {for(j=0;j<q;j++){
    printf("%d",mul[i][j]);
    }
   }
 }   
   }
}