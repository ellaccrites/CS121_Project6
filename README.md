# CS121_Project6

## File IO Algorithm

```
create ifstream called inFile
create string for currentLine
create stringstream ss
create integer num1
create integer num2
create string sNum1
create string sNum2
create string text

open inFile
create while loop for getline(inFile, and currentLine):
    clear ss
    put empty string in ss

    put currentLine into ss
    read currentLine til ',' and put in sNum1
    read currentLine til ',' and put in sNum2
    read rest of currentLine and put in text

    put sNum1 through ss
    transfer value in ss into num1
    
    put sNum2 through ss
    transfer value in ss into num2

    create integer total = num1 + num2
    
    output text total number of times

close file
```
