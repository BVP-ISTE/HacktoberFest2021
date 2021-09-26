"""
Python script to display the various Date Time formats.

a) Current date and time
b) Current year
c) Month of year
d) Week number of the year
e) Weekday of the week
f) Day of year
g) Day of the month
h) Day of week
"""

import time
import datetime
print("Current date and time: " , datetime.datetime.now())
print("Current year: ", datetime.date.today().strftime("%Y"))
print("Month of year: ", datetime.date.today().strftime("%B"))
print("Week number of the year: ", )
print("Weekday of the week: ", datetime.date.today().strftime("%w"))
print("Day of year: ", )
print("Day of the month : ", )
print("Day of week: ", datetime.date.today().strftime("%A"))
