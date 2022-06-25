#include <stdio.h>
#include <time.h>

struct tm{                                                                                                                  
   int tm_year;          /* Year - 1900.  */                       
   int tm_wday;          /* Day of week. [0-6] */                 
   int tm_yday;          /* Days in year.[0-365] */                               
}
 
int main(){
   const time_t timer = time(NULL);
	
}
