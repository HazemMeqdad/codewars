# https://www.codewars.com/kata/550498447451fbbd7600041c
import math


def comp(array1, array2) -> bool:
    print(array1,array2)
    if (array1 is None or array2 is None):
        return False
    array1 = [abs(i) for i in array1]
    for i in array2 or []:
        if math.sqrt(i) not in array1:
            return False
        array1.pop(array1.index(math.sqrt(i)))
    return True
