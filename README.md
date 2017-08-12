# Malloc_Error-in-c-language-
Check the error !
Discreption:
  The malloc function in c allocates the memmory at run time as user defines.
  But in this program i gave the size of dynamic array (ex 5) and for imformation perpose i increase the valu of size of array(i.e in      for(i=0;i<n+5;i++))at the input as well as output function
  Problem is that the malloc function allocates the memmory of user defined size(ex (int *)malloc(n*sizeof(int)) ).
  But in this program the allocation of memmory will be "n" and i am giving the input "n+5" numbers. It stores n+5 numbers as well as outputs(shows) the n+5 numbers.
  If malloc function allocates size dynamic as user defines (ex n) then the extra 5 numbers are were stored.
  As we gave any number other than 5 (i.e n+10,n+20) then also it accepts all value and stores.
  Need help!!
  Thanks......
