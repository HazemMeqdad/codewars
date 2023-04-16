# https://www.codewars.com/kata/525f50e3b73515a6db000b83
to_string = lambda n: [str(i) for i in n];create_phone_number = lambda n: f"({''.join(to_string(n[:3]))}) {''.join(to_string(n[3:6]))}-{''.join(to_string(n[6:10]))}"
