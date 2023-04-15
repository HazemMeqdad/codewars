# https://www.codewars.com/kata/54b724efac3d5402db00065e

def decodeMorse(morse_code: str):
    # Remove prefix
    if (morse_code.startswith(" ")):
        i = ' '
        while not (i != ' '):
            morse_code = morse_code.removeprefix(" ")
            i = morse_code[0]
    # Remove suffix
    if (morse_code.endswith(" ")):
        i = ' '
        while not (i != ' '):
            morse_code = morse_code.removesuffix(" ")
            i = morse_code[-1]
    result = ""
    for word in morse_code.split("   "):
        for char in word.split(" "):
            result += MORSE_CODE[char]
        result += " "
    result = result.removesuffix(" ")
    return result
