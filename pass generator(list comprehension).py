import random
import string

pass_len = 12
charvalues = string.ascii_letters + string.digits + string.punctuation

# one more method is there list comprehension in which pass is stored in list form..
password = "".join([random.choice(charvalues) for i in range(pass_len)])  #for creating in string format...
print("your random password is: ", password)

# so after char values we have to write only.
res = [random.choice(charvalues) for i in range(pass_len)]   #to form list
print(res)     #so ans will same but only it's store in list..