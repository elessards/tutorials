# Author: Justin Pedersen
# Date: 11/12/2023
# Description: code for basic python operations

# modules
import piglow
import time
import os

# initialize
i = 0
bool = True

while bool:

    # clear console
    clear = lambda: os.system('clear')
    clear()

    print(i)

    # LED parameters
    piglow.all(0)
    piglow.set([i],100)
    piglow.show()
    
    # iterate
    i += 1

    # pause
    time.sleep(2)

    # stop program with if statement
    if i == 18:
        
        clear = lambda: os.system('clear')
        clear()
        print(i)
        print('Code finished')

        bool = False
