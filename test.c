#include <stdio.h>

int main(){    
    int a = 0;
    if (a == 0){
        a = 5;
    }
    printf("%d\n",a);
    /*
    int a[] = {1,2,3,4,5,6,7,8,9};
    int total = 0;
    for (int i = 0; i < (sizeof(a)/ sizeof(int)); ++i){
        total += a[i];
    }
    printf("%d\n", total);
    */
    /*
    int a, b, c, d, e;
    a = 17;
    b = 3;
    c = a + b;
    d = c * 2;
    printf("%d \n",d);
    e = d ^ c;
    printf("%d \n",e);
    a = 56;
    b = a | e;
    printf("%d \n",b);
    c = b & a;
    printf("%d \n",c);
    d = c - 25;
    printf("%d \n",d);
	*/
    /*
    int a = 1;
	int b = 0;
	  while(1) {
		switch(b) {
		  case 0:
			if(a == 0)
			  b = 1;
			else
			  b = 2;
			break;
		  case 1:
            printf("%d %d\n", a,b);
			return 1;
		  case 2:
            printf("%d %d\n", a,b);
			return 10;
		  default:
			break;
		}
	  }
	  return 0;
      */
    /*
    int a = 986;
    while (a != 1){
        printf("%d\n", a);
        if ((a & 1) == 1){
            a *= 3;
            a += 1;
        }
        else{
            a /= 2;
        }
    }
    return a;
    */
}
