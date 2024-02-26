
from cs50 import get_string
# ways to refer to a variable

answer = get_string("What's your name?: ")
print("My name is " + answer)

#or

print("My name is", answer)

#or most commo way

print(f"My name is {answer}")
