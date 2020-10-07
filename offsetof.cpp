/* offsetof example */
#include <stdio.h>      /* printf */
#include <stddef.h>     /* offsetof */

class foo {
	private:
		int something;
	public:
	  char a;
	    char b[10];
	      char c;
};

int main ()
{
	  printf ("offsetof(foo,a) is %d\n",(int)offsetof(foo,a));
	    printf ("offsetof( foo,b) is %d\n",(int)offsetof( foo,b));
	    printf ("offsetof( foo,c) is %d\n",(int)offsetof( foo,c));
	        
	        return 0;
}
