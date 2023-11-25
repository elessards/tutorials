# Author: Justin Pedersen
# Date: 11/12/2023
# Description: code for basic python operations

# modules
import piglow
import time
import os

# initialize
i = 1
bool = True

while bool:

    # clear console
    clear = lambda: os.system('clear')
    clear()

    print(i)
    time.sleep(1)
    
    # iterate
    i += 1

    # stop program with if statement
    if i == 10:
        
        bool = False
        print('Code finished')
