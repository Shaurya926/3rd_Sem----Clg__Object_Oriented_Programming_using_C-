#include<stdio.h>

class test 
{
    public:
    int val;
        void show()
        {
            printf("\nm=%d",val);
        }
};
int main ()
{
    printf("hello");
    test t1,a2;
    t1.val=3;
    a2.val=4;
    a2.show();
    t1.show();
    return 0;
    
}

/*class outer 
{
    public:
    class inner
    {
        public:
        void display()
        {
            printf("Inner class");
        }
    };
};
int main()
{
   outer::inner t2;
    t2.display();*/
    //for(int i=0;i<4;i++){
       // for(int j=4;j<i;j++){
         //   printf(" ");
        //}for(int k=0;k<=i;k++){
          //  printf("*");
        //}for(int p=1;p<=;p++){
          //  printf("*");
        //}printf("\n");
    //for(int i=0;i<5;i++){
        //for(int j=0;j<=i;j++){
          //  printf(" ");
        //}for(int k=5;k>1;k--){
          //  printf("*");
        //}for(int p=5;p>=1;p--){
         //   printf("*");
       // }printf("\n");
    // for(int i=0;i<4;i++){
    //     for(int j=4;j<i;j++){
    //         printf(" ");
    //     }for(imt k=0;k>=i;k--){
    //         printf("*");
    //     }for(int p=1;p<=;p++){
    //         printf("*");
    //     }printf("\n");
    // }}
    
    
    