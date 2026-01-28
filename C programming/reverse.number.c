  #include<stdio.h>
  #include<math.h>
  int main(){
  	
  
    int n,r,s=0;
    scanf("%d",&n);
    while(n>0)
        {
        r=n%10;
        s=s*10+r;
        n=n/10;
        }
    printf("%d",s);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
