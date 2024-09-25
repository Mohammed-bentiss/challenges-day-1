int main() {
   int a,b,s,st;
   s=0;
   st =0;
   printf ("entre la premiér valeur: ");
   scanf ("%d",&a);
   printf("la la deuxieme valeur");
   scanf("%d",&b);
   if (a==b){
   s=a+b;
   st=s*3;
   printf("la some egale: %d\n",s);
   printf("le triple de la some egale: %d",st);
   } 
   else{
       s=a+b;
   printf("la some egale: %d",s);
   }

    return 0;
}