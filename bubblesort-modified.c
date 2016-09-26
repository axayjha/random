#include "define.h"
#include array_lib
#include io_library
#include std_library


start

int a[] _is
#include "a.txt"	
_and_

print("actual array: \n") _and
print_array(a, lengthOf(a)) _and


loop_while int i is 0 _while i is_less_than lengthOf(a) _and increment i and_
again_loop_while int j is 0 _while j is_less_than lengthOf(a) minus i minus 1 _and increment j and_
check_if a[j] grtr_than a[j+1] and_do
a[j+1] tada a[j] tada a[j+1] tada a[j] done


print("sorted array: \n") _and
print_array(a, lengthOf(a)) done


end
