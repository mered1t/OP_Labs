def sumOfDiv(num):
        accamulator = 0
        for i in range (1, num):
            if num % i == 0:
                accamulator += i            
        return accamulator



sum = 0
counter = 0
eps = int(input('Enter the number: '))
while counter <= eps:
     counter+=1
     sum = sumOfDiv(counter) 
     if counter == sum: 
         continue
     if sumOfDiv(sum) == counter and counter > sum:
         print("Amicable pair: ", sum, " and ", counter)
print("The programm ended")    