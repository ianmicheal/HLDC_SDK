//moi: added functions needed in some classes, but not recognized by the compiler
  #define isascii(c) ( (c>=0x00&&c<=0x7f)?1:0 )
  #define isspace(c) ( ((c>=0x09&&c<=0x0d)||c==0x20)?1:0 )
  #define isdigit(c) ( (c>=0x00&&c<=0x09)?1:0 )
  #define isupper(c) ( (c>='A'&&c<='Z')?1:0 )
  #define isalpha(c) ( ((c>='A'&&c<='Z')||(c>='a'&&c<='z'))?1:0 )
  #define isprint(c) ( (c>=0x20&&c<=0x7e)?1:0 )
  #define isalnum(c) ( (isalpha(c)||isdigit(c))?1:0 )
  #define iscntrl(c) ( ((c>=0x00&&c<=0x1f)||c==0x7f)?1:0 )
  #define islower(c) ( (c>='a'&&c<='z')?1:0 )
  #define ispunct(c) ( !(isalnum(c)||isspace(c))?1:0 )
  #define isxdigit(c) ( ((c>=0&&c<=9)||(c>='A'&&c<='F')||(c>='a'&&c<='f'))?1:0 )
