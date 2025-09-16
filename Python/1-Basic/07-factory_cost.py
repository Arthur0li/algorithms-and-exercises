'''
The cost of a new car to the consumer is the sum of the factory cost plus the distributor’s
percentage and the taxes (applied to the factory cost). 

Assuming the distributor’s percentage is 28% and the taxes are 45%, 
write an algorithm to read the factory cost of a car, calculate, 
and display the final cost to the consumer.
'''

factory_cost = float(input("Type the factory cost of the car: "))


print ("\nThe final cost is:", factory_cost + factory_cost * 28 / 100 + factory_cost * 45 / 100)