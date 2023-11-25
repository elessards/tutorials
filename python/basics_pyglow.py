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
    time.sleep(1)

    # LED parameters
    piglow.all(0)
    piglow.set([i],100)
    piglow.show()
    
    # iterate
    i += 1

    # stop program with if statement
    if i == 15:
        
        clear = lambda: os.system('clear')
        clear()
        print(i)
        print('Code finished')

        bool = False
