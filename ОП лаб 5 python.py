number = int(input('Enter the number: '))
maxCounter = 0
maxDivN = 0

y=1

if (number<=0):
    print("You have entered wrong number")

else: 
    for i in range(1, number+1):
        
        y=y+1
        counter = 0
        
        for j in range(1, y):
            
            if(i % j == 0):
                counter = counter + 1
                
            if (counter >= maxCounter):
                maxCounter = counter
                maxDivN = i
                
print ("The biggest sum of dividers is in the number = ", maxDivN)
