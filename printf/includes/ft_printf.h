#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct	s_format
{
	va_list  args;    	// arg to print out                    
      int   wdt;        // width                
      int   prc;        // precision              
      int   zero;       // zero padding               
      int   pnt;        // .     
      int   dash;       // -               
      int   tl;         // total_length (return value)              
      int   sign;       // pos or neg number               
      int   is_zero;    // is number zero                 
      int   perc;       // %               
      int   sp;         // space flag ' '   
}			t_format;

int	ft_printf(const char *str, ...);

#endif