import time
import datetime

day, month = [int(x) for x in input().split()]

print (datetime.date(2009,month,day).strftime("%A"))
